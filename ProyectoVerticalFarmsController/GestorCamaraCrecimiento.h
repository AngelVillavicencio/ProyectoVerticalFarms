#pragma once
#pragma once

namespace ProyectoVerticalFarmsController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	public ref class GestorCamaraCrecimiento
	{
	private:
		List<CamaraCrecimiento^>^ listaCamarasCrecimientos;
	public:
		GestorCamaraCrecimiento();

		void agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento);
		void editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento);
		void eliminarCamaraCrecimiento(int id);

		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo);
		int buscaIndiceCamaraCrecimientoXid(int id);
		CamaraCrecimiento^ buscaCamaraCrecimientoXindice(int indice);
		int cantidad();

		void cargarDatosCamaraCrecimiento();
		void guardarDatosCamaraCrecimiento();

		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento);
		int buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso);
	};

}
