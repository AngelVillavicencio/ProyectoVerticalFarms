#pragma once
namespace ProyectoVerticalFarmsController
{
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::Data::SqlClient;

	using namespace System::IO;
	using namespace System;

	public ref class GestorTareasRelizadas
	{
	public:
		List<TareaRealizada^>^ listaTareasRealizadas;
		SqlConnection^ conexion;
	public:

		GestorTareasRelizadas();
		int ObtenerCantidad();
		TareaRealizada^ ObtenerTareaXIndice(int indice);
		void AgregarTarea(TareaRealizada^ objTarea);
		void EscribirEnArchivo();
		void LeerTareasRealizadasDesdeArchivo();
		void Serializar();
		void Deserializar();
		List<TareaRealizada^>^ BuscarTareaRelizadas();


		//BASE DE DATOS

		void abrirConexion();
		void cerrarConexion();
		void agregarTareaRealizadaBD(TareaRealizada^ objTareaRealizada);
		void cargarTareasRealizadasBDXcamara(int codigoCamara);
		void AgregarTareaRealizadaBD(TareaRealizada^ objTarea);
		void cargarTareasRealizadasBD(int codigoCamara);
	};
}
