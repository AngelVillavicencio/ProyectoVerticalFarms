#include "GestorUsuario.h"
using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorUsuario::GestorUsuario() 
{
	this->listaDeAdministradores = gcnew List<administrador^>();
	this->listaDeEncargados = gcnew List<Encargado^>();
	this->conexion = gcnew SqlConnection();
}

void GestorUsuario::abrirConexion()
{
	String^ password = "angel20171781";
	this->conexion->ConnectionString = "Server=programandobonito.cpmlh7ldjsal.us-east-1.rds.amazonaws.com;DataBase=SistemaAgriculturaVertical;User ID=programandobonito;Password=" + password + ";";
	this->conexion->Open();
}

void GestorUsuario::cerrarConexion()
{
	this->conexion->Close();
}

void GestorUsuario::agregarAdmistradorBD(administrador^ objAdmin)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into Administrador(nombres,apellidoPaterno,apellidoMaterno,dni,correo,numcelular,fechaIngreso,genero,fechaNacimiento,contrasena,palabraClave,esAdmin) values('" + objAdmin->nombres + "','" + objAdmin->apellidoPaterno + "','" + objAdmin->apellidoMaterno + "','" + objAdmin->dni + "','" + objAdmin->correo + "','" + objAdmin->numCelular + "','" + objAdmin->fechadeIngreso + "','" + objAdmin->genero + "','" + objAdmin->fechadeNacimiento + "','" + objAdmin->contrasena + "','" + objAdmin->palabraClave + "','" + objAdmin->esAdmin + "');";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorUsuario::cargarAdministradoresBD()
{
	this->listaDeAdministradores->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Administrador";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			administrador^ objadministrador = gcnew administrador(codigo, nombres,
				apellidoPaterno,
				 apellidoMaterno,
				 dni,
				 correo,
				 numCelular,
				 fechadeIngreso,
				 genero,
				 fechadeNacimiento,
				 contrasena,
				 palabraClave,
				 esAdmin);
			//agregar acá a sus estaciones correspondientes
			



			listaDeAdministradores->Add(objadministrador);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

bool GestorUsuario::validarAdministradorBD(String^ correo, String^ contrasena)
{
	bool validado = false;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Administrador where Correo='" + correo + "' and contrasena = '" + contrasena + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			validado = true;
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
	return validado;
}

administrador^ GestorUsuario::obtenerAdministradorXcorreoBD(String^ correo)
{
	administrador^ objAdmin = nullptr;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Administrador where correo='" + correo + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			objAdmin = gcnew administrador(codigo, nombres,
				apellidoPaterno,
				apellidoMaterno,
				dni,
				correo,
				numCelular,
				fechadeIngreso,
				genero,
				fechadeNacimiento,
				contrasena,
				palabraClave,
				esAdmin);

		}
		data->Close();
		this->cerrarConexion();
		return objAdmin;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

int GestorUsuario::obtenerCantidadDeAdministradoresBD()
{
	int cantidad = 0;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Administrador ";
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

void GestorUsuario::eliminarAdministradorBD(int codigo)
{
	
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from Administradores where Codigo = " + codigo + ";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}

}

bool GestorUsuario::validarAdministradorparaRecuperarCuentaBD(String^ correo, String^ palabraClave)
{
	bool validado = false;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Administrador where Correo='" + correo + "' and palabraClave= '" + palabraClave + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			validado = true;
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
	return validado;
}

void GestorUsuario::agregarEncargadoBD(Encargado^ objEncargado)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into Encargado(nombres,apellidoPaterno,apellidoMaterno,dni,correo,numcelular,fechaIngreso,genero,fechaNacimiento,contrasena,palabraClave,esAdmin) values('" + objEncargado->nombres + "','" + objEncargado->apellidoPaterno + "','" + objEncargado->apellidoMaterno + "','" + objEncargado->dni + "','" + objEncargado->correo + "','" + objEncargado->numCelular + "','" + objEncargado->fechadeIngreso + "','" + objEncargado->genero + "','" + objEncargado->fechadeNacimiento + "','" + objEncargado->contrasena + "','" + objEncargado->palabraClave + "','" + objEncargado->esAdmin + "');";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorUsuario::cargarEncargadosBD()
{
	this->listaDeEncargados->Clear();
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			Encargado^ objEncargado = gcnew Encargado(codigo, 
				nombres,
				apellidoPaterno,
				apellidoMaterno,
				dni,
				correo,
				numCelular,
				fechadeIngreso,
				genero,
				fechadeNacimiento,
				contrasena,
				palabraClave,
				esAdmin);
			//agregar acá a sus estaciones correspondientes




			this->listaDeEncargados->Add(objEncargado);
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

bool GestorUsuario::validarEncargadoBD(String^ correo, String^ contrasena)
{
	
	bool validado = false;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado where Correo='" + correo + "' and contrasena = '" + contrasena + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			validado = true;
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
	return validado;


}

Encargado^ GestorUsuario::obtenerEncargadoXcorreoBD(String^ correo)
{
	
	Encargado^ objEncargado = nullptr;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado where correo='" + correo + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			objEncargado = gcnew Encargado(codigo, nombres,
				apellidoPaterno,
				apellidoMaterno,
				dni,
				correo,
				numCelular,
				fechadeIngreso,
				genero,
				fechadeNacimiento,
				contrasena,
				palabraClave,
				esAdmin);

		}
		data->Close();
		this->cerrarConexion();
		return objEncargado;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}

}

int GestorUsuario::obtenerCantidadDeEncargadosBD()
{
	int cantidad = 0;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado ";
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

void GestorUsuario::eliminarEncargadoBD(int codigo)
{
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from Encargado where Codigo = " + codigo + ";";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

bool GestorUsuario::validarEncargadosparaRecuperarCuentaBD(String^ correo, String^ palabraClave)
{
	bool validado = false;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado where Correo='" + correo + "' and palabraClave= '" + palabraClave + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			validado = true;
		}
		data->Close();
		this->cerrarConexion();
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
	return validado;
}

List<Encargado^>^ GestorUsuario::obtenerListaDeEncargadosBD(int codigoAdmin)
{
	List<Encargado^>^ objListaEncargado = gcnew List<Encargado^>();
	Encargado^ ObjEncargado = nullptr;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado where codigoDeAdminEncar='" + codigoAdmin + "';";//DUDAA
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			ObjEncargado = gcnew Encargado(codigo, nombres,
				apellidoPaterno,
				apellidoMaterno,
				dni,
				correo,
				numCelular,
				fechadeIngreso,
				genero,
				fechadeNacimiento,
				contrasena,
				palabraClave,
				esAdmin);

			objListaEncargado->Add(ObjEncargado);


		}
		data->Close();
		this->cerrarConexion();
		return objListaEncargado;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

void GestorUsuario::cambiarContrasenaBD(bool esAdmin, String^ correo, String^ contrasenaNueva)
{
	if (esAdmin)
	{
		try {
			this->abrirConexion();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "update Administrador set  contrasena='" + contrasenaNueva + "' where correo= '" + correo + "' ;";
			query->ExecuteNonQuery();
			this->cerrarConexion();
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
	else {
		try {
			this->abrirConexion();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "update Encargado set  contrasena='" + contrasenaNueva + "' where correo= '" + correo + "' ;";
			query->ExecuteNonQuery();
			this->cerrarConexion();
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
}

void GestorUsuario::cambiarCorreoBD(bool esAdmin, String^ correo, String^ correoNuevo)
{
	if (esAdmin)
	{
		try {
			this->abrirConexion();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "update Administrador set  correo='" + correoNuevo + "' where correo= '" + correo + "' ;";
			query->ExecuteNonQuery();
			this->cerrarConexion();
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
	else {
		try {
			this->abrirConexion();
			SqlCommand^ query = gcnew SqlCommand();
			query->Connection = this->conexion;
			query->CommandText = "update Encargado set  correo='" + correoNuevo + "' where correo= '" + correo + "' ;";
			query->ExecuteNonQuery();
			this->cerrarConexion();
		}
		catch (SqlException^ e)
		{
			this->cerrarConexion();
		}
	}
}

void GestorUsuario::cargarListaDeEncargadosXAdminBD(String^ correoDeUsuario)
{
	administrador^ admin = obtenerAdministradorXcorreoBD(correoDeUsuario);
	this->listaDeEncargados->Clear();
	
	Encargado^ ObjEncargado = nullptr;
	List<int>^ listacodigoEncargados = gcnew List<int>();

	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select codigodeEncargado from AdministradorXEncargado where codigodeAdministrador='" + admin->codigo + "';";//DUDAA
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {
			int codigo = safe_cast<int>(data["codigodeEncargado"]);
			listacodigoEncargados->Add(codigo);
		}
		data->Close();
		this->cerrarConexion();

		for (int i = 0; i < listacodigoEncargados->Count; i++)
		{
			this->listaDeEncargados->Add(obtenerEncargadoXCodigoBD(listacodigoEncargados[i]));
		}

		
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}



}

Encargado^ GestorUsuario::obtenerEncargadoXCodigoBD(int codigo)
{
	

	Encargado^ objEncargado = nullptr;
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "select * from Encargado where codigo='" + codigo + "';";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read()) {

			int codigo = safe_cast<int>(data["codigo"]);
			String^ nombres = safe_cast<String^>(data["nombres"]);
			String^ apellidoPaterno = safe_cast<String^>(data["apellidoPaterno"]);
			String^ apellidoMaterno = safe_cast<String^>(data["apellidoMaterno"]);
			String^ dni = safe_cast<String^>(data["dni"]);
			String^ correo = safe_cast<String^>(data["correo"]);
			String^ numCelular = safe_cast<String^>(data["numcelular"]);
			String^ fechadeIngreso = safe_cast<String^>(data["fechaIngreso"]);
			String^ genero = safe_cast<String^>(data["genero"]);
			String^ fechadeNacimiento = safe_cast<String^>(data["fechaNacimiento"]);
			String^ contrasena = safe_cast<String^>(data["contrasena"]);
			String^ palabraClave = safe_cast<String^>(data["palabraClave"]);
			String^ esAdmin = safe_cast<String^>(data["esAdmin"]);

			objEncargado = gcnew Encargado(codigo, nombres,
				apellidoPaterno,
				apellidoMaterno,
				dni,
				correo,
				numCelular,
				fechadeIngreso,
				genero,
				fechadeNacimiento,
				contrasena,
				palabraClave,
				esAdmin);

		}
		data->Close();
		this->cerrarConexion();
		return objEncargado;
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}

}

void GestorUsuario::AgregarEncargadoAListaDeEncargadoDeAdministrador(Encargado^ objEncargado, String^ correoUsuario)
{
	administrador^ objAdmin = obtenerAdministradorXcorreoBD(correoUsuario);


	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into AdministradorXEncargado(codigodeAdministrador,codigodeEncargado) values(" + objAdmin->codigo+", " +objEncargado->codigo+ ");";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}
}

void GestorUsuario::EliminarEncargadoDeListaDeEncargadosXCodigoBD(int codigoAdministrador, int codigoEncargado)
{
	
	try
	{
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = conexion;
		query->CommandText = "Delete from AdministradorXEncargado where codigodeAdministrador = " + codigoAdministrador + " and codigodeEncargado = " + codigoEncargado + " ;";
		query->ExecuteNonQuery();
		this->cerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->cerrarConexion();
	}

}

void GestorUsuario::EncargarEstacionAEncargadoBD(int codigoEncargado, int codigoEstacionSeleccionado)
{
	
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "insert into EncargadoXEstacion(codigodeEncargado,codigodeEstacion) values("+ codigoEncargado +","+ codigoEstacionSeleccionado +");";//DUDAA
		query->ExecuteNonQuery();
		this->cerrarConexion();
		
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

void GestorUsuario::DesEncargarEstacionAEncargadoBD(int codigoEncargado, int codigoEstacionSeleccionado)
{
	try {
		this->abrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		query->CommandText = "delete from EncargadoXEstacion where codigodeEncargado="+ codigoEncargado + " and codigodeEstacion=" + codigoEstacionSeleccionado + ";";//DUDAA
		query->ExecuteNonQuery();
		this->cerrarConexion();

	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

