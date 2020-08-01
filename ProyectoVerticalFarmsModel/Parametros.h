#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;


	public ref class Parametros
	{

	public:
		float temperatura;
		float humedad;
		float intensidadLuminosa;
		DateTime^ objFecha;
	public:
		Parametros(float humedad, float intensidadLuminosa,float temperatura);

	};


}
