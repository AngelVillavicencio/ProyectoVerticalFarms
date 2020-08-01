#pragma once
#include <iostream>
#include <string>
#include "Parametros.h"
#include "Wiki.h"
#include "TareaRealizada.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;
	
	public ref class CamaraCrecimiento
	{
	public:
		int codigo;
		int codigoDeEstacion;
		int numerodePiso;
		String^ tipoCultivo;
		String^ fasedeCrecimiento;
		String^ Estado;
		String^ comentario;
		int codigoWiki;
		Wiki^ objWiki;
		List<Parametros^>^ listaDeParametros;
		List<TareaRealizada^>^ listadetareasRealizadas;

	public:
		CamaraCrecimiento(int codigo, int codigoDeEstacion,
		int numerodePiso,
		String^ tipoCultivo,
		String^ fasedeCrecimiento,
		String^ Estado,
		String^ comentario, int codigoWiki,
		Wiki^ wiki);
		CamaraCrecimiento();
	};



}
