#pragma once
#include "Estacion.h"

namespace ProyectoVerticalFarmsModel
{		
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class Usuario
	{
	private:
		int id;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ correo;
		String^ numCelular;
		String^ fechaIngreso;
		String^ genero;
		String^ anioNacimiento;
		String^ contrasena;
		String^ palabraClave;
		String^ esAdmin;
		List<Estacion^>^ listaStation;
		List<Usuario^>^ listaEncargados;
	public:
		Usuario();
		Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
			String^ correo,
			String^ numCelular,
			String^ fechaIngreso,
			String^ Genero,
			String^ anioNacimiento,
			String^ esAdmin,
			String^ contrasena, String^ palabraClave);
		Usuario(String^ correo, String^ contrasena, String^ palabraClave);
		
		
		//getter
		int getId();
		String^ getNombres();
		String^ getApellidoPaterno();
		String^ getApellidoMaterno();
		String^ getDni();
		String^ getCorreo();
		String^ getNumCelular();
		String^ getFechaIngreso();
		String^ getGenero();
		String^ getAnioNacimiento();
		String^ getEsAdmin();
		String^ getContrasena();
		String^ getPalabraClave();
		//void AgregarEncargadoALista();
		//void EliminarEncargadoALista();
		void SetCorreo(String^ correoNuevo);
		void SetContrasena(String^ contrasenaNueva);
		void AgregarAListaEncargados(Usuario^ objUsuario);
		void AgregarAListaStation(Estacion^ objEstacion);
		int cantidadDeEncargados();
		int cantidadDeEstacionesEncargadas();
		Usuario^ getUsuarioEncargadoDeLaLista(int indice);
		Estacion^ getEstacionEncargadaDeLaLista(int indice);
		void EliminarDeListaDeEncargadosXCodigo(int codigo);
		void EliminarDeListaDeEstacionesXCodigo(int codigo);

	};
}

