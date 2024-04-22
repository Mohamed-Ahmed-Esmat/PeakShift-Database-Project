#pragma once

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(299, 664);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(316, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"If not active add periond";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(329, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Gender: GENDER HERE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Age: AGE HERE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Active: YES OR NO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID: ID HERE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USERNAME HERE";
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
			// 
			// UserDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
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
}
};
}
