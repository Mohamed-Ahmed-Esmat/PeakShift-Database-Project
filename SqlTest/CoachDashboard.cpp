#include "CoachDashboard.h"
#include "UserDashboard.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SqlTest::MyForm form;
	Application::Run(% form);
}