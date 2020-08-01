#include "Parametros.h"

using namespace ProyectoVerticalFarmsModel;
Parametros::Parametros(float humedad, float intensidadLuminosa, float temperatura)
{
	this->humedad = humedad;
	this->intensidadLuminosa = intensidadLuminosa;
	this->temperatura = temperatura;
	this->objFecha = gcnew DateTime();
}
