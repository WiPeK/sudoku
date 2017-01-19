#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
Void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Sudoku::MyForm form;
	Application::Run(%form);
}
