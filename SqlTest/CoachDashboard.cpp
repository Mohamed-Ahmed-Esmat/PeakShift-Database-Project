#include "CoachDashboard.h"
#include "UserDashboard.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SqlTest::CoachDashboard form;
	Application::Run(% form);
}