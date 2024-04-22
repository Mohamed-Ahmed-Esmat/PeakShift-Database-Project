#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Payments
	/// </summary>
	public ref class Payments : public System::Windows::Forms::Form
	{
	public:
		Payments(void)
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
		~Payments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Subscription:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Renew on:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button1->Location = System::Drawing::Point(39, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Cancel Subscription";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button2->Location = System::Drawing::Point(332, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Freeze Subscription";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button3->Location = System::Drawing::Point(138, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(403, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Change Subscription Plan";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(326, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Renew";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(326, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Current";
			// 
			// Payments
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(662, 496);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Payments";
			this->Text = L"Payments";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
