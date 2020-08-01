#pragma once
#include "Estacion.h"
#include "Encargado.h"
namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class administrador
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
		List<Encargado^>^ listadeEncargados;

		//constructor
		administrador(int codigo, String^ nombres,
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



