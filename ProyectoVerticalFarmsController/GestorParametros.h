#pragma once
namespace ProyectoVerticalFarmsController
{
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	using namespace System;

	public ref class GestorParametros
	{
	public:
		List<Parametros^>^ listaParametros;

	public:

		GestorParametros();
		void EscribirEnArchivo();
		void LeerDesdeArchivo();
		int ObtenerCantidad();
		//void Serializar();
		//void Deserializar();
		Parametros^ ObtenerParametroXindice(int indice);
	};
}
