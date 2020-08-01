#pragma once
#include "GestorEstacion.h"
namespace ProyectoVerticalFarmsController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;
	using namespace ProyectoVerticalFarmsModel;

	public ref class GestorWiki
	{
	public:
		List<Wiki^>^ listaWiki;
		SqlConnection^ conexion;

	public:
		GestorWiki();
		void agregarWiki(Wiki^ objWiki);
		void EditarWiki(int codigo, Wiki^ objWiki);
		void EliminarWiki(int codigo);
		
		int BuscarWikiXCodigo(int codigo);
		int ObtenerCantidad();
		Wiki^ ObtenerWikiXindice(int indice);
		Wiki^ ObtenerWikiXCodigo(int codigo);
		void serealizar();
		void deserealizar();


		//BASE DE DATOS 
		
		void abrirConexion();
		void cerrarConexion();
		void agregarWikiBD(Wiki^ objWiki);
		void editarWikiBD(int codigo, Wiki^ objWiki);
		void EliminarWikiBD(int codigo);
		void cargarWikisBD();
		Wiki^ obtenerWikiXCodigoBD(int codigodeWiki);
		Wiki^ obtenerWikiXPlantaBD(String^ planta);
		// DEBUG v:

		void eliminarCamarasXCodigoWiki(int codigowiki);

	};

}
