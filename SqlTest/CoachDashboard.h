#pragma once

#include "ViewUserInfo.h" // Include the header file for ViewUserInfo form
#include "AddUser.h"
#include "AddCoach.h"

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for CoachDashboard
    /// </summary>
    public ref class CoachDashboard : public System::Windows::Forms::Form
    {
    public:
        CoachDashboard(void)
        {

            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
         //   this->VU_Button->Click += gcnew System::EventHandler(this, &CoachDashboard::VU_Button_Click);
        }

        void SetUsername(String^ username)
        {
            label1->Text = username;
        }


        void SetID(String^ id)
        {
            label2->Text = id;
        }

        String^ GetID()
        {
            return label2->Text; 
        }

        void SetAge(String^ age)
        {
            label4->Text = age;
        }


        void SetGender(String^ gender)
        {
            label5->Text = gender;
        }


        void SetActive(String^ active)
        {
            label3->Text = active;
        }


        void SetSalary(String^ salary)
        {
            label6->Text = salary;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~CoachDashboard()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel1;
    protected:
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ VU_Button;
    private: System::Windows::Forms::Button^ add_coach_btn;
    private: System::Windows::Forms::Button^ add_user_btn;




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
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->VU_Button = (gcnew System::Windows::Forms::Button());
            this->add_coach_btn = (gcnew System::Windows::Forms::Button());
            this->add_user_btn = (gcnew System::Windows::Forms::Button());
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
            this->panel1->Location = System::Drawing::Point(-1, -1);
            this->panel1->Margin = System::Windows::Forms::Padding(2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(249, 553);
            this->panel1->TabIndex = 1;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(10, 198);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(80, 29);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Salary";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(10, 118);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(280, 29);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Gender: GENDER HERE";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(10, 82);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(189, 29);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Age: AGE HERE";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(10, 156);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(222, 29);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Active: YES OR NO";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(10, 46);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(143, 29);
            this->label2->TabIndex = 1;
            this->label2->Text = L"ID: ID HERE";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(10, 11);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(220, 29);
            this->label1->TabIndex = 0;
            this->label1->Text = L"USERNAME HERE";
            // 
            // VU_Button
            // 
            this->VU_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->VU_Button->Cursor = System::Windows::Forms::Cursors::Hand;
            this->VU_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->VU_Button->ForeColor = System::Drawing::SystemColors::ControlText;
            this->VU_Button->Location = System::Drawing::Point(293, 17);
            this->VU_Button->Margin = System::Windows::Forms::Padding(2);
            this->VU_Button->Name = L"VU_Button";
            this->VU_Button->Size = System::Drawing::Size(167, 167);
            this->VU_Button->TabIndex = 2;
            this->VU_Button->Text = L"View Users";
            this->VU_Button->UseVisualStyleBackColor = false;
            this->VU_Button->Click += gcnew System::EventHandler(this, &CoachDashboard::VU_Button_Click);
            // 
            // add_coach_btn
            // 
            this->add_coach_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->add_coach_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->add_coach_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->add_coach_btn->ForeColor = System::Drawing::SystemColors::ControlText;
            this->add_coach_btn->Location = System::Drawing::Point(555, 17);
            this->add_coach_btn->Margin = System::Windows::Forms::Padding(2);
            this->add_coach_btn->Name = L"add_coach_btn";
            this->add_coach_btn->Size = System::Drawing::Size(167, 167);
            this->add_coach_btn->TabIndex = 2;
            this->add_coach_btn->Text = L"Add Coach";
            this->add_coach_btn->UseVisualStyleBackColor = false;
            this->add_coach_btn->Click += gcnew System::EventHandler(this, &CoachDashboard::add_coach_Button_Click);
            // 
            // add_user_btn
            // 
            this->add_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->add_user_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->add_user_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->add_user_btn->ForeColor = System::Drawing::SystemColors::ControlText;
            this->add_user_btn->Location = System::Drawing::Point(430, 261);
            this->add_user_btn->Margin = System::Windows::Forms::Padding(2);
            this->add_user_btn->Name = L"add_user_btn";
            this->add_user_btn->Size = System::Drawing::Size(167, 167);
            this->add_user_btn->TabIndex = 2;
            this->add_user_btn->Text = L"Add Users";
            this->add_user_btn->UseVisualStyleBackColor = false;
            this->add_user_btn->Click += gcnew System::EventHandler(this, &CoachDashboard::add_user_Button_Click);
            // 
            // CoachDashboard
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(777, 553);
            this->Controls->Add(this->add_user_btn);
            this->Controls->Add(this->add_coach_btn);
            this->Controls->Add(this->VU_Button);
            this->Controls->Add(this->panel1);
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->Name = L"CoachDashboard";
            this->Text = L"CoachDashboard";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void VU_Button_Click(System::Object^ sender, System::EventArgs^ e) {
        // When View Users button is clicked, open the ViewUserInfo form
        ViewUserInfo^ viewUserInfoForm = gcnew ViewUserInfo(this->GetID());
        this->Hide(); 
        viewUserInfoForm->ShowDialog();
        this->Show(); 
    }

    private: System::Void add_coach_Button_Click(System::Object^ sender, System::EventArgs^ e) {
        // When View Users button is clicked, open the ViewUserInfo form
        AddCoach^ addCoach = gcnew AddCoach();
        this->Hide(); // Hide the current form
        addCoach->ShowDialog();
        this->Show(); // Show the ViewUserInfo form // Show the ViewUserInfo form
    }


    private: System::Void add_user_Button_Click(System::Object^ sender, System::EventArgs^ e) {
        // When View Users button is clicked, open the ViewUserInfo form
        AddUser^ addUser = gcnew AddUser();
        this->Hide(); // Hide the current form
        addUser->ShowDialog();
        this->Show(); // Show the ViewUserInfo form
    }
    };
}
