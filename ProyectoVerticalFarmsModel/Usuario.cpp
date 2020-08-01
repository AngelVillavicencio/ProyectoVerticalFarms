#include "Usuario.h"

using namespace ProyectoVerticalFarmsModel;
Usuario::Usuario()
{
	this->id =0;
	this->nombres = nombres;
	this->apellidoPaterno = "";
	this->apellidoMaterno = "";
	this->dni = "";
	this->correo = "";
	this->numCelular = "";
	this->fechaIngreso = "";
	this->genero = "";
	this->anioNacimiento = "";
	this->esAdmin = "";
	this->listaStation = gcnew List<Estacion^>;
	this->listaEncargados = gcnew List<Usuario^>;
	this->contrasena = "";
	this->palabraClave = "";

}
Usuario::Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
	String^ correo,
	String^ numCelular,
	String^ fechaIngreso,
	String^ Genero,
	String^ anioNacimiento,
	String^ esAdmin,
	String^ contrasena, 
	String^ palabraClave)
{
	this->id = id;
	this->nombres=nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
	this->correo = correo;
	this->numCelular = numCelular;
	this->fechaIngreso = fechaIngreso;
	this->genero = Genero;
	this->anioNacimiento = anioNacimiento;
	this->esAdmin = esAdmin;
	this->listaStation = gcnew List<Estacion^>;
	this->listaEncargados = gcnew List<Usuario^>;
	this->contrasena = contrasena;
	this->palabraClave = palabraClave;
}

Usuario::Usuario(String^ correo, String^ contrasena,String^ palabraClave)
{
	this->correo = correo;
	this->contrasena = contrasena;
	
}



int Usuario::getId(void)
{
	return this->id;
}

String^ Usuario::getNombres(void)
{
	return this->nombres;
}

String^ Usuario::getApellidoPaterno()
{
	return this->apellidoPaterno;
}

String^ Usuario::getApellidoMaterno()
{
	return this->apellidoMaterno;
}

String^ Usuario::getDni()
{
	return this->dni;
}


String^ Usuario::getNumCelular()
{
	return this->numCelular;
}

String^ Usuario::getFechaIngreso()
{
	return this->fechaIngreso;
}

String^ Usuario::getGenero()
{
	return this->genero;
}

String^ Usuario::getAnioNacimiento()
{
	return this->anioNacimiento;
}

String^ Usuario::getEsAdmin()
{
	return this->esAdmin;
}

String^ Usuario::getCorreo()
{
	return this->correo;
}

String^ Usuario::getContrasena()
{
	return this->contrasena;
}

String^ Usuario::getPalabraClave()
{
	return this->palabraClave;
}
void Usuario::SetCorreo(String^ correoNuevo)
{
	this->correo = correoNuevo;
}
void Usuario::SetContrasena(String^ contrasenaNueva)
{
	this->contrasena = contrasenaNueva;
}

void Usuario::AgregarAListaEncargados(Usuario^ objUsuario)
{
	this->listaEncargados->Add(objUsuario);
}

void Usuario::AgregarAListaStation(Estacion^ objEstacion)
{
	this->listaStation->Add(objEstacion);
}

int Usuario::cantidadDeEncargados()
{
	return this->listaEncargados->Count;
}

int Usuario::cantidadDeEstacionesEncargadas()
{
	return this->listaStation->Count;
}

Usuario^ Usuario::getUsuarioEncargadoDeLaLista(int indice)
{
	return this->listaEncargados[indice];
}

Estacion^ Usuario::getEstacionEncargadaDeLaLista(int indice)
{
	return this->listaStation[indice];
}

void Usuario::EliminarDeListaDeEncargadosXCodigo(int codigo)
{
	for (int i = 0; i < this->listaEncargados->Count; i++)
	{
		if (this->listaEncargados[i]->getId() == codigo)
		{
			this->listaEncargados->RemoveAt(i);
			break;
		}

	}
}

void Usuario::EliminarDeListaDeEstacionesXCodigo(int codigo)
{
	for (int i = 0; i < this->listaStation->Count; i++)
	{
		if (this->listaStation[i]->codigo == codigo)
		{
			this->listaStation->RemoveAt(i);
			break;
		}

	}
}
