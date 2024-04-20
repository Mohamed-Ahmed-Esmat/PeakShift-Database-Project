#include "SubscrpPlans.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SqlTest::SubscrpPlans form;
	Application::Run(% form);
}