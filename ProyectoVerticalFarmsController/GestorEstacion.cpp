#include "GestorEstacion.h"

using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorEstacion::GestorEstacion()
{
	this->listaEstaciones = gcnew List<Estacion^>();
	this->listaCamarasCrecimientos = gcnew List<CamaraCrecimiento^>();
	this->conexion = gcnew SqlConnection();
}
List<Estacion^>^ GestorEstacion::getlistaEstaciones() {
	return this->listaEstaciones;
}

void GestorEstacion::eliminarEstacionXcodigo(int codigo)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(codigo);
	if (indice != -1)
		this->listaEstaciones->RemoveAt(indice);
}

void GestorEstacion::agregarEstacion(Estacion^ objEstacion)
{

	this->listaEstaciones->Add(objEstacion); 
}
int GestorEstacion::IndexEstacion(int codigo)
{
	int index = -1;
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		if (this->listaEstaciones[i]->codigo == codigo) {
			index = i;
			break;
		}
		
	}
	return index;
}
void GestorEstacion::editarEstacion(int index, Estacion^ objEstacion)
{

	this->listaEstaciones[index] = objEstacion;

}

void GestorEstacion::eliminarEstacion(int indice)
{
	this->listaEstaciones->RemoveAt(indice);
}

int GestorEstacion::ObtenerCantidadDeEstaciones()
{
	return this->listaEstaciones->Count;
}

Estacion^ GestorEstacion::buscaEstacionXindice(int i)
{
	return this->listaEstaciones[i];
}

Estacion^ GestorEstacion::buscaEstacionXCodigo(int codigo)
{
	int indice = IndexEstacion(codigo);
	if (indice != -1) {
		return this->listaEstaciones[indice];

	}
}

List<Estacion^>^ GestorEstacion::EstacionesEncargadas()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}



void GestorEstacion::GuardarDatosEstacion()
{
	guardarDatosCamaraCrecimiento();
	array<String^>^ lineas = gcnew array<String^>(this->listaEstaciones->Count);
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		Estacion^ objEstacion = this->listaEstaciones[i];
		//String^ palabras = objEstacion->codigo + "+" + objEstacion->nombre + "+" + objEstacion->cantidadCamaras + "+" + objEstacion->en() + "+" + objEstacion->getDescripcion();
		//lineas[i] = palabras;

	}
	File::WriteAllLines("Estaciones.txt",lineas);
	GuardarDetalleEstacion();
}
void GestorEstacion::GuardarDetalleEstacion() {
	/*
	array<String^>^ lineas = gcnew array<String^>(this->listaCamarasCrecimientos->Count);
	int m = 0;
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		Estacion^ objEstacion = this->listaEstaciones[i];
		for (int j = 0; j < objEstacion->getCantidadCamaras(); j++)
		{
			String^ palabras = objEstacion->getId() + "+" + objEstacion->getCamaraXIndice(j)->getId();
			lineas[m] = palabras;
			m++;
		}
	}
	File::WriteAllLines("detalleEstaciones.txt", lineas);*/
}
void GestorEstacion::CargarDatosEstacion()
{
	/*
	this->listaEstaciones->Clear();
	array<String^>^ lineas = File::ReadAllLines("Estaciones.txt");
	String^ separador = "+";
	cargarCamarasDeCrecimiento();

	for each (String ^ lineaEstacion in lineas)
	{
		array<String^>^ palabras = lineaEstacion->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		String^ nombre = palabras[1];
		int cantidadCamaras = Convert::ToInt32(palabras[2]);
		String^ encargado = palabras[3];
		String^ descripcion = palabras[4];
		Estacion^ objEstacion = gcnew Estacion(id,nombre,encargado,descripcion, cantidadCamaras);
		this->listaEstaciones->Add(objEstacion);
	}
	cargarDetalleEstacion();*/
}

void GestorEstacion::guardarDatosCamaraCrecimiento()	
{
	/*
	array<String^>^ lineas = gcnew array<String^>(this->listaCamarasCrecimientos->Count);
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		CamaraCrecimiento^ objCamaraCrecimiento = this->listaCamarasCrecimientos[i];
		String^ palabras = objCamaraCrecimiento->getId() + ";" + objCamaraCrecimiento->getNumeroPiso() + ";" + objCamaraCrecimiento->getTipoCultivo() + ";" + objCamaraCrecimiento->getFaseCrecimiento() + ";" + objCamaraCrecimiento->getEstadoEncendido() + ";" + objCamaraCrecimiento->getComentario();
		lineas[i] = palabras;
	}
	File::WriteAllLines("camaraCrecimiento.txt", lineas);*/
}
void GestorEstacion::cargarCamarasDeCrecimiento()
{
	/*this->listaCamarasCrecimientos->Clear();
	array<String^>^ lineas = File::ReadAllLines("camaraCrecimiento.txt");
	String^ separador = ";";
	for each (String ^ lineCamaraCrecimiento in lineas)
	{
		array<String^>^ palabras = lineCamaraCrecimiento->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		int numeroPiso = Convert::ToInt32(palabras[1]);
		String^ tipoCultivo = palabras[2];
		String^ faseCrecimiento = palabras[3];
		String^ estadoEncendido = palabras[4];
		String^ comentario = palabras[5];
		CamaraCrecimiento^ objCamaraCrecimiento = gcnew CamaraCrecimiento(id, numeroPiso, tipoCultivo, faseCrecimiento, estadoEncendido, comentario);
		this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
	}*/
}
void GestorEstacion::cargarDetalleEstacion()
{
	
	/*array<String^>^ lineas = File::ReadAllLines("detalleEstaciones.txt");
	String^ separador = "+";
	for each (String ^ lineCamaraCrecimiento in lineas)
	{
		array<String^>^ palabras = lineCamaraCrecimiento->Split(separador->ToCharArray());
		int idEstacion = Convert::ToInt32(palabras[0]);
		int idCamara = Convert::ToInt32(palabras[1]);


		for (int i = 0; i < this->listaEstaciones->Count; i++)
		{
			if (idEstacion == this->listaEstaciones[i]->getId()) {
				for (int j = 0; j < this->listaCamarasCrecimientos->Count; j++)
				{
					if (idCamara == this->listaCamarasCrecimientos[j]->getId()) 
					{
						this->listaEstaciones[i]->AgregarALista(this->listaCamarasCrecimientos[j]);
						break;
					}
				}
			}
		}
	}*/
}

List<CamaraCrecimiento^>^ GestorEstacion::getListaDeCamaraDeCrecimiento()
{
	return this->listaCamarasCrecimientos;
}



/*FUNCIONES DE CAMARA DE CRECIMIENTO---------------------------------------------*/



void GestorEstacion::agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento)
{
	this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
}
int GestorEstacion::buscaIndiceCamaraCrecimientoXid(int id)
{
	int indice = -1;
	/*for (int i = 0; i < this->listaEstaciones->Count; i++)
	{
		if (this->listaEstaciones[i]->getId() == id)
		{
			indice = i;
			break;
		}
	}*/
	return indice;
}

void GestorEstacion::editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
	{
		this->listaCamarasCrecimientos[indice] = objCamaraCrecimiento;

	}
}

void GestorEstacion::eliminarCamaraCrecimiento(int id)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
		this->listaCamarasCrecimientos->RemoveAt(indice);
}

List<CamaraCrecimiento^>^ GestorEstacion::buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo)
{
	/*if (tipoCultivo == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getTipoCultivo() == tipoCultivo)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}*/
	return this->listaCamarasCrecimientos;
}


CamaraCrecimiento^ GestorEstacion::buscaCamaraCrecimientoXindice(int indice)
{
	return this->listaCamarasCrecimientos[indice];
}

int GestorEstacion::cantidadCamaras()
{
	return this->listaCamarasCrecimientos->Count;
}



List<CamaraCrecimiento^>^ GestorEstacion::buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento)
{
	/*if (faseCrecimiento == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getFaseCrecimiento() == faseCrecimiento)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}*/
	return this->listaCamarasCrecimientos;
}

int GestorEstacion::buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso)
{
	int indice = -1;
	/*for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		if (this->listaCamarasCrecimientos[i]->getNumeroPiso() == numeroPiso)
		{
			indice = i;
			break;
		}
	}*/
	return indice;
}

void GestorEstacion::serializar()
{
	Stream^ stream = File::Open("estaciones.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaEstaciones);
	stream->Close();
}

void GestorEstacion::deserializar()
{
	Stream^ stream = File::Open("estaciones.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaEstaciones = dynamic_cast<List<Estacion^>^>(bin->Deserialize(stream));
	stream->Close();
}



//BASE DE DATOS



void GestorEstacion::abrirConexion()
{
	String^ password = "angel20171781";
	this->conexion->ConnectionString = "Server=programandobonito.cpmlh7ldjsal.us-east-1.rds.amazonaws.com;DataBase=SistemaAgriculturaVertical;User ID=programandobonito;Password=" + password + ";";
	this->conexion->Open();
}

void GestorEstacion::cerrarConexion()
{
	this->conexion->Close();
}

void GestorEstacion::agregarEstacionBD(Estacion^ objEstacion)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into Estacion(nombre,descripcion,cantidadCamaras) values('" + objEstacion->nombre + "','" + objEstacion->descripcion + "','" + objEstacion->cantidadCamaras + "');";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorEstacion::editarEstacionBD(int codigoDeEstacion, Estacion^ objEstacion)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "update Estacion set nombre='" + objEstacion->nombre + "', descripcion= '" + objEstacion->descripcion + "', cantidadCamaras=" +objEstacion->cantidadCamaras+ " where codigo="+ codigoDeEstacion +";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorEstacion::eliminarEstacionBD(int codigoDeEstacion)
{
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from Estacion where codigo=" +codigoDeEstacion+";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

int GestorEstacion::ObtenerCantidadDeEstacionesBD()
{
	int cantidad = 0;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Estacion";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			cantidad++;
		}
		data->Close();
		this->cerrarConexion();
		return cantidad;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

void GestorEstacion::cargarEstacionesBD()
{
	this->listaEstaciones->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Estacion";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombre = safe_cast<String^>(data["nombre"]);
			String^ descripcion = safe_cast<String^>(data["descripcion"]);
			int cantidadCamaras = safe_cast<int>(data["cantidadCamaras"]);
			
			Estacion^ objEstacion = gcnew Estacion(codigo, nombre, descripcion);
			objEstacion->cantidadCamaras = cantidadCamaras;
			//agregar acá a sus camaras correspondientes
			//FALTAAAA AAGREGARLE LA LISTA DE CAMARAS DE CRECIMIENTO QUE LE CORRESPONDE A CADA ESTACION

			this->listaEstaciones->Add(objEstacion);
		}
		data->Close();
		this->cerrarConexion();
		/*for (int i = 0; i < listaEstaciones->Count; i++)
		{
			this->listaEstaciones[i]->listaCamaraCrecimiento = this->obtenerListaDeCamarasXEstacionBD(this->listaEstaciones[i]->codigo);

		}*/
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

Estacion^ GestorEstacion::obtenerEstacionXCodigoBD(int codigoDeEstacion)
{
	
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Estacion where codigo="+codigoDeEstacion+";";
		SqlDataReader^ data = query->ExecuteReader();
		Estacion^ objEstacion;
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombre = safe_cast<String^>(data["nombre"]);
			String^ descripcion = safe_cast<String^>(data["descripcion"]);
			int cantidadCamaras = safe_cast<int>(data["cantidadCamaras"]);


			objEstacion = gcnew Estacion(codigo, nombre, descripcion);
			objEstacion->cantidadCamaras = cantidadCamaras;
			//agregar acá a sus camaras correspondientes

		}

		data->Close();
		this->cerrarConexion();
		return objEstacion;

		
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorEstacion::verListaDeCamarasXEstacionBD(int codigoEstacion)
{
	/*List<CamaraCrecimiento^>^ listaDeCamaras = gcnew List<CamaraCrecimiento^>();
	List<int>^ listaDeCodigosDeCamaras = gcnew List<int>();
	listaDeCamaras->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento where codigoEstacion= " + codigoEstacion + "; ";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			
		}
		
		return listaDeCamaras;
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}*/
	this->listaCamarasCrecimientos->Clear();
	GestorWiki^ objGestorWiki = gcnew GestorWiki();
	objGestorWiki->cargarWikisBD();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento where codigoDeEstacion="+ codigoEstacion +"";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			int codigoDeEstacion = safe_cast<int>(data["codigoDeEstacion"]);
			int numerodePiso = safe_cast<int>(data["numerodePiso"]);
			String^ tipoCultivo = safe_cast<String^>(data["tipoCultivo"]);
			String^ fasedeCrecimiento = safe_cast<String^>(data["fasedeCrecimiento"]);
			String^ estado = safe_cast<String^>(data["estado"]);
			String^ comentario = safe_cast<String^>(data["comentario"]);
			int codigoWiki = safe_cast<int>(data["codigoWiki"]);


			Wiki^ objWiki = objGestorWiki->ObtenerWikiXCodigo(codigoWiki);

			CamaraCrecimiento^ objCamaraCrecimiento = gcnew CamaraCrecimiento(codigo, codigoDeEstacion, numerodePiso, tipoCultivo, fasedeCrecimiento,
				estado,
				comentario,
				codigoWiki,
				objWiki);
			//agregar acá a sus tareasREALIZADAS correspondientes A CADA CAMARA!


			/*


			ACAAAAA

			*/


			this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}


}

void GestorEstacion::agregarCamaraCrecimientoBD(int codigoDeEstacion, CamaraCrecimiento^ objCamaraCrecimiento)
{
	
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into CamaraCrecimiento(codigoDeEstacion,numerodePiso,tipoCultivo, fasedeCrecimiento,estado, comentario,  codigoWiki) values(" + codigoDeEstacion + "," + objCamaraCrecimiento->numerodePiso + ",'" + objCamaraCrecimiento->tipoCultivo + "','" + objCamaraCrecimiento->fasedeCrecimiento + "','" + objCamaraCrecimiento->Estado + "','" + objCamaraCrecimiento->comentario + "'," + objCamaraCrecimiento->codigoWiki + ");";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}

}



void GestorEstacion::editarCamaraCrecimientoBD(int codigoDeEstacion, CamaraCrecimiento^ objCamaraCrecimiento)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "update CamaraCrecimiento set numerodePiso=" + objCamaraCrecimiento->numerodePiso + ", tipoCultivo= '" + objCamaraCrecimiento->tipoCultivo + "', fasedeCrecimiento='" + objCamaraCrecimiento->fasedeCrecimiento + "', estado='" + objCamaraCrecimiento->Estado + "', comentario='" + objCamaraCrecimiento->comentario + "', codigoWiki=" + objCamaraCrecimiento->codigoWiki + " where codigoDeEstacion=" + codigoDeEstacion + " and codigo=" + objCamaraCrecimiento->codigo + " ;";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorEstacion::editarFaseYEstadoDeCamaraDeCrecimiento(int codigoDeCamaraCrecimiento, String^ faseCrecimiento, String^ Estado)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "update CamaraCrecimiento set  fasedeCrecimiento='" + faseCrecimiento + "', Estado='" + Estado + "' where codigo= " + codigoDeCamaraCrecimiento + " ;";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorEstacion::eliminarCamaraCrecimientoBD(int codigoDeEstacion, int codigoDeCamaraCrecimiento)
{
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from CamaraCrecimiento where codigoDeEstacion= " +codigoDeEstacion+ " and codigo="+ codigoDeCamaraCrecimiento +";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
	// PARA EDITAR LA CANTIDAD DE CAMARAS EN LA ESTACION
	int cantidadDeCamaras = ObtenerCantidadDeCamarasXEstacionBD(codigoDeEstacion);
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "update Estacion set  cantidadCamaras=" + cantidadDeCamaras + " where codigo= " + codigoDeEstacion + " ;";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

int GestorEstacion::ObtenerCantidadDeCamarasXEstacionBD(int codigoDeEstacion)
{
	
	int cantidad = 0;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento where codigoDeEstacion="+ codigoDeEstacion +";";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			cantidad++;
		}
		data->Close();
		this->cerrarConexion();
		return cantidad;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}

}

int GestorEstacion::ObtenerCantidadDeCamarasDeCrecimientoTotal()
{
	int cantidad = 0;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento ";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			cantidad++;
		}
		data->Close();
		this->cerrarConexion();
		return cantidad;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

void GestorEstacion::cargarCamaraDeCrecimientoBD()
{
	this->listaCamarasCrecimientos->Clear();
	GestorWiki^ objGestorWiki = gcnew GestorWiki();
	objGestorWiki->cargarWikisBD();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			int codigoDeEstacion = safe_cast<int>(data["codigoDeEstacion"]);
			int numerodePiso = safe_cast<int>(data["numerodePiso"]);
			String^ tipoCultivo = safe_cast<String^>(data["tipoCultivo"]);
			String^ fasedeCrecimiento = safe_cast<String^>(data["fasedeCrecimiento"]);
			String^ estado = safe_cast<String^>(data["estado"]);
			String^ comentario = safe_cast<String^>(data["comentario"]);
			int codigoWiki = safe_cast<int>(data["codigoWiki"]);
			
			
			Wiki^ objWiki = objGestorWiki->ObtenerWikiXCodigo(codigoWiki);

			CamaraCrecimiento^ objCamaraCrecimiento = gcnew CamaraCrecimiento(codigo, codigoDeEstacion, numerodePiso, tipoCultivo, fasedeCrecimiento,
				estado,
				comentario,
				codigoWiki,
				objWiki);
			//agregar acá a sus tareasREALIZADAS correspondientes A CADA CAMARA!


			/*
			
			
			ACAAAAA
			
			*/


			this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

CamaraCrecimiento^ GestorEstacion::obtenerCamaraCrecimientoXCodigoBD(int codigoDeCamaraCrecimiento)
{
	//MEJORAR LA BUSQUEDA
	GestorWiki^ objGestorWiki = gcnew GestorWiki();
	objGestorWiki->cargarWikisBD();
	CamaraCrecimiento^ objCamaraCrecimiento;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from CamaraCrecimiento where codigo= " + codigoDeCamaraCrecimiento + ";";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			int codigo = safe_cast<int>(data["codigo"]);
			int codigoDeEstacion = safe_cast<int>(data["codigoDeEstacion"]);
			int numerodePiso = safe_cast<int>(data["numerodePiso"]);
			String^ tipoCultivo = safe_cast<String^>(data["tipoCultivo"]);
			String^ fasedeCrecimiento = safe_cast<String^>(data["fasedeCrecimiento"]);
			String^ estado = safe_cast<String^>(data["estado"]);
			String^ comentario = safe_cast<String^>(data["comentario"]);
			int codigoWiki = safe_cast<int>(data["codigoWiki"]);

			Wiki^ objWiki = objGestorWiki->ObtenerWikiXCodigo(codigoWiki);


			objCamaraCrecimiento = gcnew CamaraCrecimiento(codigo, codigoDeEstacion, numerodePiso, tipoCultivo, fasedeCrecimiento,
				estado,
				comentario,
				codigoWiki,
				objWiki);
			//agregar acá a sus camaras correspondientes

		}
		data->Close();
		this->cerrarConexion();
		return objCamaraCrecimiento;

	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}




}

void GestorEstacion::cargarEstacionesEncargadasXEncargadoBD(int codigoEncargado)
{
	
	this->listaEstaciones->Clear();

	Estacion^ objEstacion = nullptr;
	List<int>^ listaCodigoEstaciones = gcnew List<int>();

	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select codigodeEstacion from EncargadoXEstacion where codigodeEncargado=" + codigoEncargado + ";";//DUDAA
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			int codigo = safe_cast<int>(data["codigodeEstacion"]);
			listaCodigoEstaciones->Add(codigo);
		}
		data->Close();
		this->cerrarConexion();

		for (int i = 0; i < listaCodigoEstaciones->Count; i++)
		{

			this->listaEstaciones->Add(obtenerEstacionXCodigoBD(listaCodigoEstaciones[i]));
		}
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}


}

Estacion^ GestorEstacion::BuscarEstacionXCodigoBD(int codigoEstacion)
{
	Estacion^ obj;  //NO SIRVE v:
	return obj;// ELIMINAR
	/*if (codigoEstacion == ' ')
	{
		this->listaEstaciones->Clear();
		cargarEstacionesBD();
		//return this->listaEstaciones;

	}
	else
	{
		Estacion^ objEstacion;
		try
		{
			this->abrirConexion();
			this->listaEstaciones->Clear();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "select * from Estacion where codigo like %" + codigoEstacion + "%;";
			SqlDataReader^ data = query->ExecuteReader();
			while (data->Read())
			{
				int codigo = safe_cast<int>(data["codigo"]);
				String^ nombre = safe_cast<String^>(data["nombre"]);
				String^ descripcion = safe_cast<String^>(data["descripcion"]);
				int cantidadCamaras = safe_cast<int>(data["cantidadCamaras"]);


				objEstacion = gcnew Estacion(codigo, nombre, descripcion);
				objEstacion->cantidadCamaras = cantidadCamaras;
				listaEstaciones->Add(objEstacion);
			}
			data->Close();
			this->cerrarConexion();
			return this->listaEstaciones;
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}*/
}
List<CamaraCrecimiento^>^ GestorEstacion::BuscarCamaraXCodigoBD(int codigoCamara)
{
	if (codigoCamara == ' ')
	{
		this->listaCamarasCrecimientos->Clear();
		cargarCamaraDeCrecimientoBD();
		return this->listaCamarasCrecimientos;

	}
	else
	{
		GestorWiki^ objGestorWiki = gcnew GestorWiki();
		objGestorWiki->cargarWikisBD();
		CamaraCrecimiento^ objCamaraCrecimiento;
		try
		{
			this->abrirConexion();
			this->listaCamarasCrecimientos->Clear();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "select * from CamaraCrecimiento where codigo like %" + codigoCamara + "%;";
			SqlDataReader^ data = query->ExecuteReader();
			while (data->Read())
			{
				int codigo = safe_cast<int>(data["codigo"]);
				int codigoDeEstacion = safe_cast<int>(data["codigoDeEstacion"]);
				int numerodePiso = safe_cast<int>(data["numerodePiso"]);
				String^ tipoCultivo = safe_cast<String^>(data["tipoCultivo"]);
				String^ fasedeCrecimiento = safe_cast<String^>(data["fasedeCrecimiento"]);
				String^ estado = safe_cast<String^>(data["estado"]);
				String^ comentario = safe_cast<String^>(data["comentario"]);
				int codigoWiki = safe_cast<int>(data["codigoWiki"]);

				Wiki^ objWiki = objGestorWiki->ObtenerWikiXCodigo(codigoWiki);


				objCamaraCrecimiento = gcnew CamaraCrecimiento(codigo, codigoDeEstacion, numerodePiso, tipoCultivo, fasedeCrecimiento,
					estado,
					comentario,
					codigoWiki,
					objWiki);
				listaCamarasCrecimientos->Add(objCamaraCrecimiento);

			}
			data->Close();
			this->cerrarConexion();
			return this->listaCamarasCrecimientos;
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
}

List<Estacion^>^ GestorEstacion::BusquedaListaEstacionesBD(int codigoEstacion)
{
	if (codigoEstacion == ' ')
	{
		this->listaEstaciones->Clear();
		cargarEstacionesBD();
		return this->listaEstaciones;
	}
	else
	{
		try
		{
			this->abrirConexion();
			this->listaEstaciones->Clear();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "select * from Estacion where codigo like '%" + codigoEstacion + "%';";
			SqlDataReader^ data = query->ExecuteReader();
			while (data->Read())
			{
				int codigo = safe_cast<int>(data["codigo"]);
				String^ nombre = safe_cast<String^>(data["nombre"]);
				String^ descripcion = safe_cast<String^>(data["descripcion"]);
				int cantidadCamaras = safe_cast<int>(data["cantidadCamaras"]);

				Estacion^ objEstacion = gcnew Estacion(codigo, nombre, descripcion);
				objEstacion->cantidadCamaras = cantidadCamaras;
				listaEstaciones->Add(objEstacion);

				
			}
			data->Close();
			this->cerrarConexion();
			return this->listaEstaciones;
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
}

List<CamaraCrecimiento^>^ GestorEstacion::BusquedaListaCamarasCrecimientoBD(int codigoEstacionSeleccionada, int codigoCamara)
{
	if (codigoCamara == ' ')
	{
		this->listaCamarasCrecimientos->Clear();
		verListaDeCamarasXEstacionBD(codigoEstacionSeleccionada);
		return this->listaCamarasCrecimientos;
	}
	else
	{
		GestorWiki^ objGestorWiki = gcnew GestorWiki();
		objGestorWiki->cargarWikisBD();
		CamaraCrecimiento^ objCamaraCrecimiento;

		try
		{
			this->abrirConexion();
			this->listaCamarasCrecimientos->Clear();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "select * from CamaraCrecimiento where codigo like '%" + codigoCamara + "%' and codigoDeEstacion like '%" + codigoEstacionSeleccionada + "%'  ;";
			SqlDataReader^ data = query->ExecuteReader();
			while (data->Read())
			{
				
				int codigo = safe_cast<int>(data["codigo"]);
				int codigoDeEstacion = safe_cast<int>(data["codigoDeEstacion"]);
				int numerodePiso = safe_cast<int>(data["numerodePiso"]);
				String^ tipoCultivo = safe_cast<String^>(data["tipoCultivo"]);
				String^ fasedeCrecimiento = safe_cast<String^>(data["fasedeCrecimiento"]);
				String^ estado = safe_cast<String^>(data["estado"]);
				String^ comentario = safe_cast<String^>(data["comentario"]);
				int codigoWiki = safe_cast<int>(data["codigoWiki"]);

				Wiki^ objWiki = objGestorWiki->ObtenerWikiXCodigo(codigoWiki);


				objCamaraCrecimiento = gcnew CamaraCrecimiento(codigo, codigoDeEstacion, numerodePiso, tipoCultivo, fasedeCrecimiento,
					estado,
					comentario,
					codigoWiki,
					objWiki);
				listaCamarasCrecimientos->Add(objCamaraCrecimiento);

			}
			data->Close();
			this->cerrarConexion();
			return this->listaCamarasCrecimientos;
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
}
