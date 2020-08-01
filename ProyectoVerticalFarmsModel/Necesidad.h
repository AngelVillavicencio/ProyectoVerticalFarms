#pragma once
namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;
	[Serializable]
	public ref class Necesidad
	{
	private:
		bool requiereHumedad;
		bool requiereTemperatura;
		bool requiereLuz;
	public:
		Necesidad(bool requiereHumedad,bool requiereTemperatura,bool requiereLuzs);


	};


}

