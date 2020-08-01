#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;

	public ref class TareaRealizada
	{
	public:
		int codigo;
		int codigoCamaraDeCrecimiento;
		int temporizador;
		DateTime^ fecha;
		String^ regado;
		String^ Iluminacion;
		String^ Ventilador;
	public:
		TareaRealizada(int temporizador, int codigoCamaraDeCrecimiento,
			DateTime^ fecha,
			String^ regado,
			String^ Iluminacion, 
			String^ Ventilador);
		TareaRealizada(int codigo,int temporizador, int codigoCamaraDeCrecimiento,
			DateTime^ fecha,
			String^ regado,
			String^ Iluminacion,
			String^ Ventilador);

	};

}
