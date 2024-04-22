#include "HealthAssess.h"
#include "UserDashboard.h"
#include "ExercisePlan.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SqlTest::ExercisePlan form;
	Application::Run(% form);
}