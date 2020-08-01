#include "TareaRealizada.h"
using namespace ProyectoVerticalFarmsModel;


TareaRealizada::TareaRealizada(int temporizador, int codigoCamaraDeCrecimiento, DateTime^ fecha, String^ regado, String^ Iluminacion, String^ Ventilador)
{
	this->temporizador = temporizador;
	this->codigoCamaraDeCrecimiento = codigoCamaraDeCrecimiento;
	this->fecha = fecha;
	this->regado = regado;
	this->Iluminacion = Iluminacion;
	this->Ventilador = Ventilador;
}

TareaRealizada::TareaRealizada(int codigo, int temporizador, int codigoCamaraDeCrecimiento, DateTime^ fecha, String^ regado, String^ Iluminacion, String^ Ventilador)
{
	this->codigo = codigo;
	this->codigoCamaraDeCrecimiento = codigoCamaraDeCrecimiento;
	this->temporizador = temporizador;
	this->fecha = fecha;
	this->regado = regado;
	this->Iluminacion = Iluminacion;
	this->Ventilador = Ventilador;
}
