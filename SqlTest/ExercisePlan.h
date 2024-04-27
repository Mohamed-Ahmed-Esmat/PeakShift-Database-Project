#pragma once

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for ExercisePlan
    /// </summary>
    public ref class ExercisePlan : public System::Windows::Forms::Form
    {
    public:
        ExercisePlan(void)
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
        ~ExercisePlan()
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
            this->Cell_1 = (gcnew System::Windows::Forms::Panel());
            this->MG_1 = (gcnew System::Windows::Forms::Label());
            this->No_1 = (gcnew System::Windows::Forms::Label());
            this->Cell_1->SuspendLayout();
            this->SuspendLayout();
            // 
            // Cell_1
            // 
            this->Cell_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->Cell_1->Controls->Add(this->MG_1);
            this->Cell_1->Controls->Add(this->No_1);
            this->Cell_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cell_1->Location = System::Drawing::Point(12, 12);
            this->Cell_1->Name = L"Cell_1";
            this->Cell_1->Size = System::Drawing::Size(234, 250);
            this->Cell_1->TabIndex = 1;
            // 
            // MG_1
            // 
            this->MG_1->AutoSize = true;
            this->MG_1->Location = System::Drawing::Point(61, 150);
            this->MG_1->Name = L"MG_1";
            this->MG_1->Size = System::Drawing::Size(104, 64);
            this->MG_1->TabIndex = 1;
            this->MG_1->Text = L"Muscle\r\nGroup";
            // 
            // No_1
            // 
            this->No_1->AutoSize = true;
            this->No_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_1->Location = System::Drawing::Point(89, 65);
            this->No_1->Name = L"No_1";
            this->No_1->Size = System::Drawing::Size(30, 32);
            this->No_1->TabIndex = 0;
            this->No_1->Text = L"1";
            // 
            // ExercisePlan
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(1203, 844);
            this->Controls->Add(this->Cell_1);
            this->Name = L"ExercisePlan";
            this->Text = L"Exercise Plan";
            this->Cell_1->ResumeLayout(false);
            this->Cell_1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    };
}
