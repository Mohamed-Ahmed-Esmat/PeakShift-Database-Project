#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 171);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 22);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button1->Location = System::Drawing::Point(141, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(403, 387);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textBox1->Text;
		String^ password = textBox2->Text;

		/*if (login == "admin" && password == "admin") {
			MessageBox::Show("Login Success");
		}
		else {
			MessageBox::Show("Login Failed");
			}*/ 

		try {
			SqlConnection^ con = gcnew SqlConnection("Data Source=LEGION-5;Initial Catalog=PeakShift;Integrated Security=True");
			con->Open();
			String ^ query = "SELECT * FROM [User] WHERE Username=@login and Password=@password";
			SqlCommand command(query, con);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@password", password);
			SqlDataReader^ dr = command.ExecuteReader();
			int count = 0;
			while (dr->Read()) {
				count += 1;
			}
			if (count == 1) {
				MessageBox::Show("Login Success");
			}
			else {
				MessageBox::Show("Login Failed");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
