#pragma once

#include <string>
#include <vector>
#include "UpdateHealthAssessment.h"
#include "modularValues.h"

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for HealthAssess
    /// </summary>
    public ref class HealthAssess : public System::Windows::Forms::Form
    {
    public:
        String^ UserID;
        HealthAssess(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
           // AddAttributeLabels();
        }
        HealthAssess(String^ UserID)
        {
            this->UserID = UserID;
            InitializeComponent();

            Modules modules;
            String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
            SqlConnection^ con = gcnew SqlConnection(connectionString);
            con->Open();

            SqlCommand^ cmd = gcnew SqlCommand("SELECT dbo.GetUserHealthByID(@UserID, 'AssessmentID') AS AssessmentID, dbo.GetUserHealthByID(@UserID, 'Date') AS Date, dbo.GetUserHealthByID(@UserID, 'Height') AS Height, dbo.GetUserHealthByID(@UserID, 'Weight') AS Weight, dbo.GetUserHealthByID(@UserID, 'BMI') AS BMI, dbo.GetUserHealthByID(@UserID, 'BFP') AS BodyFatPercentage, dbo.GetUserHealthByID(@UserID, 'BMP') AS BodyMusclePercentage, dbo.GetUserHealthByID(@UserID, 'BMR') AS BMR, dbo.GetUserHealthByID(@UserID, 'HealthConcerns') AS HealthConcerns, dbo.GetUserHealthByID(@UserID, 'FitnessGoals') AS FitnessGoals", con);
            cmd->Parameters->AddWithValue("@UserID", UserID);
            SqlDataReader^ reader = cmd->ExecuteReader();

            // Add labels for each attribute
            Label^ assessmentIDLabel = gcnew Label();
            assessmentIDLabel->AutoSize = true;
            assessmentIDLabel->Location = System::Drawing::Point(20, 60);
            assessmentIDLabel->Text = "AssessmentID:";
            panel1->Controls->Add(assessmentIDLabel);

            Label^ dateLabel = gcnew Label();
            dateLabel->AutoSize = true;
            dateLabel->Location = System::Drawing::Point(20, 90);
            dateLabel->Text = "Date:";
            panel1->Controls->Add(dateLabel);

            Label^ heightLabel = gcnew Label();
            heightLabel->AutoSize = true;
            heightLabel->Location = System::Drawing::Point(20, 120);
            heightLabel->Text = "Height:";
            panel1->Controls->Add(heightLabel);

            Label^ weightLabel = gcnew Label();
            weightLabel->AutoSize = true;
            weightLabel->Location = System::Drawing::Point(20, 150);
            weightLabel->Text = "Weight:";
            panel1->Controls->Add(weightLabel);

            Label^ BMILabel = gcnew Label();
            BMILabel->AutoSize = true;
            BMILabel->Location = System::Drawing::Point(20, 180);
            BMILabel->Text = "BMI (Body Mass Index):";
            panel1->Controls->Add(BMILabel);

            Label^ bodyFatLabel = gcnew Label();
            bodyFatLabel->AutoSize = true;
            bodyFatLabel->Location = System::Drawing::Point(20, 210);
            bodyFatLabel->Text = "BodyFatPercentage:";
            panel1->Controls->Add(bodyFatLabel);

            Label^ bodyMuscleLabel = gcnew Label();
            bodyMuscleLabel->AutoSize = true;
            bodyMuscleLabel->Location = System::Drawing::Point(20, 240);
            bodyMuscleLabel->Text = "BodyMusclePercentage:";
            panel1->Controls->Add(bodyMuscleLabel);

            Label^ BMRLabel = gcnew Label();
            BMRLabel->AutoSize = true;
            BMRLabel->Location = System::Drawing::Point(20, 270);
            BMRLabel->Text = "BMR (Base Metabolic Rate):";
            panel1->Controls->Add(BMRLabel);

            Label^ healthConcernsLabel = gcnew Label();
            healthConcernsLabel->AutoSize = true;
            healthConcernsLabel->Location = System::Drawing::Point(20, 300);
            healthConcernsLabel->Text = "HealthConcerns:";
            panel1->Controls->Add(healthConcernsLabel);

            Label^ fitnessGoalsLabel = gcnew Label();
            fitnessGoalsLabel->AutoSize = true;
            fitnessGoalsLabel->Location = System::Drawing::Point(20, 330);
            fitnessGoalsLabel->Text = "FitnessGoals:";
            panel1->Controls->Add(fitnessGoalsLabel);
            if (reader->Read()) {
                // Assign fetched data to labels
                assessmentIDLabel->Text = "AssessmentID: " + reader["AssessmentID"]->ToString();
                dateLabel->Text = "Date: " + reader["Date"]->ToString();
                heightLabel->Text = "Height: " + reader["Height"]->ToString();
                weightLabel->Text = "Weight: " + reader["Weight"]->ToString();
                BMILabel->Text = "BMI (Body Mass Index): " + reader["BMI"]->ToString();
                bodyFatLabel->Text = "BodyFatPercentage: " + reader["BodyFatPercentage"]->ToString();
                bodyMuscleLabel->Text = "BodyMusclePercentage: " + reader["BodyMusclePercentage"]->ToString();
                BMRLabel->Text = "BMR (Base Metabolic Rate): " + reader["BMR"]->ToString();
                healthConcernsLabel->Text = "HealthConcerns: " + reader["HealthConcerns"]->ToString();
                fitnessGoalsLabel->Text = "FitnessGoals: " + reader["FitnessGoals"]->ToString();
            }

            // Close the reader and connection
            reader->Close();
            con->Close();
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
            this->panel2->Controls->Add(this->button1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 447);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(762, 117);
            this->panel2->TabIndex = 1;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(252, 18);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(255, 78);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Update Assessment";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &HealthAssess::button1_Click);
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
       /* void AddAttributeLabels() {
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
        } */
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        UpdateHealthAssessment^ updateHealthAssessment = gcnew UpdateHealthAssessment(UserID);
        this->Hide();
        updateHealthAssessment->ShowDialog();
        this->Show();
    } 
};
}
