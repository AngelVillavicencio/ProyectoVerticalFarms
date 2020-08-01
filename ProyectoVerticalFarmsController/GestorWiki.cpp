#include "GestorWiki.h"


using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorWiki::GestorWiki()
{
	this->listaWiki = gcnew List<Wiki^>;
	this->conexion = gcnew SqlConnection();
}

void GestorWiki::agregarWiki(Wiki^ objWiki)
{
	this->listaWiki->Add(objWiki);
}

void GestorWiki::EditarWiki(int codigo, Wiki^ objWiki)
{
	int indice = -1;
	indice = BuscarWikiXCodigo(codigo);
	if (indice != -1)
	{
		this->listaWiki->RemoveAt(indice);
		this->listaWiki->Insert(indice, objWiki);
	}
}

void GestorWiki::EliminarWiki(int codigo)
{
	int indice = -1;
	indice = BuscarWikiXCodigo(codigo);
	if (indice != -1)
		this->listaWiki->RemoveAt(indice);
}




int GestorWiki::BuscarWikiXCodigo(int codigo)
{
	int indice = -1;
	for (int i = 0; i < this->listaWiki->Count; i++)
	{
		if (this->listaWiki[i]->codigo == codigo)
		{
			indice = i;
			break;
		}
	}
	return indice;
}

int GestorWiki::ObtenerCantidad()
{
	return this->listaWiki->Count;
}

Wiki^ GestorWiki::ObtenerWikiXindice(int indice)
{
	return this->listaWiki[indice];
}

Wiki^ GestorWiki::ObtenerWikiXCodigo(int codigo)
{
	Wiki^ objWikiBuscado;
	for (int i = 0; i < this->listaWiki->Count; i++)
	{
		if (this->listaWiki[i]->codigo == codigo)
		{
			objWikiBuscado = this->listaWiki[i];
			break;
		}
	}
	return objWikiBuscado;
}

void GestorWiki::serealizar()
{
	Stream^ stream = File::Open("wiki.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaWiki);
	stream->Close();
}

void GestorWiki::deserealizar()
{
	Stream^ stream = File::Open("wiki.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaWiki = dynamic_cast<List<Wiki^>^>(bin->Deserialize(stream));
	stream->Close();
}


/// BASE DE DATOS




void GestorWiki::abrirConexion()
{
	String^ password = "angel20171781";
	this->conexion->ConnectionString = "Server=programandobonito.cpmlh7ldjsal.us-east-1.rds.amazonaws.com;DataBase=SistemaAgriculturaVertical;User ID=programandobonito;Password=" + password + ";";
	this->conexion->Open();
}

void GestorWiki::cerrarConexion()
{
	this->conexion->Close();

}

void GestorWiki::agregarWikiBD(Wiki^ objWiki)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into Wiki(tipoVegetal,nombrePlanta,tipoDeIluminacion,temperaturaIdeal,temperaturaMin,temperaturaMax,humedadIdeal,humedadMin,humedadMax,IluminacionIdeal,IluminacionMin,IluminacionMax) values('" + objWiki->tipoVegetal + "','" + objWiki->nombrePlanta + "','" + objWiki->tipoDeIluminacion + "','" + objWiki->temperaturaIdeal + "','" + objWiki->temperaturaMin + "','" + objWiki->temperaturaMax + "','" + objWiki->humedadIdeal + "','" + objWiki->humedadMin + "','" + objWiki->humedadMax+ "','" + objWiki->IluminacionIdeal + "','" + objWiki->IluminacionMin + "','" + objWiki->IluminacionMax + "');";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorWiki::editarWikiBD(int codigo, Wiki^ objWiki)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "UPDATE Wiki SET temperaturaIdeal='" + objWiki->temperaturaIdeal + "', humedadIdeal='" + objWiki->humedadIdeal + "', IluminacionIdeal='" + objWiki->IluminacionIdeal + "', temperaturaMin='" + objWiki->temperaturaMin + "', temperaturaMax='" + objWiki->temperaturaMax + "', humedadMin='" + objWiki->humedadMin + "', humedadMax='" + objWiki->humedadMax + "', IluminacionMin='" + objWiki->IluminacionMin + "', IluminacionMax='" + objWiki->IluminacionMax + "',tipoDeIluminacion='"+objWiki->tipoDeIluminacion +"' WHERE codigo="+codigo+" ;";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorWiki::EliminarWikiBD(int codigo)
{
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from Wiki where codigo = " + codigo + ";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}	
}

void GestorWiki::cargarWikisBD()
{
	this->listaWiki->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Wiki";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			

			int codigo = safe_cast<int>(data[0]);
			String^ tipoVegetal = safe_cast<String^>(data[1]);
			String^ nombrePlanta = safe_cast<String^>(data[2]);
			String^ tipoDeIluminacion = safe_cast<String^>(data[3]);
			float temperaturaIdeal = safe_cast<double>(data[4]);
			float temperaturaMin = safe_cast<double>(data[5]);
			float temperaturaMax = safe_cast<double>(data[6]);
			float humedadIdeal = safe_cast<double>(data[7]);
			float humedadMin = safe_cast<double>(data[8]);
			float humedadMax = safe_cast<double>(data[9]);
			float IluminacionIdeal = safe_cast<double>(data[10]);
			float IluminacionMin = safe_cast<double>(data[11]);
			float IluminacionMax = safe_cast<double>(data[12]);



			Wiki^ objWiki = gcnew Wiki(codigo, tipoVegetal, nombrePlanta, tipoDeIluminacion, temperaturaIdeal, temperaturaMin,  temperaturaMax,  humedadIdeal,  humedadMin,  humedadMax,  IluminacionIdeal,  IluminacionMin,IluminacionMax);
			//agregar acá a sus estaciones correspondientes

			this->listaWiki->Add(objWiki);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

Wiki^ GestorWiki::obtenerWikiXCodigoBD(int codigodeWiki)
{
	
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Wiki where codigo="+codigodeWiki+";";
		SqlDataReader^ data = query->ExecuteReader();
		Wiki^ objWiki;
		while (data->Read()) {
			
			int codigo = safe_cast<int>(data[0]);
			String^ tipoVegetal = safe_cast<String^>(data[1]);
			String^ nombrePlanta = safe_cast<String^>(data[2]);
			String^ tipoDeIluminacion = safe_cast<String^>(data[3]);
			float temperaturaIdeal = safe_cast<double>(data[4]);
			float temperaturaMin = safe_cast<double>(data[5]);
			float temperaturaMax = safe_cast<double>(data[6]);
			float humedadIdeal = safe_cast<double>(data[7]);
			float humedadMin = safe_cast<double>(data[8]);
			float humedadMax = safe_cast<double>(data[9]);
			float IluminacionIdeal = safe_cast<double>(data[10]);
			float IluminacionMin = safe_cast<double>(data[11]);
			float IluminacionMax = safe_cast<double>(data[12]);

			objWiki = gcnew Wiki(codigo, tipoVegetal, nombrePlanta, tipoDeIluminacion, temperaturaIdeal, temperaturaMin, temperaturaMax, humedadIdeal, humedadMin, humedadMax, IluminacionIdeal, IluminacionMin, IluminacionMax);			
		}
		data->Close();
		this->cerrarConexion();
		return objWiki;
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}


}

Wiki^ GestorWiki::obtenerWikiXPlantaBD(String^ planta)
{
	
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Wiki where nombrePlanta='" + planta + "'";
		SqlDataReader^ data = query->ExecuteReader();
		Wiki^ objWiki;
		while (data->Read()) {

			int codigo = safe_cast<int>(data[0]);
			String^ tipoVegetal = safe_cast<String^>(data[1]);
			String^ nombrePlanta = safe_cast<String^>(data[2]);
			String^ tipoDeIluminacion = safe_cast<String^>(data[3]);
			float temperaturaIdeal = safe_cast<double>(data[4]);
			float temperaturaMin = safe_cast<double>(data[5]);
			float temperaturaMax = safe_cast<double>(data[6]);
			float humedadIdeal = safe_cast<double>(data[7]);
			float humedadMin = safe_cast<double>(data[8]);
			float humedadMax = safe_cast<double>(data[9]);
			float IluminacionIdeal = safe_cast<double>(data[10]);
			float IluminacionMin = safe_cast<double>(data[11]);
			float IluminacionMax = safe_cast<double>(data[12]);

			objWiki = gcnew Wiki(codigo,tipoVegetal, nombrePlanta, tipoDeIluminacion, temperaturaIdeal, temperaturaMin, temperaturaMax, humedadIdeal, humedadMin, humedadMax, IluminacionIdeal, IluminacionMin, IluminacionMax);

			
		}
		data->Close();
		this->cerrarConexion();
		return objWiki;
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}


}

void GestorWiki::eliminarCamarasXCodigoWiki(int codigowiki)
{
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from CamaraCrecimiento where codigowiki = " + codigowiki + ";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}

	GestorEstacion^ objGestorEstacion = gcnew GestorEstacion();
	objGestorEstacion->cargarEstacionesBD();
	for (int i = 0; i < objGestorEstacion->listaEstaciones->Count;i++)
	{
		int codigoEstacion = objGestorEstacion->listaEstaciones[i]->codigo;
		int cantidadCamaras = objGestorEstacion->ObtenerCantidadDeCamarasXEstacionBD(codigoEstacion);

		try
		{
			this->abrirConexion();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = conexion;
			query->CommandText = "update Estacion set  cantidadCamaras=" + cantidadCamaras + " where codigo= " + codigoEstacion + " ;";
			query->ExecuteNonQuery();
			this->cerrarConexion();
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}


	}
	






}





