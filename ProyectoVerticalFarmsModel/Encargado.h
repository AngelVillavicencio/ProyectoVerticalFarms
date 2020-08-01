#pragma once
#include "Estacion.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class Encargado
	{
	public:
		int codigo;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ correo;
		String^ numCelular;
		String^ fechadeIngreso;
		String^ genero;
		String^ fechadeNacimiento;
		String^ contrasena;
		String^ palabraClave;
		String^ esAdmin;
		List<Estacion^>^ listadeEstaciones;

		//constructor
		Encargado(int codigo, String^ nombres,
			String^ apellidoPaterno,
			String^ apellidoMaterno,
			String^ dni,
			String^ correo,
			String^ numCelular,
			String^ fechadeIngreso,
			String^ genero,
			String^ fechadeNacimiento,
			String^ contrasena,
			String^ palabraClave,
			String^ esAdmin);
	};
}

