#include "Encargado.h"
using namespace ProyectoVerticalFarmsModel;
Encargado::Encargado(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ correo, String^ numCelular, String^ fechadeIngreso, String^ genero, String^ fechadeNacimiento, String^ contrasena, String^ palabraClave, String^ esAdmin)
{
	this->codigo = codigo;
	this->nombres = nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
	this->correo = correo;
	this->numCelular = numCelular;
	this->fechadeIngreso = fechadeIngreso;
	this->genero = genero;
	this->fechadeNacimiento = fechadeNacimiento;
	this->esAdmin = esAdmin;
	this->listadeEstaciones = gcnew List<Estacion^>();
	this->contrasena = contrasena;
	this->palabraClave = palabraClave;
}
