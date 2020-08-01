#include "CamaraCrecimiento.h"
using namespace ProyectoVerticalFarmsModel;
CamaraCrecimiento::CamaraCrecimiento(int codigo,
	int codigoDeEstacion,
	int numerodePiso,
	String^ tipoCultivo,
	String^ fasedeCrecimiento,
	String^ Estado,
	String^ comentario, 
	int codigoWiki,
	Wiki^ wiki)
{
	this->codigo = codigo;
	this->codigoDeEstacion = codigoDeEstacion;
	this->numerodePiso = numerodePiso;
	this->tipoCultivo = tipoCultivo;
	this->fasedeCrecimiento = fasedeCrecimiento;
	this->Estado = Estado;
	this->comentario = comentario;
	this->codigoWiki = codigoWiki;
	this->objWiki = wiki;
	this->listaDeParametros = gcnew List<Parametros^>;
	this->listadetareasRealizadas = gcnew List<TareaRealizada^>;
	
}

CamaraCrecimiento::CamaraCrecimiento()
{
	this->listaDeParametros = gcnew List<Parametros^>;
	this->listadetareasRealizadas = gcnew List<TareaRealizada^>;
}


