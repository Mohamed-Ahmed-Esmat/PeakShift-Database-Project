#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubscrpPlans
	/// </summary>
	public ref class SubscrpPlans : public System::Windows::Forms::Form
	{
	public:
		SubscrpPlans(void)
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
		~SubscrpPlans()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:

	protected:

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(565, 413);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel1->Location = System::Drawing::Point(20, 20);
			this->panel1->Margin = System::Windows::Forms::Padding(20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(525, 89);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SubscrpPlans::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(365, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Subscribe";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(20, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Pay for one month";
			this->label2->Click += gcnew System::EventHandler(this, &SubscrpPlans::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Price/ 1 month";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(20, 149);
			this->panel2->Margin = System::Windows::Forms::Padding(20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(525, 89);
			this->panel2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(365, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 57);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Subscribe";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(20, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Pay for a six months";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Price/ 6 month";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(20, 278);
			this->panel3->Margin = System::Windows::Forms::Padding(20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(525, 89);
			this->panel3->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(365, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Subscribe";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(20, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Pay for one year";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Price/ 1 year";
			// 
			// SubscrpPlans
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 415);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"SubscrpPlans";
			this->Text = L"SubscrpPlans";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
