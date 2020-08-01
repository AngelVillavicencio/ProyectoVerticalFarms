#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class Wiki
	{
	public:

		int codigo;
		String^ tipoVegetal;
		String^ nombrePlanta;
		String^ tipoDeIluminacion;
		float temperaturaIdeal;
		float humedadIdeal;
		float IluminacionIdeal;

		float temperaturaMin;
		float temperaturaMax;
		float humedadMin;
		float humedadMax;
		float IluminacionMin;
		float IluminacionMax;
		

	public:
		
		Wiki(int codigo,
			String^ tipoVegetal, String^ nombrePlanta, String^ tipoDeIluminacion,
			float temperaturaIdeal, float temperaturaMin, float temperaturaMax,
			float humedadIdeal, float humedadMin, float humedadMax,
			float IluminacionIdeal, float IluminacionMin, float IluminacionMax);
	};



}

