#include "HealthAssess.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SqlTest::HealthAssess form;
	Application::Run(% form);
}