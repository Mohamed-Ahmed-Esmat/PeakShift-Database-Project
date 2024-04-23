#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCoach
	/// </summary>
	public ref class AddCoach : public System::Windows::Forms::Form
	{
	public:
		AddCoach(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCoach()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCoachID;
	protected:
	private: System::Windows::Forms::Label^ lblCoachName;
	private: System::Windows::Forms::Label^ lblStartDate;
	private: System::Windows::Forms::Label^ lblActive;
	private: System::Windows::Forms::Label^ lblSalary;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::TextBox^ txtCoachID;
	private: System::Windows::Forms::TextBox^ txtCoachName;
	private: System::Windows::Forms::TextBox^ txtStartDate;
	private: System::Windows::Forms::TextBox^ txtActive;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::TextBox^ txtGender;
	private: System::Windows::Forms::Button^ btnSubmit;

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
			this->lblCoachID = (gcnew System::Windows::Forms::Label());
			this->lblCoachName = (gcnew System::Windows::Forms::Label());
			this->lblStartDate = (gcnew System::Windows::Forms::Label());
			this->lblActive = (gcnew System::Windows::Forms::Label());
			this->lblSalary = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->txtCoachID = (gcnew System::Windows::Forms::TextBox());
			this->txtCoachName = (gcnew System::Windows::Forms::TextBox());
			this->txtStartDate = (gcnew System::Windows::Forms::TextBox());
			this->txtActive = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblCoachID
			// 
			this->lblCoachID->Location = System::Drawing::Point(50, 50);
			this->lblCoachID->Name = L"lblCoachID";
			this->lblCoachID->Size = System::Drawing::Size(100, 23);
			this->lblCoachID->TabIndex = 0;
			this->lblCoachID->Text = L"CoachID (Primary Key):";
			// 
			// lblCoachName
			// 
			this->lblCoachName->Location = System::Drawing::Point(50, 100);
			this->lblCoachName->Name = L"lblCoachName";
			this->lblCoachName->Size = System::Drawing::Size(100, 23);
			this->lblCoachName->TabIndex = 1;
			this->lblCoachName->Text = L"Coach Name:";
			// 
			// lblStartDate
			// 
			this->lblStartDate->Location = System::Drawing::Point(50, 150);
			this->lblStartDate->Name = L"lblStartDate";
			this->lblStartDate->Size = System::Drawing::Size(100, 23);
			this->lblStartDate->TabIndex = 2;
			this->lblStartDate->Text = L"Start Date:";
			// 
			// lblActive
			// 
			this->lblActive->Location = System::Drawing::Point(50, 200);
			this->lblActive->Name = L"lblActive";
			this->lblActive->Size = System::Drawing::Size(100, 23);
			this->lblActive->TabIndex = 3;
			this->lblActive->Text = L"Active:";
			// 
			// lblSalary
			// 
			this->lblSalary->Location = System::Drawing::Point(50, 250);
			this->lblSalary->Name = L"lblSalary";
			this->lblSalary->Size = System::Drawing::Size(100, 23);
			this->lblSalary->TabIndex = 4;
			this->lblSalary->Text = L"Salary:";
			// 
			// lblEmail
			// 
			this->lblEmail->Location = System::Drawing::Point(50, 300);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(100, 23);
			this->lblEmail->TabIndex = 5;
			this->lblEmail->Text = L"Email:";
			// 
			// lblPassword
			// 
			this->lblPassword->Location = System::Drawing::Point(50, 350);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(100, 23);
			this->lblPassword->TabIndex = 6;
			this->lblPassword->Text = L"Password:";
			// 
			// lblAge
			// 
			this->lblAge->Location = System::Drawing::Point(50, 400);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(100, 23);
			this->lblAge->TabIndex = 7;
			this->lblAge->Text = L"Age:";
			// 
			// lblGender
			// 
			this->lblGender->Location = System::Drawing::Point(50, 450);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(100, 23);
			this->lblGender->TabIndex = 8;
			this->lblGender->Text = L"Gender:";
			// 
			// txtCoachID
			// 
			this->txtCoachID->Location = System::Drawing::Point(200, 50);
			this->txtCoachID->Name = L"txtCoachID";
			this->txtCoachID->Size = System::Drawing::Size(100, 22);
			this->txtCoachID->TabIndex = 9;
			// 
			// txtCoachName
			// 
			this->txtCoachName->Location = System::Drawing::Point(200, 100);
			this->txtCoachName->Name = L"txtCoachName";
			this->txtCoachName->Size = System::Drawing::Size(100, 22);
			this->txtCoachName->TabIndex = 10;
			// 
			// txtStartDate
			// 
			this->txtStartDate->Location = System::Drawing::Point(200, 150);
			this->txtStartDate->Name = L"txtStartDate";
			this->txtStartDate->Size = System::Drawing::Size(100, 22);
			this->txtStartDate->TabIndex = 11;
			// 
			// txtActive
			// 
			this->txtActive->Location = System::Drawing::Point(200, 200);
			this->txtActive->Name = L"txtActive";
			this->txtActive->Size = System::Drawing::Size(100, 22);
			this->txtActive->TabIndex = 12;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(200, 250);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(100, 22);
			this->txtSalary->TabIndex = 13;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(200, 300);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 22);
			this->txtEmail->TabIndex = 14;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(200, 350);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 22);
			this->txtPassword->TabIndex = 15;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(200, 400);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(100, 22);
			this->txtAge->TabIndex = 16;
			// 
			// txtGender
			// 
			this->txtGender->Location = System::Drawing::Point(200, 450);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(100, 22);
			this->txtGender->TabIndex = 17;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->Location = System::Drawing::Point(156, 490);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(130, 60);
			this->btnSubmit->TabIndex = 18;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &AddCoach::btnSubmit_Click);
			// 
			// AddCoach
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(486, 572);
			this->Controls->Add(this->lblCoachID);
			this->Controls->Add(this->lblCoachName);
			this->Controls->Add(this->lblStartDate);
			this->Controls->Add(this->lblActive);
			this->Controls->Add(this->lblSalary);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->txtCoachID);
			this->Controls->Add(this->txtCoachName);
			this->Controls->Add(this->txtStartDate);
			this->Controls->Add(this->txtActive);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->btnSubmit);
			this->Name = L"AddCoach";
			this->Text = L"AddCoach";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Event handler for the Submit button click
		System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Implement the logic to submit the new coach here
			// You can retrieve values from the text boxes and add the coach to the database or perform any other action.
		}
	};
}
