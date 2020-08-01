#include "frmPrincipal.h"
#include "frmPaginaPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoVerticalFarmsView;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	frmPrincipal form;
	Application::Run(% form);
	
}