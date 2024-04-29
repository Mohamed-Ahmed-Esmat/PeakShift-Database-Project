#pragma once


namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditWorkout
	/// </summary>
	public ref class EditWorkout : public System::Windows::Forms::Form
	{
	public:
		EditWorkout(void)
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
		~EditWorkout()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::TextBox^ WT_Labe;







	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::ListBox^ ID_ListBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Button^ confirm_btn;











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
			this->WT_Labe = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ID_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->confirm_btn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// WT_Labe
			// 
			this->WT_Labe->Location = System::Drawing::Point(496, 135);
			this->WT_Labe->Name = L"WT_Labe";
			this->WT_Labe->Size = System::Drawing::Size(102, 34);
			this->WT_Labe->TabIndex = 16;
			this->WT_Labe->Text = L"ID";
			this->WT_Labe->TextChanged += gcnew System::EventHandler(this, &EditWorkout::WT_Labe_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(261, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 29);
			this->label3->TabIndex = 24;
			this->label3->Text = L"New Workout's ID:";
			this->label3->Click += gcnew System::EventHandler(this, &EditWorkout::label3_Click);
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
			this->label6->Size = System::Drawing::Size(234, 29);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Today\'s EditWorkout";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(0, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 60);
			this->panel1->TabIndex = 31;
			// 
			// confirm_btn
			// 
			this->confirm_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->confirm_btn->Location = System::Drawing::Point(419, 484);
			this->confirm_btn->Name = L"confirm_btn";
			this->confirm_btn->Size = System::Drawing::Size(179, 48);
			this->confirm_btn->TabIndex = 32;
			this->confirm_btn->Text = L"Confirm";
			this->confirm_btn->UseVisualStyleBackColor = false;
			// 
			// EditWorkout
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(872, 539);
			this->Controls->Add(this->confirm_btn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ID_ListBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->WT_Labe);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"EditWorkout";
			this->Text = L"EditWorkout";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void WT_Labe_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
}
};
}
