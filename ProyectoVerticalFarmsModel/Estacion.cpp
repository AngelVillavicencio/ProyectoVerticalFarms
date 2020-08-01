#include "Estacion.h"
using namespace ProyectoVerticalFarmsModel;

Estacion::Estacion(int codigo, String^ nombre, String^ descripcion)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->cantidadCamaras = 0;
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>();
}

Estacion::Estacion()
{
	this->cantidadCamaras = 0;
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>();
}

int Estacion::ObtenerIndiceXcodigo(int codigo)
{
	int index = -1;
	for (int i = 0; i < this->listaCamaraCrecimiento->Count; i++) {

		if (this->listaCamaraCrecimiento[i]->codigo == codigo) {
			index = i;
			break;
		}

	}
	return index;
}

CamaraCrecimiento^ Estacion::getCamaraXCodigo(int codigo)
{
	int indice = ObtenerIndiceXcodigo(codigo);

	if (indice != -1)
	{
		return this->listaCamaraCrecimiento[indice];
	}
}


void Estacion::EditarCamaraXcodigo(int codigo, CamaraCrecimiento^ objCamaraCrecimiento)
{
	int indice = -1;
	indice = ObtenerIndiceXcodigo(codigo);
	if (indice != -1)
	{
		this->listaCamaraCrecimiento[indice] = objCamaraCrecimiento;
	}
}

void Estacion::eliminarCamaraXcodigo(int codigo)
{
     int indice = ObtenerIndiceXcodigo(codigo);
	 if (indice != -1)
	 {
		 this->listaCamaraCrecimiento->RemoveAt(indice);
	 }
}
