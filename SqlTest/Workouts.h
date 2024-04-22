#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Workouts1
	/// </summary>
	public ref class Workouts1 : public System::Windows::Forms::Form
	{
	public:
		Workouts1(void)
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
		~Workouts1()
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

	private: System::Windows::Forms::Button^ PD_Button;
	private: System::Windows::Forms::Button^ ND_Button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



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
			this->PD_Button = (gcnew System::Windows::Forms::Button());
			this->ND_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Duration
			// 
			this->Duration->AutoSize = true;
			this->Duration->Location = System::Drawing::Point(531, 197);
			this->Duration->Name = L"Duration";
			this->Duration->Size = System::Drawing::Size(122, 32);
			this->Duration->TabIndex = 20;
			this->Duration->Text = L"Duration";
			// 
			// Sets
			// 
			this->Sets->AutoSize = true;
			this->Sets->Location = System::Drawing::Point(531, 137);
			this->Sets->Name = L"Sets";
			this->Sets->Size = System::Drawing::Size(71, 32);
			this->Sets->TabIndex = 19;
			this->Sets->Text = L"Sets";
			// 
			// Reps
			// 
			this->Reps->AutoSize = true;
			this->Reps->Location = System::Drawing::Point(247, 257);
			this->Reps->Name = L"Reps";
			this->Reps->Size = System::Drawing::Size(80, 32);
			this->Reps->TabIndex = 18;
			this->Reps->Text = L"Reps";
			// 
			// CB_Label
			// 
			this->CB_Label->AutoSize = true;
			this->CB_Label->Location = System::Drawing::Point(247, 197);
			this->CB_Label->Name = L"CB_Label";
			this->CB_Label->Size = System::Drawing::Size(119, 32);
			this->CB_Label->TabIndex = 17;
			this->CB_Label->Text = L"Calories";
			// 
			// WT_Labe
			// 
			this->WT_Labe->AutoSize = true;
			this->WT_Labe->Location = System::Drawing::Point(247, 137);
			this->WT_Labe->Name = L"WT_Labe";
			this->WT_Labe->Size = System::Drawing::Size(77, 32);
			this->WT_Labe->TabIndex = 16;
			this->WT_Labe->Text = L"Type";
			// 
			// AW_Button
			// 
			this->AW_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->AW_Button->Location = System::Drawing::Point(473, 12);
			this->AW_Button->Name = L"AW_Button";
			this->AW_Button->Size = System::Drawing::Size(185, 45);
			this->AW_Button->TabIndex = 21;
			this->AW_Button->Text = L"All Workouts";
			this->AW_Button->UseVisualStyleBackColor = false;
			// 
			// PD_Button
			// 
			this->PD_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->PD_Button->Location = System::Drawing::Point(12, 383);
			this->PD_Button->Name = L"PD_Button";
			this->PD_Button->Size = System::Drawing::Size(201, 40);
			this->PD_Button->TabIndex = 22;
			this->PD_Button->Text = L"Previous Day";
			this->PD_Button->UseVisualStyleBackColor = false;
			// 
			// ND_Button
			// 
			this->ND_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->ND_Button->Location = System::Drawing::Point(494, 383);
			this->ND_Button->Name = L"ND_Button";
			this->ND_Button->Size = System::Drawing::Size(164, 40);
			this->ND_Button->TabIndex = 23;
			this->ND_Button->Text = L"Next Day";
			this->ND_Button->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 32);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Reps:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 32);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Calories Burned:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 32);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Workout Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(399, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 32);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Duration:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(399, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 32);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Sets:";
			// 
			// Workouts1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(670, 435);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ND_Button);
			this->Controls->Add(this->PD_Button);
			this->Controls->Add(this->AW_Button);
			this->Controls->Add(this->Duration);
			this->Controls->Add(this->Sets);
			this->Controls->Add(this->Reps);
			this->Controls->Add(this->CB_Label);
			this->Controls->Add(this->WT_Labe);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Workouts1";
			this->Text = L"Workouts";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
