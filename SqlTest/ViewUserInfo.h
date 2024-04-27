#pragma once
#include "CoachUserDashboard.h"

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for ViewUserInfo
    /// </summary>
    public ref class ViewUserInfo : public System::Windows::Forms::Form
    {
    public:
        ViewUserInfo(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // Populate the ListView with sample data
            listView1->View = View::Details;
      
            // Add sample items
            ListViewItem^ item1 = gcnew ListViewItem("User1");
            item1->SubItems->Add("user1@example.com");

            ListViewItem^ item2 = gcnew ListViewItem("User2");
            item2->SubItems->Add("user2@example.com");

            ListViewItem^ item3 = gcnew ListViewItem("User3");
            item3->SubItems->Add("user3@example.com");

            listView1->Items->Add(item1);
            listView1->Items->Add(item2);
            listView1->Items->Add(item3);


            // Handle ListView item click event
            //listView1->ItemClick += gcnew System::EventHandler(this, &ViewUserInfo::listView1_ItemClick);
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~ViewUserInfo()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ textBox1;
    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ListView^ listView1;
    private: System::Windows::Forms::ColumnHeader^ columnHeader1;
    private: System::Windows::Forms::ColumnHeader^ columnHeader2;
    private: System::Windows::Forms::Button^ VUInfo_btn;


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
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->listView1 = (gcnew System::Windows::Forms::ListView());
            this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
            this->VUInfo_btn = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox1->Location = System::Drawing::Point(153, 62);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(276, 23);
            this->textBox1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->label1->Location = System::Drawing::Point(23, 55);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(124, 29);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Username";
            // 
            // listView1
            // 
            this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
            this->listView1->HideSelection = false;
            this->listView1->Location = System::Drawing::Point(28, 111);
            this->listView1->Name = L"listView1";
            this->listView1->Size = System::Drawing::Size(401, 343);
            this->listView1->TabIndex = 2;
            this->listView1->UseCompatibleStateImageBehavior = false;
            this->listView1->View = System::Windows::Forms::View::Details;
            // 
            // columnHeader1
            // 
            this->columnHeader1->Text = L"Username";
            this->columnHeader1->Width = 150;
            // 
            // columnHeader2
            // 
            this->columnHeader2->Text = L"Email";
            this->columnHeader2->Width = 200;
            // 
            // VUInfo_btn
            // 
            this->VUInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->VUInfo_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->VUInfo_btn->Location = System::Drawing::Point(129, 488);
            this->VUInfo_btn->Name = L"VUInfo_btn";
            this->VUInfo_btn->Size = System::Drawing::Size(204, 56);
            this->VUInfo_btn->TabIndex = 3;
            this->VUInfo_btn->Text = L"View User Info";
            this->VUInfo_btn->UseVisualStyleBackColor = false;
            this->VUInfo_btn->Click += gcnew System::EventHandler(this, &ViewUserInfo::VUInfo_btn_Click);
            // 
            // ViewUserInfo
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(486, 572);
            this->Controls->Add(this->VUInfo_btn);
            this->Controls->Add(this->listView1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox1);
            this->Name = L"ViewUserInfo";
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->Text = L"ViewUserInfo";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void listView1_ItemClick(System::Object^ sender) {
        // Handle ListView item click event
        MessageBox::Show("You clicked on: " );
    }
    private: System::Void VUInfo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        CoachUserDashboard^ coachuserdash = gcnew CoachUserDashboard();
        this->Hide(); // Hide the current form
        coachuserdash->Show();
    }
};
}
