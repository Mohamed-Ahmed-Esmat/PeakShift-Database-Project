#pragma once

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for UpdateHealthAssessment
    /// </summary>
    public ref class UpdateHealthAssessment : public System::Windows::Forms::Form
    {
    public:
        UpdateHealthAssessment(void)
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
        ~UpdateHealthAssessment()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBoxAssessmentID;
    private: System::Windows::Forms::TextBox^ textBoxDate;
    private: System::Windows::Forms::TextBox^ textBoxHeight;
    private: System::Windows::Forms::TextBox^ textBoxWeight;
    private: System::Windows::Forms::TextBox^ textBoxBMI;
    private: System::Windows::Forms::TextBox^ textBoxBodyFatPercentage;
    private: System::Windows::Forms::TextBox^ textBoxBodyMusclePercentage;
    private: System::Windows::Forms::TextBox^ textBoxBMR;
    private: System::Windows::Forms::TextBox^ textBoxHealthConcerns;
    private: System::Windows::Forms::TextBox^ textBoxFitnessGoals;
    private: System::Windows::Forms::Button^ buttonSubmit;

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
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBoxAssessmentID = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
            this->textBoxHeight = (gcnew System::Windows::Forms::TextBox());
            this->textBoxWeight = (gcnew System::Windows::Forms::TextBox());
            this->textBoxBMI = (gcnew System::Windows::Forms::TextBox());
            this->textBoxBodyFatPercentage = (gcnew System::Windows::Forms::TextBox());
            this->textBoxBodyMusclePercentage = (gcnew System::Windows::Forms::TextBox());
            this->textBoxBMR = (gcnew System::Windows::Forms::TextBox());
            this->textBoxHealthConcerns = (gcnew System::Windows::Forms::TextBox());
            this->textBoxFitnessGoals = (gcnew System::Windows::Forms::TextBox());
            this->buttonSubmit = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 15);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(97, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"AssessmentID:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 45);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(39, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Date:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 75);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(49, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Height:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(12, 105);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(52, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Weight:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 135);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(33, 16);
            this->label5->TabIndex = 4;
            this->label5->Text = L"BMI:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(12, 165);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(137, 16);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Body Fat Percentage:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(12, 195);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(161, 16);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Body Muscle Percentage:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(12, 225);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(40, 16);
            this->label8->TabIndex = 7;
            this->label8->Text = L"BMR:";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(12, 255);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(109, 16);
            this->label9->TabIndex = 8;
            this->label9->Text = L"Health Concerns:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(12, 285);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(92, 16);
            this->label10->TabIndex = 9;
            this->label10->Text = L"Fitness Goals:";
            // 
            // textBoxAssessmentID
            // 
            this->textBoxAssessmentID->Location = System::Drawing::Point(168, 12);
            this->textBoxAssessmentID->Name = L"textBoxAssessmentID";
            this->textBoxAssessmentID->Size = System::Drawing::Size(180, 22);
            this->textBoxAssessmentID->TabIndex = 10;
            // 
            // textBoxDate
            // 
            this->textBoxDate->Location = System::Drawing::Point(168, 42);
            this->textBoxDate->Name = L"textBoxDate";
            this->textBoxDate->Size = System::Drawing::Size(180, 22);
            this->textBoxDate->TabIndex = 11;
            // 
            // textBoxHeight
            // 
            this->textBoxHeight->Location = System::Drawing::Point(168, 72);
            this->textBoxHeight->Name = L"textBoxHeight";
            this->textBoxHeight->Size = System::Drawing::Size(180, 22);
            this->textBoxHeight->TabIndex = 12;
            // 
            // textBoxWeight
            // 
            this->textBoxWeight->Location = System::Drawing::Point(168, 102);
            this->textBoxWeight->Name = L"textBoxWeight";
            this->textBoxWeight->Size = System::Drawing::Size(180, 22);
            this->textBoxWeight->TabIndex = 13;
            // 
            // textBoxBMI
            // 
            this->textBoxBMI->Location = System::Drawing::Point(168, 132);
            this->textBoxBMI->Name = L"textBoxBMI";
            this->textBoxBMI->Size = System::Drawing::Size(180, 22);
            this->textBoxBMI->TabIndex = 14;
            // 
            // textBoxBodyFatPercentage
            // 
            this->textBoxBodyFatPercentage->Location = System::Drawing::Point(168, 162);
            this->textBoxBodyFatPercentage->Name = L"textBoxBodyFatPercentage";
            this->textBoxBodyFatPercentage->Size = System::Drawing::Size(180, 22);
            this->textBoxBodyFatPercentage->TabIndex = 15;
            // 
            // textBoxBodyMusclePercentage
            // 
            this->textBoxBodyMusclePercentage->Location = System::Drawing::Point(168, 192);
            this->textBoxBodyMusclePercentage->Name = L"textBoxBodyMusclePercentage";
            this->textBoxBodyMusclePercentage->Size = System::Drawing::Size(180, 22);
            this->textBoxBodyMusclePercentage->TabIndex = 16;
            // 
            // textBoxBMR
            // 
            this->textBoxBMR->Location = System::Drawing::Point(168, 222);
            this->textBoxBMR->Name = L"textBoxBMR";
            this->textBoxBMR->Size = System::Drawing::Size(180, 22);
            this->textBoxBMR->TabIndex = 17;
            // 
            // textBoxHealthConcerns
            // 
            this->textBoxHealthConcerns->Location = System::Drawing::Point(168, 252);
            this->textBoxHealthConcerns->Name = L"textBoxHealthConcerns";
            this->textBoxHealthConcerns->Size = System::Drawing::Size(180, 22);
            this->textBoxHealthConcerns->TabIndex = 18;
            // 
            // textBoxFitnessGoals
            // 
            this->textBoxFitnessGoals->Location = System::Drawing::Point(168, 282);
            this->textBoxFitnessGoals->Name = L"textBoxFitnessGoals";
            this->textBoxFitnessGoals->Size = System::Drawing::Size(180, 22);
            this->textBoxFitnessGoals->TabIndex = 19;
            // 
            // buttonSubmit
            // 
            this->buttonSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->buttonSubmit->Location = System::Drawing::Point(115, 320);
            this->buttonSubmit->Name = L"buttonSubmit";
            this->buttonSubmit->Size = System::Drawing::Size(157, 63);
            this->buttonSubmit->TabIndex = 20;
            this->buttonSubmit->Text = L"Submit";
            this->buttonSubmit->UseVisualStyleBackColor = false;
            // 
            // UpdateHealthAssessment
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(403, 395);
            this->Controls->Add(this->buttonSubmit);
            this->Controls->Add(this->textBoxFitnessGoals);
            this->Controls->Add(this->textBoxHealthConcerns);
            this->Controls->Add(this->textBoxBMR);
            this->Controls->Add(this->textBoxBodyMusclePercentage);
            this->Controls->Add(this->textBoxBodyFatPercentage);
            this->Controls->Add(this->textBoxBMI);
            this->Controls->Add(this->textBoxWeight);
            this->Controls->Add(this->textBoxHeight);
            this->Controls->Add(this->textBoxDate);
            this->Controls->Add(this->textBoxAssessmentID);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"UpdateHealthAssessment";
            this->Text = L"UpdateHealthAssessment";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    };
}
