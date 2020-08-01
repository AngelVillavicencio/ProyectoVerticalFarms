#include "GestorTareaRealizada.h"


using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;



GestorTareasRelizadas::GestorTareasRelizadas()
{
	this->listaTareasRealizadas = gcnew List<TareaRealizada^>();
	this->conexion = gcnew SqlConnection();
}

void GestorTareasRelizadas::AgregarTarea(TareaRealizada^ objTarea)
{
	this->listaTareasRealizadas->Add(objTarea);
}
int GestorTareasRelizadas::ObtenerCantidad()
{
	return this->listaTareasRealizadas->Count;
}
TareaRealizada^ GestorTareasRelizadas::ObtenerTareaXIndice(int indice)
{
	return this->listaTareasRealizadas[indice];
}
void GestorTareasRelizadas::EscribirEnArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaTareasRealizadas->Count);
	for (int i = 0; i < this->listaTareasRealizadas->Count; i++)
	{
		TareaRealizada^ objTarea = this->listaTareasRealizadas[i];
		lineas[i] = objTarea->temporizador + "," + objTarea->fecha + "," + objTarea->regado+"," + objTarea->Iluminacion + "," + objTarea->Ventilador;
	}
	File::WriteAllLines("TareaRealizada.txt", lineas);
}

void GestorTareasRelizadas::LeerTareasRealizadasDesdeArchivo()
{
	this->listaTareasRealizadas->Clear();
	//El archivo de texto no es más que un arreglo de string
	array<String^>^ lineas = File::ReadAllLines("TareaRealizada.txt");

	String^ separadores = ",";
	/*for each (String ^ lineaTarea in lineas)
	{
		array<String^>^ palabras = lineaTarea->Split(separadores->ToCharArray());
		String^ t = (palabras[0]);
		DateTime^ fecha = Convert::ToDateTime(palabras[1]);
		String^ Agua = palabras[2];
		String^ Iluminacion = palabras[3];
		String^ Ventilador = palabras[4];
		int tiempo = Convert::ToInt64(t);

		TareaRealizada^ objTarea = gcnew TareaRealizada(tiempo, fecha, Agua,Iluminacion,Ventilador);
		this->listaTareasRealizadas->Add(objTarea);
	}*/
}
void ProyectoVerticalFarmsController::GestorTareasRelizadas::Serializar()
{
	Stream^ stream = File::Open("tareas.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaTareasRealizadas);
	stream->Close();
	

}

void ProyectoVerticalFarmsController::GestorTareasRelizadas::Deserializar()
{
	Stream^ stream = File::Open("tareas.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaTareasRealizadas = dynamic_cast<List<TareaRealizada^>^>(bin->Deserialize(stream));
	stream->Close();
	
}


List<TareaRealizada^>^ ProyectoVerticalFarmsController::GestorTareasRelizadas::BuscarTareaRelizadas()
{
	List<TareaRealizada^>^ listaTareasEncontradas = gcnew List<TareaRealizada^>();
	for (int i = 0; i < this->listaTareasRealizadas->Count; i++) {
		TareaRealizada^ objTarea = this->listaTareasRealizadas[i];
		listaTareasEncontradas->Add(objTarea);
	}
	return listaTareasEncontradas;
}


//////BASE DE DATOOSSSSS




void GestorTareasRelizadas::abrirConexion()
{
	String^ password = "angel20171781";
	this->conexion->ConnectionString = "Server=programandobonito.cpmlh7ldjsal.us-east-1.rds.amazonaws.com;DataBase=SistemaAgriculturaVertical;User ID=programandobonito;Password=" + password + ";";
	this->conexion->Open();
}

void GestorTareasRelizadas::cerrarConexion()
{
	this->conexion->Close();

}

void GestorTareasRelizadas::agregarTareaRealizadaBD(TareaRealizada^ objTareaRealizada)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into TareaRealizada(codigodeCamara,temporizador,fecha,regado,Iluminacion,Ventilador) values(" + objTareaRealizada->codigoCamaraDeCrecimiento + "," + objTareaRealizada->temporizador + ",'" + objTareaRealizada->fecha + "','" + objTareaRealizada->regado + "','" + objTareaRealizada->Iluminacion + "','" + objTareaRealizada->Ventilador + "');";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorTareasRelizadas::cargarTareasRealizadasBDXcamara(int codigoDeCamara)
{
	this->listaTareasRealizadas->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from TareaRealizada where codigodeCamara="+codigoDeCamara+";";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			int codigodeCamara = safe_cast<int>(data["codigodeCamara"]);
			int temporizador = safe_cast<int>(data["temporizador"]);
			DateTime^ fecha = safe_cast<DateTime^>(data["fecha"]);
			String^ regado = safe_cast<String^>(data["regado"]);
			String^ Iluminacion = safe_cast<String^>(data["Iluminacion"]);
			String^ Ventilador = safe_cast<String^>(data["Ventilador"]);

			TareaRealizada^ objTareaRealizada = gcnew TareaRealizada(codigo, codigodeCamara,temporizador,fecha,regado,Iluminacion,Ventilador);
			this->listaTareasRealizadas->Add(objTareaRealizada);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorTareasRelizadas::AgregarTareaRealizadaBD(TareaRealizada^ objTarea)
{
	throw gcnew System::NotImplementedException();

}

void GestorTareasRelizadas::cargarTareasRealizadasBD(int codigoCamara)
{
	throw gcnew System::NotImplementedException();
}

