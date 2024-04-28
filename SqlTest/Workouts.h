#pragma once
#include "AllWorkouts.h"

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Workouts
	/// </summary>
	public ref class Workouts : public System::Windows::Forms::Form
	{
	public:
		Workouts(void)
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
		~Workouts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Duration;
	protected:
	private: System::Windows::Forms::Label^ Sets;
	private: System::Windows::Forms::Label^ Reps;
	private: System::Windows::Forms::Label^ CB_Label;
	private: System::Windows::Forms::Label^ WT_Labe;
	private: System::Windows::Forms::Button^ AW_Button;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ ID_ListBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Duration = (gcnew System::Windows::Forms::Label());
			this->Sets = (gcnew System::Windows::Forms::Label());
			this->Reps = (gcnew System::Windows::Forms::Label());
			this->CB_Label = (gcnew System::Windows::Forms::Label());
			this->WT_Labe = (gcnew System::Windows::Forms::Label());
			this->AW_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ID_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Duration
			// 
			this->Duration->AutoSize = true;
			this->Duration->Location = System::Drawing::Point(393, 373);
			this->Duration->Name = L"Duration";
			this->Duration->Size = System::Drawing::Size(103, 29);
			this->Duration->TabIndex = 20;
			this->Duration->Text = L"Duration";
			// 
			// Sets
			// 
			this->Sets->AutoSize = true;
			this->Sets->Location = System::Drawing::Point(393, 313);
			this->Sets->Name = L"Sets";
			this->Sets->Size = System::Drawing::Size(61, 29);
			this->Sets->TabIndex = 19;
			this->Sets->Text = L"Sets";
			// 
			// Reps
			// 
			this->Reps->AutoSize = true;
			this->Reps->Location = System::Drawing::Point(496, 255);
			this->Reps->Name = L"Reps";
			this->Reps->Size = System::Drawing::Size(70, 29);
			this->Reps->TabIndex = 18;
			this->Reps->Text = L"Reps";
			// 
			// CB_Label
			// 
			this->CB_Label->AutoSize = true;
			this->CB_Label->Location = System::Drawing::Point(496, 195);
			this->CB_Label->Name = L"CB_Label";
			this->CB_Label->Size = System::Drawing::Size(103, 29);
			this->CB_Label->TabIndex = 17;
			this->CB_Label->Text = L"Calories";
			// 
			// WT_Labe
			// 
			this->WT_Labe->AutoSize = true;
			this->WT_Labe->Location = System::Drawing::Point(496, 135);
			this->WT_Labe->Name = L"WT_Labe";
			this->WT_Labe->Size = System::Drawing::Size(68, 29);
			this->WT_Labe->TabIndex = 16;
			this->WT_Labe->Text = L"Type";
			// 
			// AW_Button
			// 
			this->AW_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->AW_Button->Location = System::Drawing::Point(675, 12);
			this->AW_Button->Name = L"AW_Button";
			this->AW_Button->Size = System::Drawing::Size(185, 45);
			this->AW_Button->TabIndex = 21;
			this->AW_Button->Text = L"All Workouts";
			this->AW_Button->UseVisualStyleBackColor = false;
			this->AW_Button->Click += gcnew System::EventHandler(this, &Workouts::AW_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Reps:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 29);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Calories Burned:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(261, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 29);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Workout Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 373);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 29);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Duration:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 29);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Sets:";
			// 
			// ID_ListBox
			// 
			this->ID_ListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->ID_ListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID_ListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_ListBox->FormattingEnabled = true;
			this->ID_ListBox->ItemHeight = 25;
			this->ID_ListBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->ID_ListBox->Location = System::Drawing::Point(0, 58);
			this->ID_ListBox->Name = L"ID_ListBox";
			this->ID_ListBox->Size = System::Drawing::Size(251, 475);
			this->ID_ListBox->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 29);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Today\'s Workouts";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(0, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 60);
			this->panel1->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(261, 432);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 29);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Machine Used:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(463, 432);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(175, 29);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Machine Name";
			// 
			// Workouts
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(872, 539);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ID_ListBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AW_Button);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Duration);
			this->Controls->Add(this->Sets);
			this->Controls->Add(this->Reps);
			this->Controls->Add(this->CB_Label);
			this->Controls->Add(this->WT_Labe);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Workouts";
			this->Text = L"Workouts";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void AW_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		AllWorkouts^ allWorkoutsForm = gcnew AllWorkouts;
		this->Hide();
		allWorkoutsForm->ShowDialog();
		this->Show();

	}
};
}
