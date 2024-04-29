#pragma once
#include "HealthAssess.h"
#include "EditWorkout.h"
#include "ExercisePlan.h"
#include "DailyMetric.h"
#include "NutritionPlan.h"
#include "EditNutritionPlan.h"
#include "EditExercisePlan.h"
#include "modularValues.h"

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for CoachUserDashboard
    /// </summary>
    public ref class CoachUserDashboard : public System::Windows::Forms::Form
    {
    public:
        String^ UserID;
        String^ CoachID;
        CoachUserDashboard(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        CoachUserDashboard(String^ Username)
        {
            InitializeComponent();

            Modules modules;
            String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
            SqlConnection^ con = gcnew SqlConnection(connectionString);
            con->Open();

            SqlCommand^ cmd = gcnew SqlCommand("SELECT dbo.GetUserAttributeByUsername(@Username, 'UserID') AS UserID, dbo.GetUserAttributeByUsername(@Username, 'Gender') AS Gender, dbo.GetUserAttributeByUsername(@Username, 'Age') AS Age, dbo.GetUserAttributeByUsername(@Username, 'Email') AS Email, dbo.GetUserAttributeByUsername(@Username, 'Active') AS Active, dbo.GetUserAttributeByUsername(@Username, 'Frozen') AS Frozen, dbo.GetUserAttributeByUsername(@Username, 'ForzenLength') AS FrozenLength", con);
            cmd->Parameters->AddWithValue("@Username", Username);

            SqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read())
            {
                String^ UserID = safe_cast<String^>(reader["UserID"]);
                String^ Gender = safe_cast<String^>(reader["Gender"]);
                String^ Age = safe_cast<String^>(reader["Age"]);
                String^ Email = safe_cast<String^>(reader["Email"]);
                String^ Active = safe_cast<String^>(reader["Active"]);
                String^ Frozen = safe_cast<String^>(reader["Frozen"]);
                String^ FrozenLength = safe_cast<String^>(reader["FrozenLength"]);

                this->UserID = UserID;

                // Assign values to labels
                labelUserID->Text = "User ID: " + UserID;
                labelUsername->Text = "Username: " + Username;
                labelGender->Text = "Gender: " + Gender;
                labelAge->Text = "Age: " + Age;
                labelEmail->Text = "Email: " + Email;
                labelActive->Text = "Active: " + (Active = 0? "NO" : "Yes");
                labelFrozen->Text = "Frozen: " + (Frozen = 0 ? "NO" : "Yes");
                labelFreezeLength->Text = "Freeze Length: " + FrozenLength;
            }

            reader->Close();
            con->Close();

            
        }






    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ labelUserID;
    private: System::Windows::Forms::Label^ labelUsername;
    private: System::Windows::Forms::Label^ labelAge;
    private: System::Windows::Forms::Label^ labelGender;
    private: System::Windows::Forms::Label^ labelEmail;
    private: System::Windows::Forms::Label^ labelActive;
    private: System::Windows::Forms::Label^ labelFrozen;
    private: System::Windows::Forms::Label^ labelFreezeLength;

    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ exercise_btn;
    private: System::Windows::Forms::Button^ daily_btn;
    private: System::Windows::Forms::Button^ work_btn;
    private: System::Windows::Forms::Button^ Nutririon_btn;
    private: System::Windows::Forms::Button^ editExercise_btn;
    private: System::Windows::Forms::Button^ health_btn;

    private: System::Windows::Forms::Button^ editNutrition_btn;

#pragma region Windows Form Designer generated code
           /// <summary>
           /// Required method for Designer support - do not modify
           /// the contents of this method with the code editor.
           /// </summary>
           void InitializeComponent(void)
           {
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->labelFreezeLength = (gcnew System::Windows::Forms::Label());
               this->labelFrozen = (gcnew System::Windows::Forms::Label());
               this->labelActive = (gcnew System::Windows::Forms::Label());
               this->labelEmail = (gcnew System::Windows::Forms::Label());
               this->labelGender = (gcnew System::Windows::Forms::Label());
               this->labelAge = (gcnew System::Windows::Forms::Label());
               this->labelUsername = (gcnew System::Windows::Forms::Label());
               this->labelUserID = (gcnew System::Windows::Forms::Label());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               this->editNutrition_btn = (gcnew System::Windows::Forms::Button());
               this->editExercise_btn = (gcnew System::Windows::Forms::Button());
               this->Nutririon_btn = (gcnew System::Windows::Forms::Button());
               this->health_btn = (gcnew System::Windows::Forms::Button());
               this->work_btn = (gcnew System::Windows::Forms::Button());
               this->daily_btn = (gcnew System::Windows::Forms::Button());
               this->exercise_btn = (gcnew System::Windows::Forms::Button());
               this->panel1->SuspendLayout();
               this->panel2->SuspendLayout();
               this->SuspendLayout();
               // 
               // panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
                   static_cast<System::Int32>(static_cast<System::Byte>(99)));
               this->panel1->Controls->Add(this->labelFreezeLength);
               this->panel1->Controls->Add(this->labelFrozen);
               this->panel1->Controls->Add(this->labelActive);
               this->panel1->Controls->Add(this->labelEmail);
               this->panel1->Controls->Add(this->labelGender);
               this->panel1->Controls->Add(this->labelAge);
               this->panel1->Controls->Add(this->labelUsername);
               this->panel1->Controls->Add(this->labelUserID);
               this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
               this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->panel1->Location = System::Drawing::Point(0, 0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(932, 335);
               this->panel1->TabIndex = 0;
               // 
               // labelFreezeLength
               // 
               this->labelFreezeLength->AutoSize = true;
               this->labelFreezeLength->Location = System::Drawing::Point(29, 226);
               this->labelFreezeLength->Name = L"labelFreezeLength";
               this->labelFreezeLength->Size = System::Drawing::Size(181, 30);
               this->labelFreezeLength->TabIndex = 7;
               this->labelFreezeLength->Text = L"Freeze Length: ";
               // 
               // labelFrozen
               // 
               this->labelFrozen->AutoSize = true;
               this->labelFrozen->Location = System::Drawing::Point(29, 196);
               this->labelFrozen->Name = L"labelFrozen";
               this->labelFrozen->Size = System::Drawing::Size(100, 30);
               this->labelFrozen->TabIndex = 6;
               this->labelFrozen->Text = L"Frozen: ";
               // 
               // labelActive
               // 
               this->labelActive->AutoSize = true;
               this->labelActive->Location = System::Drawing::Point(29, 166);
               this->labelActive->Name = L"labelActive";
               this->labelActive->Size = System::Drawing::Size(94, 30);
               this->labelActive->TabIndex = 5;
               this->labelActive->Text = L"Active: ";
               // 
               // labelEmail
               // 
               this->labelEmail->AutoSize = true;
               this->labelEmail->Location = System::Drawing::Point(29, 136);
               this->labelEmail->Name = L"labelEmail";
               this->labelEmail->Size = System::Drawing::Size(86, 30);
               this->labelEmail->TabIndex = 4;
               this->labelEmail->Text = L"Email: ";
               // 
               // labelGender
               // 
               this->labelGender->AutoSize = true;
               this->labelGender->Location = System::Drawing::Point(29, 106);
               this->labelGender->Name = L"labelGender";
               this->labelGender->Size = System::Drawing::Size(107, 30);
               this->labelGender->TabIndex = 3;
               this->labelGender->Text = L"Gender: ";
               // 
               // labelAge
               // 
               this->labelAge->AutoSize = true;
               this->labelAge->Location = System::Drawing::Point(29, 76);
               this->labelAge->Name = L"labelAge";
               this->labelAge->Size = System::Drawing::Size(70, 30);
               this->labelAge->TabIndex = 2;
               this->labelAge->Text = L"Age: ";
               // 
               // labelUsername
               // 
               this->labelUsername->AutoSize = true;
               this->labelUsername->Location = System::Drawing::Point(29, 46);
               this->labelUsername->Name = L"labelUsername";
               this->labelUsername->Size = System::Drawing::Size(138, 30);
               this->labelUsername->TabIndex = 1;
               this->labelUsername->Text = L"Username: ";
               // 
               // labelUserID
               // 
               this->labelUserID->AutoSize = true;
               this->labelUserID->Location = System::Drawing::Point(29, 16);
               this->labelUserID->Name = L"labelUserID";
               this->labelUserID->Size = System::Drawing::Size(108, 30);
               this->labelUserID->TabIndex = 0;
               this->labelUserID->Text = L"User ID: ";
               // 
               // panel2
               // 
               this->panel2->Controls->Add(this->editNutrition_btn);
               this->panel2->Controls->Add(this->editExercise_btn);
               this->panel2->Controls->Add(this->Nutririon_btn);
               this->panel2->Controls->Add(this->health_btn);
               this->panel2->Controls->Add(this->work_btn);
               this->panel2->Controls->Add(this->daily_btn);
               this->panel2->Controls->Add(this->exercise_btn);
               this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
               this->panel2->Location = System::Drawing::Point(0, 335);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(932, 329);
               this->panel2->TabIndex = 1;
               // 
               // editNutrition_btn
               // 
               this->editNutrition_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->editNutrition_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->editNutrition_btn->Location = System::Drawing::Point(627, 179);
               this->editNutrition_btn->Name = L"editNutrition_btn";
               this->editNutrition_btn->Size = System::Drawing::Size(185, 122);
               this->editNutrition_btn->TabIndex = 1;
               this->editNutrition_btn->Text = L"Edit Nutrition Plan";
               this->editNutrition_btn->UseVisualStyleBackColor = false;
               this->editNutrition_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::editNutrition_btn_Click);
               // 
               // editExercise_btn
               // 
               this->editExercise_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->editExercise_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->editExercise_btn->Location = System::Drawing::Point(377, 179);
               this->editExercise_btn->Name = L"editExercise_btn";
               this->editExercise_btn->Size = System::Drawing::Size(185, 122);
               this->editExercise_btn->TabIndex = 1;
               this->editExercise_btn->Text = L"Edit Excerise Plan";
               this->editExercise_btn->UseVisualStyleBackColor = false;
               this->editExercise_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::editExercise_btn_Click);
               // 
               // Nutririon_btn
               // 
               this->Nutririon_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                   static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->Nutririon_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->Nutririon_btn->Location = System::Drawing::Point(135, 179);
               this->Nutririon_btn->Name = L"Nutririon_btn";
               this->Nutririon_btn->Size = System::Drawing::Size(185, 122);
               this->Nutririon_btn->TabIndex = 1;
               this->Nutririon_btn->Text = L"Nutrition Plan";
               this->Nutririon_btn->UseVisualStyleBackColor = false;
               this->Nutririon_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::Nutririon_btn_Click);
               // 
               // health_btn
               // 
               this->health_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                   static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->health_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->health_btn->Location = System::Drawing::Point(32, 16);
               this->health_btn->Name = L"health_btn";
               this->health_btn->Size = System::Drawing::Size(185, 122);
               this->health_btn->TabIndex = 1;
               this->health_btn->Text = L"Health Assessment";
               this->health_btn->UseVisualStyleBackColor = false;
               this->health_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::health_btn_click);
               // 
               // work_btn
               // 
               this->work_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                   static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->work_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->work_btn->Location = System::Drawing::Point(250, 16);
               this->work_btn->Name = L"work_btn";
               this->work_btn->Size = System::Drawing::Size(185, 122);
               this->work_btn->TabIndex = 1;
               this->work_btn->Text = L"Edit Workouts";
               this->work_btn->UseVisualStyleBackColor = false;
               this->work_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::work_btn_Click);
               // 
               // daily_btn
               // 
               this->daily_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                   static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->daily_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->daily_btn->Location = System::Drawing::Point(708, 16);
               this->daily_btn->Name = L"daily_btn";
               this->daily_btn->Size = System::Drawing::Size(185, 122);
               this->daily_btn->TabIndex = 1;
               this->daily_btn->Text = L"Daily Metric";
               this->daily_btn->UseVisualStyleBackColor = false;
               this->daily_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::daily_btn_Click);
               // 
               // exercise_btn
               // 
               this->exercise_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                   static_cast<System::Int32>(static_cast<System::Byte>(169)));
               this->exercise_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
               this->exercise_btn->Location = System::Drawing::Point(478, 16);
               this->exercise_btn->Name = L"exercise_btn";
               this->exercise_btn->Size = System::Drawing::Size(185, 122);
               this->exercise_btn->TabIndex = 1;
               this->exercise_btn->Text = L"Exercise Plan";
               this->exercise_btn->UseVisualStyleBackColor = false;
               this->exercise_btn->Click += gcnew System::EventHandler(this, &CoachUserDashboard::exercise_btn_Click);
               // 
               // CoachUserDashboard
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                   static_cast<System::Int32>(static_cast<System::Byte>(248)));
               this->ClientSize = System::Drawing::Size(932, 664);
               this->Controls->Add(this->panel2);
               this->Controls->Add(this->panel1);
               this->Name = L"CoachUserDashboard";
               this->Text = L"CoachUserDashboard";
               this->panel1->ResumeLayout(false);
               this->panel1->PerformLayout();
               this->panel2->ResumeLayout(false);
               this->ResumeLayout(false);

           }
#pragma endregion
    private: System::Void health_btn_click(System::Object^ sender, System::EventArgs^ e) {
        HealthAssess^ healthAssessForm = gcnew HealthAssess(UserID);
        this->Hide();
        healthAssessForm->ShowDialog();
        this->Show();
    }
    private: System::Void work_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        EditWorkout^ workouts = gcnew EditWorkout;
        this->Hide();
        workouts->ShowDialog();
        this->Show();
    }
    private: System::Void exercise_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        ExercisePlan^ exercisePlan = gcnew ExercisePlan(UserID);
        this->Hide();
        exercisePlan->ShowDialog();
        this->Show();
    }
    private: System::Void daily_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        DailyMetric^ dailyMetric = gcnew DailyMetric(UserID);
        this->Hide();
        dailyMetric->ShowDialog();
        this->Show();
    }
    private: System::Void Nutririon_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        NutritionPlan^ nutritionPlan = gcnew NutritionPlan(UserID);
        this->Hide();
        nutritionPlan->ShowDialog();
        this->Show();
    }
    private: System::Void editExercise_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        EditExercisePlan^ editExercisePlan = gcnew EditExercisePlan;
        this->Hide();
        editExercisePlan->ShowDialog();
        this->Show();
    }
   private: System::Void editNutrition_btn_Click(System::Object^ sender, System::EventArgs^ e) {
       // Create an instance of the Modules class
       Modules modules;

       // Define the connection string using the server name and database name from the Modules class
       String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";

       // Create a SqlConnection object and open the connection
       SqlConnection^ con = gcnew SqlConnection(connectionString);
       con->Open();

       // SQL query to get the CoachID based on UserID
       String^ query = "SELECT CoachID FROM [User] WHERE UserID = @UserID;";
       SqlCommand^ cmd = gcnew SqlCommand(query, con);

       // Add parameter for UserID
       cmd->Parameters->AddWithValue("@UserID", UserID);

       // Execute the query and read the result
       SqlDataReader^ reader = cmd->ExecuteReader();

       String^ coachID = nullptr; // Initialize as nullptr

       // Check if there's a result
       if (reader->Read()) {
           // Retrieve the CoachID from the result and convert it to String
           int coachIDInt = safe_cast<int>(reader["CoachID"]); // Retrieve CoachID as int
           coachID = coachIDInt.ToString(); // Convert int to String
       }

       // Close the reader and the connection
       reader->Close();
       con->Close();

       // Create an instance of EditNutritionPlan form with the retrieved CoachID
       EditNutritionPlan^ editNutritionPlan = gcnew EditNutritionPlan(UserID, coachID);

       // Hide the current form, show the EditNutritionPlan form as a dialog, and then show the current form again after the dialog is closed
       this->Hide();
       editNutritionPlan->ShowDialog();
       this->Show();
   }



};
}
