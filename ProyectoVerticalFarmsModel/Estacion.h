#pragma once
#include "CamaraCrecimiento.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class Estacion
	{
	public:
		int codigo;
		String^ nombre;
		String^ descripcion;
		int cantidadCamaras;	
		List<CamaraCrecimiento^>^ listaCamaraCrecimiento;

	public:
		Estacion(int codigo,String^ nombre,String^ descripcion);
		Estacion();
		CamaraCrecimiento^ getCamaraXCodigo(int codigo);
		int ObtenerIndiceXcodigo(int codigo);
		void EditarCamaraXcodigo(int codigo,CamaraCrecimiento^ objCamaraCrecimiento);
		void eliminarCamaraXcodigo(int codigo);
	};


}

