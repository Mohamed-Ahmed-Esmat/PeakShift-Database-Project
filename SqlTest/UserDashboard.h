#pragma once
#include "ExercisePlan.h"
#include "NutritionPlan.h"
#include "Workouts.h"
#include "Payments.h"
#include "DailyMetric.h"
#include "HealthAssess.h"

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserDashboard
	/// </summary>
	public ref class UserDashboard : public System::Windows::Forms::Form
	{
	public:
		UserDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Username_Label;
	private: System::Windows::Forms::Label^ Active_Label;


	private: System::Windows::Forms::Label^ ID_Label;
	private: System::Windows::Forms::Label^ Gender_Label;


	private: System::Windows::Forms::Label^ Age_Label;
	private: System::Windows::Forms::Label^ NA_Label;


	private: System::Windows::Forms::Button^ DM_Button;
	private: System::Windows::Forms::Button^ EP_Button;
	private: System::Windows::Forms::Button^ NP_Button;
	private: System::Windows::Forms::Button^ W_button;
	private: System::Windows::Forms::Button^ P_Button;
	private: System::Windows::Forms::Button^ HA_Button;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NA_Label = (gcnew System::Windows::Forms::Label());
			this->Gender_Label = (gcnew System::Windows::Forms::Label());
			this->Age_Label = (gcnew System::Windows::Forms::Label());
			this->Active_Label = (gcnew System::Windows::Forms::Label());
			this->ID_Label = (gcnew System::Windows::Forms::Label());
			this->Username_Label = (gcnew System::Windows::Forms::Label());
			this->DM_Button = (gcnew System::Windows::Forms::Button());
			this->EP_Button = (gcnew System::Windows::Forms::Button());
			this->NP_Button = (gcnew System::Windows::Forms::Button());
			this->W_button = (gcnew System::Windows::Forms::Button());
			this->P_Button = (gcnew System::Windows::Forms::Button());
			this->HA_Button = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel1->Controls->Add(this->NA_Label);
			this->panel1->Controls->Add(this->Gender_Label);
			this->panel1->Controls->Add(this->Age_Label);
			this->panel1->Controls->Add(this->Active_Label);
			this->panel1->Controls->Add(this->ID_Label);
			this->panel1->Controls->Add(this->Username_Label);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(299, 664);
			this->panel1->TabIndex = 0;
			// 
			// NA_Label
			// 
			this->NA_Label->AutoSize = true;
			this->NA_Label->Location = System::Drawing::Point(12, 237);
			this->NA_Label->Name = L"NA_Label";
			this->NA_Label->Size = System::Drawing::Size(316, 32);
			this->NA_Label->TabIndex = 5;
			this->NA_Label->Text = L"If not active add periond";
			// 
			// Gender_Label
			// 
			this->Gender_Label->AutoSize = true;
			this->Gender_Label->Location = System::Drawing::Point(12, 142);
			this->Gender_Label->Name = L"Gender_Label";
			this->Gender_Label->Size = System::Drawing::Size(329, 32);
			this->Gender_Label->TabIndex = 4;
			this->Gender_Label->Text = L"Gender: GENDER HERE";
			// 
			// Age_Label
			// 
			this->Age_Label->AutoSize = true;
			this->Age_Label->Location = System::Drawing::Point(12, 99);
			this->Age_Label->Name = L"Age_Label";
			this->Age_Label->Size = System::Drawing::Size(225, 32);
			this->Age_Label->TabIndex = 3;
			this->Age_Label->Text = L"Age: AGE HERE";
			// 
			// Active_Label
			// 
			this->Active_Label->AutoSize = true;
			this->Active_Label->Location = System::Drawing::Point(12, 187);
			this->Active_Label->Name = L"Active_Label";
			this->Active_Label->Size = System::Drawing::Size(262, 32);
			this->Active_Label->TabIndex = 2;
			this->Active_Label->Text = L"Active: YES OR NO";
			// 
			// ID_Label
			// 
			this->ID_Label->AutoSize = true;
			this->ID_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_Label->Location = System::Drawing::Point(12, 55);
			this->ID_Label->Name = L"ID_Label";
			this->ID_Label->Size = System::Drawing::Size(168, 32);
			this->ID_Label->TabIndex = 1;
			this->ID_Label->Text = L"ID: ID HERE";
			// 
			// Username_Label
			// 
			this->Username_Label->AutoSize = true;
			this->Username_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username_Label->Location = System::Drawing::Point(12, 13);
			this->Username_Label->Name = L"Username_Label";
			this->Username_Label->Size = System::Drawing::Size(258, 32);
			this->Username_Label->TabIndex = 0;
			this->Username_Label->Text = L"USERNAME HERE";
			// 
			// DM_Button
			// 
			this->DM_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->DM_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DM_Button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->DM_Button->Location = System::Drawing::Point(306, 13);
			this->DM_Button->Name = L"DM_Button";
			this->DM_Button->Size = System::Drawing::Size(200, 200);
			this->DM_Button->TabIndex = 1;
			this->DM_Button->Text = L"Daily Metric";
			this->DM_Button->UseVisualStyleBackColor = false;
			this->DM_Button->Click += gcnew System::EventHandler(this, &UserDashboard::DM_Button_Click);
			// 
			// EP_Button
			// 
			this->EP_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->EP_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EP_Button->Location = System::Drawing::Point(512, 13);
			this->EP_Button->Name = L"EP_Button";
			this->EP_Button->Size = System::Drawing::Size(200, 200);
			this->EP_Button->TabIndex = 2;
			this->EP_Button->Text = L"Exercise Plan";
			this->EP_Button->UseVisualStyleBackColor = false;
			this->EP_Button->Click += gcnew System::EventHandler(this, &UserDashboard::EP_Button_Click);
			// 
			// NP_Button
			// 
			this->NP_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->NP_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NP_Button->Location = System::Drawing::Point(718, 13);
			this->NP_Button->Name = L"NP_Button";
			this->NP_Button->Size = System::Drawing::Size(200, 200);
			this->NP_Button->TabIndex = 3;
			this->NP_Button->Text = L"Nutrition Plan";
			this->NP_Button->UseVisualStyleBackColor = false;
			this->NP_Button->Click += gcnew System::EventHandler(this, &UserDashboard::NP_Button_Click);
			// 
			// W_button
			// 
			this->W_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->W_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->W_button->Location = System::Drawing::Point(306, 219);
			this->W_button->Name = L"W_button";
			this->W_button->Size = System::Drawing::Size(200, 200);
			this->W_button->TabIndex = 4;
			this->W_button->Text = L"Workouts";
			this->W_button->UseVisualStyleBackColor = false;
			this->W_button->Click += gcnew System::EventHandler(this, &UserDashboard::W_button_Click);
			// 
			// P_Button
			// 
			this->P_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->P_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->P_Button->Location = System::Drawing::Point(512, 219);
			this->P_Button->Name = L"P_Button";
			this->P_Button->Size = System::Drawing::Size(200, 200);
			this->P_Button->TabIndex = 5;
			this->P_Button->Text = L"Payments";
			this->P_Button->UseVisualStyleBackColor = false;
			this->P_Button->Click += gcnew System::EventHandler(this, &UserDashboard::P_Button_Click);
			// 
			// HA_Button
			// 
			this->HA_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->HA_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HA_Button->Location = System::Drawing::Point(718, 219);
			this->HA_Button->Name = L"HA_Button";
			this->HA_Button->Size = System::Drawing::Size(200, 200);
			this->HA_Button->TabIndex = 6;
			this->HA_Button->Text = L"Health Assessments";
			this->HA_Button->UseVisualStyleBackColor = false;
			this->HA_Button->Click += gcnew System::EventHandler(this, &UserDashboard::HA_Button_Click);
			// 
			// UserDashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(932, 664);
			this->Controls->Add(this->HA_Button);
			this->Controls->Add(this->P_Button);
			this->Controls->Add(this->W_button);
			this->Controls->Add(this->NP_Button);
			this->Controls->Add(this->EP_Button);
			this->Controls->Add(this->DM_Button);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"UserDashboard";
			this->Text = L"User Dashboard";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void DM_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	DailyMetric^ dailyMetricForm = gcnew DailyMetric;
	this->Hide();
	dailyMetricForm->ShowDialog();
	this->Show();

}
private: System::Void EP_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	ExercisePlan^ exercisePlaneForm = gcnew ExercisePlan;
	this->Hide();
	exercisePlaneForm->ShowDialog();
	this->Show();
}
private: System::Void NP_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	NutritionPlan^ nutritionPlanForm = gcnew NutritionPlan;
	this->Hide();
	nutritionPlanForm->ShowDialog();
	this->Show();
}
private: System::Void W_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Workouts^ workoutsForm = gcnew Workouts;
	this->Hide();
	workoutsForm->ShowDialog();
	this->Show();
}
private: System::Void P_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Payments^ paymentsForm = gcnew Payments;
	this->Hide();
	paymentsForm->ShowDialog();
	this->Show();
}
private: System::Void HA_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	HealthAssess^ healthAssessForm = gcnew HealthAssess;
	this->Hide();
	healthAssessForm->ShowDialog();
	this->Show();
}
};
}
