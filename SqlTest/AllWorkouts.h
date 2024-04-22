#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AllWorkouts
	/// </summary>
	public ref class AllWorkouts : public System::Windows::Forms::Form
	{
	public:
		AllWorkouts(void)
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
		~AllWorkouts()
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
	private: System::Windows::Forms::Label^ WT_Label;


	private: System::Windows::Forms::ListBox^ ID_ListBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
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
			this->WT_Label = (gcnew System::Windows::Forms::Label());
			this->ID_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Duration
			// 
			this->Duration->AutoSize = true;
			this->Duration->Location = System::Drawing::Point(381, 337);
			this->Duration->Name = L"Duration";
			this->Duration->Size = System::Drawing::Size(122, 32);
			this->Duration->TabIndex = 15;
			this->Duration->Text = L"Duration";
			// 
			// Sets
			// 
			this->Sets->AutoSize = true;
			this->Sets->Location = System::Drawing::Point(381, 277);
			this->Sets->Name = L"Sets";
			this->Sets->Size = System::Drawing::Size(71, 32);
			this->Sets->TabIndex = 14;
			this->Sets->Text = L"Sets";
			// 
			// Reps
			// 
			this->Reps->AutoSize = true;
			this->Reps->Location = System::Drawing::Point(381, 217);
			this->Reps->Name = L"Reps";
			this->Reps->Size = System::Drawing::Size(80, 32);
			this->Reps->TabIndex = 13;
			this->Reps->Text = L"Reps";
			// 
			// CB_Label
			// 
			this->CB_Label->AutoSize = true;
			this->CB_Label->Location = System::Drawing::Point(381, 157);
			this->CB_Label->Name = L"CB_Label";
			this->CB_Label->Size = System::Drawing::Size(119, 32);
			this->CB_Label->TabIndex = 12;
			this->CB_Label->Text = L"Calories";
			// 
			// WT_Label
			// 
			this->WT_Label->AutoSize = true;
			this->WT_Label->Location = System::Drawing::Point(381, 97);
			this->WT_Label->Name = L"WT_Label";
			this->WT_Label->Size = System::Drawing::Size(77, 32);
			this->WT_Label->TabIndex = 11;
			this->WT_Label->Text = L"Type";
			// 
			// ID_ListBox
			// 
			this->ID_ListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->ID_ListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID_ListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_ListBox->FormattingEnabled = true;
			this->ID_ListBox->ItemHeight = 29;
			this->ID_ListBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->ID_ListBox->Location = System::Drawing::Point(0, 0);
			this->ID_ListBox->Name = L"ID_ListBox";
			this->ID_ListBox->Size = System::Drawing::Size(146, 667);
			this->ID_ListBox->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label8->Location = System::Drawing::Point(13, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 32);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Date:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(138, -6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(501, 77);
			this->panel1->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(151, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 32);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Duration:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 32);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Sets:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(151, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 32);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Reps:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 32);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Calories Burned:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(151, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 32);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Workout Type:";
			// 
			// AllWorkouts
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(636, 670);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Duration);
			this->Controls->Add(this->Sets);
			this->Controls->Add(this->Reps);
			this->Controls->Add(this->CB_Label);
			this->Controls->Add(this->WT_Label);
			this->Controls->Add(this->ID_ListBox);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"AllWorkouts";
			this->Text = L"All Workouts";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
