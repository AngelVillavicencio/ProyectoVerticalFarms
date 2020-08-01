#include "GestorParametros.h"

using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorParametros::GestorParametros()
{
	this->listaParametros = gcnew List<Parametros^>();
}
void GestorParametros::EscribirEnArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaParametros->Count);
	for (int i = 0; i < this->listaParametros->Count; i++)
	{
		Parametros^ objParametro = this->listaParametros[i];
		lineas[i] = objParametro->humedad + "," + objParametro->intensidadLuminosa + "," + objParametro->temperatura ;
	}
	File::WriteAllLines("Parametros.txt", lineas);
}

void GestorParametros::LeerDesdeArchivo()
{
	this->listaParametros->Clear();
	//El archivo de texto no es más que un arreglo de string
	array<String^>^ lineas = File::ReadAllLines("Parametros.txt");

	String^ separadores = ",";
	for each (String ^ lineaParametros in lineas)
	{
		array<String^>^ palabras = lineaParametros->Split(separadores->ToCharArray());
		float humedad = Convert::ToDouble(palabras[0]);
		float intensidadLuminosa = Convert::ToDouble(palabras[1]);
		float temperatura = Convert::ToDouble(palabras[2]);
		
		Parametros^ objParametro = gcnew Parametros(humedad, intensidadLuminosa,temperatura);
		this->listaParametros->Add(objParametro);
	}
}
int GestorParametros::ObtenerCantidad()
{
	return this->listaParametros->Count;
}
Parametros^ GestorParametros::ObtenerParametroXindice(int indice)
{
	return this->listaParametros[indice];
}
