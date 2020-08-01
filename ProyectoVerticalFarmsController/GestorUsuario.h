#pragma once


namespace ProyectoVerticalFarmsController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	public ref class GestorUsuario
	{

	public:
		List<administrador^>^ listaDeAdministradores;
		List<Encargado^>^ listaDeEncargados;
		SqlConnection^ conexion;
	public:
		GestorUsuario();

		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		//LISTA DE ADMINISTRADORES
		void agregarAdmistradorBD(administrador^ objAdmin);
		void cargarAdministradoresBD();
		bool validarAdministradorBD(String^ correo, String^ contrasena);
		administrador^ obtenerAdministradorXcorreoBD(String^ correo);
		int obtenerCantidadDeAdministradoresBD();
		void eliminarAdministradorBD(int codigo);
		bool validarAdministradorparaRecuperarCuentaBD(String^ correo, String^ palabraClave);
		//LISTA DE ENCARGADOS
		void agregarEncargadoBD(Encargado^ objEncargado);
		void cargarEncargadosBD();
		bool validarEncargadoBD(String^ correo, String^ contrasena);
		Encargado^ obtenerEncargadoXcorreoBD(String^ correo);
		int obtenerCantidadDeEncargadosBD();
		void eliminarEncargadoBD(int codigo);
		bool validarEncargadosparaRecuperarCuentaBD(String^ correo, String^ palabraClave);


		//funciones extras
		List<Encargado^>^ obtenerListaDeEncargadosBD(int codigoAdmin);// EVALUAR... TAMBIEN ESTOY PENSANDO EN ELIMINAR ESO DE AGREGAR ENCARGADOS

		//PARA CAMBIAR CONTRASEÑA
		void cambiarContrasenaBD(bool esAdmin,String^ correo, String^ contrasenaNueva);
		void cambiarCorreoBD(bool esAdmin,String^ correo, String^ correoNuevo);
		//PARA AGREGAR ENCARGADOS
		void cargarListaDeEncargadosXAdminBD(String^ correoDeUsuario);
		Encargado^ obtenerEncargadoXCodigoBD(int codigo);
		void AgregarEncargadoAListaDeEncargadoDeAdministrador(Encargado^ objEncargado,String^ correoUsuario);
		void EliminarEncargadoDeListaDeEncargadosXCodigoBD(int codigoAdministrador,int codigoEncargado);
		void EncargarEstacionAEncargadoBD(int codigoEncargado, int codigoEstacionSeleccionado);
		void DesEncargarEstacionAEncargadoBD(int codigoEncargado, int codigoEstacionSeleccionado);
	};


}
