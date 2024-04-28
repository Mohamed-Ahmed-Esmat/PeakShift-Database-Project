#pragma once
#include "EditWorkout.h"

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for EditExercisePlan
    /// </summary>
    public ref class EditExercisePlan : public System::Windows::Forms::Form
    {
    public:
        EditExercisePlan(void)
        {
            InitializeComponent();
            pictureBox1->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox2->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox3->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox4->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox5->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox6->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);
            pictureBox7->Click += gcnew System::EventHandler(this, &EditExercisePlan::pictureBox_Click);

            Cell_1->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel2->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel16->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel12->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel24->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel32->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);
            panel20->Click += gcnew System::EventHandler(this, &EditExercisePlan::panel_Click);

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~EditExercisePlan()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:







    private: System::Windows::Forms::Panel^ Cell_1;

    private: System::Windows::Forms::Label^ No_1;
    private: System::Windows::Forms::Label^ MG_1;
    private: System::Windows::Forms::Label^ No_3;
    private: System::Windows::Forms::Label^ MG_3;
    private: System::Windows::Forms::Panel^ panel16;
    private: System::Windows::Forms::Label^ No_2;
    private: System::Windows::Forms::Label^ MG_2;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ No_4;
    private: System::Windows::Forms::Label^ MG_4;
    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Label^ No_5;
    private: System::Windows::Forms::Label^ MG_5;
    private: System::Windows::Forms::Panel^ panel24;
    private: System::Windows::Forms::Label^ No_7;
    private: System::Windows::Forms::Label^ MG_7;
    private: System::Windows::Forms::Panel^ panel32;
    private: System::Windows::Forms::Label^ No_6;
    private: System::Windows::Forms::Label^ MG_6;
    private: System::Windows::Forms::Panel^ panel20;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox6;










































































































































































































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditExercisePlan::typeid));
            this->Cell_1 = (gcnew System::Windows::Forms::Panel());
            this->MG_1 = (gcnew System::Windows::Forms::Label());
            this->No_1 = (gcnew System::Windows::Forms::Label());
            this->No_3 = (gcnew System::Windows::Forms::Label());
            this->MG_3 = (gcnew System::Windows::Forms::Label());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->No_2 = (gcnew System::Windows::Forms::Label());
            this->MG_2 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->No_4 = (gcnew System::Windows::Forms::Label());
            this->MG_4 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->No_5 = (gcnew System::Windows::Forms::Label());
            this->MG_5 = (gcnew System::Windows::Forms::Label());
            this->panel24 = (gcnew System::Windows::Forms::Panel());
            this->No_7 = (gcnew System::Windows::Forms::Label());
            this->MG_7 = (gcnew System::Windows::Forms::Label());
            this->panel32 = (gcnew System::Windows::Forms::Panel());
            this->No_6 = (gcnew System::Windows::Forms::Label());
            this->MG_6 = (gcnew System::Windows::Forms::Label());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->Cell_1->SuspendLayout();
            this->panel16->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel12->SuspendLayout();
            this->panel24->SuspendLayout();
            this->panel32->SuspendLayout();
            this->panel20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->SuspendLayout();
            // 
            // Cell_1
            // 
            this->Cell_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->Cell_1->Controls->Add(this->pictureBox1);
            this->Cell_1->Controls->Add(this->MG_1);
            this->Cell_1->Controls->Add(this->No_1);
            this->Cell_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cell_1->Location = System::Drawing::Point(12, 12);
            this->Cell_1->Name = L"Cell_1";
            this->Cell_1->Size = System::Drawing::Size(142, 180);
            this->Cell_1->TabIndex = 1;
            // 
            // MG_1
            // 
            this->MG_1->AutoSize = true;
            this->MG_1->Location = System::Drawing::Point(17, 90);
            this->MG_1->Name = L"MG_1";
            this->MG_1->Size = System::Drawing::Size(90, 58);
            this->MG_1->TabIndex = 1;
            this->MG_1->Text = L"Muscle\r\nGroup";
            // 
            // No_1
            // 
            this->No_1->AutoSize = true;
            this->No_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_1->Location = System::Drawing::Point(52, 26);
            this->No_1->Name = L"No_1";
            this->No_1->Size = System::Drawing::Size(26, 29);
            this->No_1->TabIndex = 0;
            this->No_1->Text = L"1";
            // 
            // No_3
            // 
            this->No_3->AutoSize = true;
            this->No_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_3->Location = System::Drawing::Point(52, 26);
            this->No_3->Name = L"No_3";
            this->No_3->Size = System::Drawing::Size(26, 29);
            this->No_3->TabIndex = 0;
            this->No_3->Text = L"3";
            // 
            // MG_3
            // 
            this->MG_3->AutoSize = true;
            this->MG_3->Location = System::Drawing::Point(17, 90);
            this->MG_3->Name = L"MG_3";
            this->MG_3->Size = System::Drawing::Size(90, 58);
            this->MG_3->TabIndex = 1;
            this->MG_3->Text = L"Muscle\r\nGroup";
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel16->Controls->Add(this->pictureBox3);
            this->panel16->Controls->Add(this->MG_3);
            this->panel16->Controls->Add(this->No_3);
            this->panel16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel16->Location = System::Drawing::Point(308, 12);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(142, 180);
            this->panel16->TabIndex = 9;
            // 
            // No_2
            // 
            this->No_2->AutoSize = true;
            this->No_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_2->Location = System::Drawing::Point(52, 26);
            this->No_2->Name = L"No_2";
            this->No_2->Size = System::Drawing::Size(26, 29);
            this->No_2->TabIndex = 0;
            this->No_2->Text = L"2";
            // 
            // MG_2
            // 
            this->MG_2->AutoSize = true;
            this->MG_2->Location = System::Drawing::Point(17, 90);
            this->MG_2->Name = L"MG_2";
            this->MG_2->Size = System::Drawing::Size(90, 58);
            this->MG_2->TabIndex = 1;
            this->MG_2->Text = L"Muscle\r\nGroup";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->MG_2);
            this->panel2->Controls->Add(this->No_2);
            this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel2->Location = System::Drawing::Point(160, 12);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(142, 180);
            this->panel2->TabIndex = 2;
            // 
            // No_4
            // 
            this->No_4->AutoSize = true;
            this->No_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_4->Location = System::Drawing::Point(52, 26);
            this->No_4->Name = L"No_4";
            this->No_4->Size = System::Drawing::Size(26, 29);
            this->No_4->TabIndex = 0;
            this->No_4->Text = L"4";
            // 
            // MG_4
            // 
            this->MG_4->AutoSize = true;
            this->MG_4->Location = System::Drawing::Point(17, 90);
            this->MG_4->Name = L"MG_4";
            this->MG_4->Size = System::Drawing::Size(90, 58);
            this->MG_4->TabIndex = 1;
            this->MG_4->Text = L"Muscle\r\nGroup";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel12->Controls->Add(this->pictureBox4);
            this->panel12->Controls->Add(this->MG_4);
            this->panel12->Controls->Add(this->No_4);
            this->panel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel12->Location = System::Drawing::Point(456, 12);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(142, 180);
            this->panel12->TabIndex = 10;
            // 
            // No_5
            // 
            this->No_5->AutoSize = true;
            this->No_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_5->Location = System::Drawing::Point(52, 26);
            this->No_5->Name = L"No_5";
            this->No_5->Size = System::Drawing::Size(26, 29);
            this->No_5->TabIndex = 0;
            this->No_5->Text = L"5";
            // 
            // MG_5
            // 
            this->MG_5->AutoSize = true;
            this->MG_5->Location = System::Drawing::Point(17, 90);
            this->MG_5->Name = L"MG_5";
            this->MG_5->Size = System::Drawing::Size(90, 58);
            this->MG_5->TabIndex = 1;
            this->MG_5->Text = L"Muscle\r\nGroup";
            // 
            // panel24
            // 
            this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel24->Controls->Add(this->pictureBox5);
            this->panel24->Controls->Add(this->MG_5);
            this->panel24->Controls->Add(this->No_5);
            this->panel24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel24->Location = System::Drawing::Point(604, 12);
            this->panel24->Name = L"panel24";
            this->panel24->Size = System::Drawing::Size(142, 180);
            this->panel24->TabIndex = 9;
            // 
            // No_7
            // 
            this->No_7->AutoSize = true;
            this->No_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_7->Location = System::Drawing::Point(52, 26);
            this->No_7->Name = L"No_7";
            this->No_7->Size = System::Drawing::Size(26, 29);
            this->No_7->TabIndex = 0;
            this->No_7->Text = L"7";
            // 
            // MG_7
            // 
            this->MG_7->AutoSize = true;
            this->MG_7->Location = System::Drawing::Point(17, 90);
            this->MG_7->Name = L"MG_7";
            this->MG_7->Size = System::Drawing::Size(90, 58);
            this->MG_7->TabIndex = 1;
            this->MG_7->Text = L"Muscle\r\nGroup";
            // 
            // panel32
            // 
            this->panel32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel32->Controls->Add(this->pictureBox7);
            this->panel32->Controls->Add(this->MG_7);
            this->panel32->Controls->Add(this->No_7);
            this->panel32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel32->Location = System::Drawing::Point(900, 12);
            this->panel32->Name = L"panel32";
            this->panel32->Size = System::Drawing::Size(142, 180);
            this->panel32->TabIndex = 17;
            // 
            // No_6
            // 
            this->No_6->AutoSize = true;
            this->No_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_6->Location = System::Drawing::Point(52, 26);
            this->No_6->Name = L"No_6";
            this->No_6->Size = System::Drawing::Size(26, 29);
            this->No_6->TabIndex = 0;
            this->No_6->Text = L"6";
            // 
            // MG_6
            // 
            this->MG_6->AutoSize = true;
            this->MG_6->Location = System::Drawing::Point(17, 90);
            this->MG_6->Name = L"MG_6";
            this->MG_6->Size = System::Drawing::Size(90, 58);
            this->MG_6->TabIndex = 1;
            this->MG_6->Text = L"Muscle\r\nGroup";
            // 
            // panel20
            // 
            this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel20->Controls->Add(this->pictureBox6);
            this->panel20->Controls->Add(this->MG_6);
            this->panel20->Controls->Add(this->No_6);
            this->panel20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel20->Location = System::Drawing::Point(752, 12);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(142, 180);
            this->panel20->TabIndex = 10;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
            this->pictureBox1->Location = System::Drawing::Point(104, 3);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(38, 35);
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
            this->pictureBox2->Location = System::Drawing::Point(101, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(38, 35);
            this->pictureBox2->TabIndex = 2;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
            this->pictureBox3->Location = System::Drawing::Point(101, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(38, 35);
            this->pictureBox3->TabIndex = 2;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
            this->pictureBox4->Location = System::Drawing::Point(101, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(38, 35);
            this->pictureBox4->TabIndex = 2;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
            this->pictureBox5->Location = System::Drawing::Point(104, 0);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(38, 35);
            this->pictureBox5->TabIndex = 2;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
            this->pictureBox6->Location = System::Drawing::Point(104, 0);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(38, 35);
            this->pictureBox6->TabIndex = 2;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
            this->pictureBox7->Location = System::Drawing::Point(101, 0);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(38, 35);
            this->pictureBox7->TabIndex = 2;
            this->pictureBox7->TabStop = false;
            // 
            // EditExercisePlan
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(1059, 205);
            this->Controls->Add(this->panel20);
            this->Controls->Add(this->panel32);
            this->Controls->Add(this->panel24);
            this->Controls->Add(this->panel12);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel16);
            this->Controls->Add(this->Cell_1);
            this->Name = L"EditExercisePlan";
            this->Text = L"Exercise Plan";
            this->Cell_1->ResumeLayout(false);
            this->Cell_1->PerformLayout();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->panel24->ResumeLayout(false);
            this->panel24->PerformLayout();
            this->panel32->ResumeLayout(false);
            this->panel32->PerformLayout();
            this->panel20->ResumeLayout(false);
            this->panel20->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

         private:
             System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e)
             {
                 // Cast sender to PictureBox
                 PictureBox^ pictureBox = dynamic_cast<PictureBox^>(sender);

                 // Create a TextBox control
                 TextBox^ textBox = gcnew TextBox();
                 textBox->Location = Point(pictureBox->Location.X + pictureBox->Width + 5, pictureBox->Location.Y);
                 textBox->Size = System::Drawing::Size(100, 20);
                 textBox->Tag = pictureBox->Name; // Store the PictureBox name as Tag

                 // Add TextBox to the form and bring it to the front
                 this->Controls->Add(textBox);
                 textBox->BringToFront();
                 textBox->Focus();

                 // Create a Confirm Button
                 Button^ confirmButton = gcnew Button();
                 confirmButton->Text = "Confirm";
                 confirmButton->Location = Point(textBox->Location.X + textBox->Width + 5, textBox->Location.Y);
                 confirmButton->Click += gcnew EventHandler(this, &EditExercisePlan::confirmButton_Click);
                 confirmButton->Tag = textBox; // Store the TextBox as Tag

                 // Add Confirm Button to the form and bring it to the front
                 this->Controls->Add(confirmButton);
                 confirmButton->BringToFront();
             }


             System::Void confirmButton_Click(System::Object^ sender, System::EventArgs^ e)
             {
                 // Cast sender to Button
                 Button^ confirmButton = dynamic_cast<Button^>(sender);
                 // Retrieve the TextBox from the Tag
                 TextBox^ textBox = dynamic_cast<TextBox^>(confirmButton->Tag);
                 String^ pictureBoxName = dynamic_cast<String^>(textBox->Tag);

                 String^ plan_number = pictureBoxName->Substring(10);

                 // Find the corresponding label based on PictureBox name
                 Label^ exercise_name = dynamic_cast<Label^>(this->Controls->Find("MG_" + plan_number, true)[0]);

                 // Update label text
                 exercise_name->Text = textBox->Text;

                 // Remove TextBox and Confirm Button from the form
                 this->Controls->Remove(textBox);
                 this->Controls->Remove(confirmButton);

                 // Optionally, display a message box to confirm the edit
                 MessageBox::Show("Exercise name updated to: " + textBox->Text);
             }

             System::Void textBox_LostFocus(System::Object^ sender, EventArgs^ e)
             {
                 // Remove TextBox from the form when it loses focus
                 TextBox^ textBox = dynamic_cast<TextBox^>(sender);
                 // Find the Confirm Button associated with this TextBox
                 for each (Control ^ control in this->Controls)
                 {
                     if (control->GetType() == Button::typeid)
                     {
                         Button^ button = dynamic_cast<Button^>(control);
                         if (button->Tag == textBox)
                         {
                             // Remove the Confirm Button as well
                             this->Controls->Remove(button);
                             break;
                         }
                     }
                 }
                 this->Controls->Remove(textBox);
             }
             System::Void panel_Click(System::Object^ sender, System::EventArgs^ e)
             {
                 // Open the Workouts page
                 EditWorkout^ editWorkout = gcnew EditWorkout();
                 editWorkout->Show();
             }

    
};
}
