#pragma once

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for AddUser
    /// </summary>
    public ref class AddUser : public System::Windows::Forms::Form
    {
    public:
        AddUser(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~AddUser()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ lblUserID;
    protected:
    private: System::Windows::Forms::Label^ lblUsername;
    private: System::Windows::Forms::Label^ lblAge;
    private: System::Windows::Forms::Label^ lblGender;
    private: System::Windows::Forms::Label^ lblEmail;
    private: System::Windows::Forms::Label^ lblActive;
    private: System::Windows::Forms::Label^ lblFrozen;
    private: System::Windows::Forms::Label^ lblFreezeLength;
    private: System::Windows::Forms::Label^ lblPassword;
    private: System::Windows::Forms::TextBox^ txtUserID;
    private: System::Windows::Forms::TextBox^ txtUsername;
    private: System::Windows::Forms::TextBox^ txtAge;
    private: System::Windows::Forms::TextBox^ txtGender;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtActive;
    private: System::Windows::Forms::TextBox^ txtFrozen;
    private: System::Windows::Forms::TextBox^ txtFreezeLength;
    private: System::Windows::Forms::TextBox^ txtPassword;
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
            this->lblUserID = (gcnew System::Windows::Forms::Label());
            this->lblUsername = (gcnew System::Windows::Forms::Label());
            this->lblAge = (gcnew System::Windows::Forms::Label());
            this->lblGender = (gcnew System::Windows::Forms::Label());
            this->lblEmail = (gcnew System::Windows::Forms::Label());
            this->lblActive = (gcnew System::Windows::Forms::Label());
            this->lblFrozen = (gcnew System::Windows::Forms::Label());
            this->lblFreezeLength = (gcnew System::Windows::Forms::Label());
            this->lblPassword = (gcnew System::Windows::Forms::Label());
            this->txtUserID = (gcnew System::Windows::Forms::TextBox());
            this->txtUsername = (gcnew System::Windows::Forms::TextBox());
            this->txtAge = (gcnew System::Windows::Forms::TextBox());
            this->txtGender = (gcnew System::Windows::Forms::TextBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtActive = (gcnew System::Windows::Forms::TextBox());
            this->txtFrozen = (gcnew System::Windows::Forms::TextBox());
            this->txtFreezeLength = (gcnew System::Windows::Forms::TextBox());
            this->txtPassword = (gcnew System::Windows::Forms::TextBox());
            this->btnSubmit = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // lblUserID
            // 
            this->lblUserID->Location = System::Drawing::Point(50, 50);
            this->lblUserID->Name = L"lblUserID";
            this->lblUserID->Size = System::Drawing::Size(100, 23);
            this->lblUserID->TabIndex = 0;
            this->lblUserID->Text = L"UserID (Primary Key):";
            // 
            // lblUsername
            // 
            this->lblUsername->Location = System::Drawing::Point(50, 100);
            this->lblUsername->Name = L"lblUsername";
            this->lblUsername->Size = System::Drawing::Size(100, 23);
            this->lblUsername->TabIndex = 1;
            this->lblUsername->Text = L"Username:";
            // 
            // lblAge
            // 
            this->lblAge->Location = System::Drawing::Point(50, 150);
            this->lblAge->Name = L"lblAge";
            this->lblAge->Size = System::Drawing::Size(100, 23);
            this->lblAge->TabIndex = 2;
            this->lblAge->Text = L"Age:";
            // 
            // lblGender
            // 
            this->lblGender->Location = System::Drawing::Point(50, 200);
            this->lblGender->Name = L"lblGender";
            this->lblGender->Size = System::Drawing::Size(100, 23);
            this->lblGender->TabIndex = 3;
            this->lblGender->Text = L"Gender:";
            // 
            // lblEmail
            // 
            this->lblEmail->Location = System::Drawing::Point(50, 250);
            this->lblEmail->Name = L"lblEmail";
            this->lblEmail->Size = System::Drawing::Size(100, 23);
            this->lblEmail->TabIndex = 4;
            this->lblEmail->Text = L"Email:";
            // 
            // lblActive
            // 
            this->lblActive->Location = System::Drawing::Point(50, 300);
            this->lblActive->Name = L"lblActive";
            this->lblActive->Size = System::Drawing::Size(100, 23);
            this->lblActive->TabIndex = 5;
            this->lblActive->Text = L"Active:";
            // 
            // lblFrozen
            // 
            this->lblFrozen->Location = System::Drawing::Point(50, 350);
            this->lblFrozen->Name = L"lblFrozen";
            this->lblFrozen->Size = System::Drawing::Size(100, 23);
            this->lblFrozen->TabIndex = 6;
            this->lblFrozen->Text = L"Frozen:";
            // 
            // lblFreezeLength
            // 
            this->lblFreezeLength->Location = System::Drawing::Point(50, 400);
            this->lblFreezeLength->Name = L"lblFreezeLength";
            this->lblFreezeLength->Size = System::Drawing::Size(100, 23);
            this->lblFreezeLength->TabIndex = 7;
            this->lblFreezeLength->Text = L"Freeze Length:";
            // 
            // lblPassword
            // 
            this->lblPassword->Location = System::Drawing::Point(50, 450);
            this->lblPassword->Name = L"lblPassword";
            this->lblPassword->Size = System::Drawing::Size(100, 23);
            this->lblPassword->TabIndex = 8;
            this->lblPassword->Text = L"Password:";
            // 
            // txtUserID
            // 
            this->txtUserID->Location = System::Drawing::Point(200, 50);
            this->txtUserID->Name = L"txtUserID";
            this->txtUserID->Size = System::Drawing::Size(100, 22);
            this->txtUserID->TabIndex = 9;
            // 
            // txtUsername
            // 
            this->txtUsername->Location = System::Drawing::Point(200, 100);
            this->txtUsername->Name = L"txtUsername";
            this->txtUsername->Size = System::Drawing::Size(100, 22);
            this->txtUsername->TabIndex = 10;
            // 
            // txtAge
            // 
            this->txtAge->Location = System::Drawing::Point(200, 150);
            this->txtAge->Name = L"txtAge";
            this->txtAge->Size = System::Drawing::Size(100, 22);
            this->txtAge->TabIndex = 11;
            // 
            // txtGender
            // 
            this->txtGender->Location = System::Drawing::Point(200, 200);
            this->txtGender->Name = L"txtGender";
            this->txtGender->Size = System::Drawing::Size(100, 22);
            this->txtGender->TabIndex = 12;
            // 
            // txtEmail
            // 
            this->txtEmail->Location = System::Drawing::Point(200, 250);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(100, 22);
            this->txtEmail->TabIndex = 13;
            // 
            // txtActive
            // 
            this->txtActive->Location = System::Drawing::Point(200, 300);
            this->txtActive->Name = L"txtActive";
            this->txtActive->Size = System::Drawing::Size(100, 22);
            this->txtActive->TabIndex = 14;
            // 
            // txtFrozen
            // 
            this->txtFrozen->Location = System::Drawing::Point(200, 350);
            this->txtFrozen->Name = L"txtFrozen";
            this->txtFrozen->Size = System::Drawing::Size(100, 22);
            this->txtFrozen->TabIndex = 15;
            // 
            // txtFreezeLength
            // 
            this->txtFreezeLength->Location = System::Drawing::Point(200, 400);
            this->txtFreezeLength->Name = L"txtFreezeLength";
            this->txtFreezeLength->Size = System::Drawing::Size(100, 22);
            this->txtFreezeLength->TabIndex = 16;
            // 
            // txtPassword
            // 
            this->txtPassword->Location = System::Drawing::Point(200, 450);
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->Size = System::Drawing::Size(100, 22);
            this->txtPassword->TabIndex = 17;
            // 
            // btnSubmit
            // 
            this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->btnSubmit->Location = System::Drawing::Point(180, 500);
            this->btnSubmit->Name = L"btnSubmit";
            this->btnSubmit->Size = System::Drawing::Size(130, 60);
            this->btnSubmit->TabIndex = 18;
            this->btnSubmit->Text = L"Submit";
            this->btnSubmit->UseVisualStyleBackColor = false;
            this->btnSubmit->Click += gcnew System::EventHandler(this, &AddUser::btnSubmit_Click);
            // 
            // AddUser
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(486, 572);
            this->Controls->Add(this->lblUserID);
            this->Controls->Add(this->lblUsername);
            this->Controls->Add(this->lblAge);
            this->Controls->Add(this->lblGender);
            this->Controls->Add(this->lblEmail);
            this->Controls->Add(this->lblActive);
            this->Controls->Add(this->lblFrozen);
            this->Controls->Add(this->lblFreezeLength);
            this->Controls->Add(this->lblPassword);
            this->Controls->Add(this->txtUserID);
            this->Controls->Add(this->txtUsername);
            this->Controls->Add(this->txtAge);
            this->Controls->Add(this->txtGender);
            this->Controls->Add(this->txtEmail);
            this->Controls->Add(this->txtActive);
            this->Controls->Add(this->txtFrozen);
            this->Controls->Add(this->txtFreezeLength);
            this->Controls->Add(this->txtPassword);
            this->Controls->Add(this->btnSubmit);
            this->Name = L"AddUser";
            this->Text = L"AddUser";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // Event handler for the Submit button click
        System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Implement the logic to submit the new user here
            // You can retrieve values from the text boxes and add the user to the database or perform any other action.
        }
    };
}
