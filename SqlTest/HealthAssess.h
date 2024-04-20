#pragma once

#include <string>
#include <vector>

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for HealthAssess
    /// </summary>
    public ref class HealthAssess : public System::Windows::Forms::Form
    {
    public:
        HealthAssess(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            AddAttributeLabels();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~HealthAssess()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;

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
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->panel1->Controls->Add(this->label1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(762, 447);
            this->panel1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Bodoni MT Condensed", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(265, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(219, 40);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Health Assessment";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
                static_cast<System::Int32>(static_cast<System::Byte>(99)));
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->button1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 447);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(762, 117);
            this->panel2->TabIndex = 1;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(469, 23);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(224, 40);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Old Assessment";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(58, 23);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(224, 40);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Retake Assessment";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // HealthAssess
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(762, 564);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Name = L"HealthAssess";
            this->Text = L"HealthAssess";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        void AddAttributeLabels() {
            // Add labels for attributes
            std::vector<std::string> attributeLabels = {
                "AssessmentID:",
                "Date:",
                "Height:",
                "Weight:",
                "BMI (Body Mass Index):",
                "BodyFatPercentage:",
                "BodyMusclePercentage:",
                "BMR (Base Metabolic Rate):",
                "HealthConcerns:",
                "FitnessGoals:"
            };

            int yPos = 60; // Starting Y position for labels
            const int labelSpacing = 30; // Vertical spacing between labels

            for (int i = 0; i < attributeLabels.size(); ++i)
            {
                Label^ attributeLabel = gcnew Label();
                attributeLabel->AutoSize = true;
                attributeLabel->Location = System::Drawing::Point(20, yPos);
                attributeLabel->Text = gcnew String(attributeLabels[i].c_str());
                panel1->Controls->Add(attributeLabel);
                yPos += labelSpacing;
            }
        }
    };
}
