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
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

    protected:

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->label1->Location = System::Drawing::Point(147, 71);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(73, 29);
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
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->button1->Location = System::Drawing::Point(106, 239);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(157, 63);
            this->button1->TabIndex = 3;
            this->button1->Text = L"Submit";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 126);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(73, 16);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Username:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 174);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(70, 16);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Password:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(12, 9);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(332, 37);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Welcome to PeakShift";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(403, 387);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
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
            String^ query = "SELECT * FROM [User] WHERE Username=@login and Password=@password";
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
