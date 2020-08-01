#include "Wiki.h"
using namespace ProyectoVerticalFarmsModel;





Wiki::Wiki(int codigo, String^ tipoVegetal, String^ nombrePlanta, String^ tipoDeIluminacion, float temperaturaIdeal, float temperaturaMin, float temperaturaMax, float humedadIdeal, float humedadMin, float humedadMax, float IluminacionIdeal, float IluminacionMin, float IluminacionMax)
{
	this->codigo = codigo;
	this->tipoVegetal = tipoVegetal;
	this->nombrePlanta = nombrePlanta;
	this->tipoDeIluminacion = tipoDeIluminacion;
	this->temperaturaIdeal = temperaturaIdeal;
	this->humedadIdeal = humedadIdeal;
	this->IluminacionIdeal = IluminacionIdeal;
	this->temperaturaMin = temperaturaMin;
	this->temperaturaMax = temperaturaMax;
	this->humedadMin = humedadMin;
	this->humedadMax = humedadMax;
	this->IluminacionMin = IluminacionMin;
	this->IluminacionMax = IluminacionMax;
}
