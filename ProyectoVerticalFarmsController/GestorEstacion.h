#pragma once
#include "GestorWiki.h"
namespace ProyectoVerticalFarmsController
{
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace System;
	public ref class GestorEstacion
	{
	public:
		List<Estacion^>^ listaEstaciones;
		List<CamaraCrecimiento^>^ listaCamarasCrecimientos;
		SqlConnection^ conexion;
	public:
		GestorEstacion();
		void agregarEstacion(Estacion^ objEstacion);
		void editarEstacion(int index, Estacion^ objEstacion);
		void eliminarEstacion(int indice);
		int ObtenerCantidadDeEstaciones();
		int cantidadCamaras();
		List<Estacion^>^ getlistaEstaciones();

		Estacion^ buscaEstacionXindice(int i);
		Estacion^ buscaEstacionXCodigo(int codigo);
		List<Estacion^>^ EstacionesEncargadas();
		int IndexEstacion(int codigo);
		void eliminarEstacionXcodigo(int codigo);

		void GuardarDatosEstacion();
		void guardarDatosCamaraCrecimiento();
		void GuardarDetalleEstacion();

		void CargarDatosEstacion();
		void cargarCamarasDeCrecimiento();
		void cargarDetalleEstacion();


		/*FUNCIONES DE CAMARA DE CRECIMIENTO*/
		List<CamaraCrecimiento^>^ getListaDeCamaraDeCrecimiento();

		void agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento);
		void editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento);
		void eliminarCamaraCrecimiento(int id);
		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo);
		int buscaIndiceCamaraCrecimientoXid(int id);
		CamaraCrecimiento^ buscaCamaraCrecimientoXindice(int indice);

		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento);
		int buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso);

		void serializar();
		void deserializar();

		// BASE DE DATOS

		void abrirConexion();
		void cerrarConexion();
		void agregarEstacionBD(Estacion^ objEstacion);
		void editarEstacionBD(int codigoDeEstacion, Estacion^ objEstacion);
		void eliminarEstacionBD(int codigoDeEstacion);
		int ObtenerCantidadDeEstacionesBD();
		void cargarEstacionesBD();
		Estacion^ obtenerEstacionXCodigoBD(int codigoDeEstacion);
		void verListaDeCamarasXEstacionBD(int codigoEstacion);

		void agregarCamaraCrecimientoBD(int codigoDeEstacion,CamaraCrecimiento^ objCamaraCrecimiento);
		void editarCamaraCrecimientoBD(int codigoDeEstacion, CamaraCrecimiento^ objCamaraCrecimiento);
		void editarFaseYEstadoDeCamaraDeCrecimiento(int codigoDeCamaraCrecimiento,String^ faseCrecimiento,String^ Estado);
		void eliminarCamaraCrecimientoBD(int codigoDeEstacion, int codigoDeCamaraCrecimiento);
		int ObtenerCantidadDeCamarasXEstacionBD(int codigoDeEstacion);
		int ObtenerCantidadDeCamarasDeCrecimientoTotal();
		void cargarCamaraDeCrecimientoBD();
		CamaraCrecimiento^ obtenerCamaraCrecimientoXCodigoBD(int codigoDeCamaraCrecimiento);


		void cargarEstacionesEncargadasXEncargadoBD(int codigoEncargado);

		



		// FUNCIONES DE BUSQUEDA 

		//Para la busqueda de estacion
		Estacion^ BuscarEstacionXCodigoBD(int codigoEstacion);
		//Para la busqueda de Camara de crecimiento 
		List<CamaraCrecimiento^>^ BuscarCamaraXCodigoBD(int codigoCamara);

		List<Estacion^>^ BusquedaListaEstacionesBD(int codigoEstacion);
		List<CamaraCrecimiento^>^ BusquedaListaCamarasCrecimientoBD(int codigoEstacionSeleccionada, int codigoCamara);

	};

}