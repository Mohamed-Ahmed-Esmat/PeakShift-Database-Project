#pragma once
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
	/// Summary for NutritionPlan
	/// </summary>
	public ref class NutritionPlan : public System::Windows::Forms::Form
	{
	public:
		String^ userID;
		
		NutritionPlan(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NutritionPlan(String^ UserID)
		{
			InitializeComponent();
			this->userID = UserID;

			try {
				Modules modules;
				String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
				SqlConnection^ con = gcnew SqlConnection(connectionString);
				con->Open();

				// Retrieve Plan Name
				SqlCommand^ cmdPlanName = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdPlanName->Parameters->AddWithValue("@UserID", userID);
				cmdPlanName->Parameters->AddWithValue("@Attribute", "PlanName");
				String^ planName = safe_cast<String^>(cmdPlanName->ExecuteScalar());
				label11->Text = "Plan Name: " + planName;

				// Retrieve Start Date
				SqlCommand^ cmdStartDate = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdStartDate->Parameters->AddWithValue("@UserID", userID);
				cmdStartDate->Parameters->AddWithValue("@Attribute", "StartDate");
				String^ startDate = safe_cast<String^>(cmdStartDate->ExecuteScalar());
				label12->Text = "Start Date: " + startDate;

				// Retrieve End Date
				SqlCommand^ cmdEndDate = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdEndDate->Parameters->AddWithValue("@UserID", userID);
				cmdEndDate->Parameters->AddWithValue("@Attribute", "EndDate");
				String^ endDate = safe_cast<String^>(cmdEndDate->ExecuteScalar());
				label16->Text = "End Date: " + endDate;

				// Retrieve Total Calories Per Day
				SqlCommand^ cmdTotalCalories = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdTotalCalories->Parameters->AddWithValue("@UserID", userID);
				cmdTotalCalories->Parameters->AddWithValue("@Attribute", "TotalCaloriesPerDay");
				String^ totalCalories = safe_cast<String^>(cmdTotalCalories->ExecuteScalar());
				label15->Text = "Total Calories Per Day: " + totalCalories;

				// Retrieve Protein Grams Per Day
				SqlCommand^ cmdProteinGrams = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdProteinGrams->Parameters->AddWithValue("@UserID", userID);
				cmdProteinGrams->Parameters->AddWithValue("@Attribute", "ProteinGramsPerDay");
				String^ proteinGrams = safe_cast<String^>(cmdProteinGrams->ExecuteScalar());
				label14->Text = "Protein Grams Per Day: " + proteinGrams;

				// Retrieve Carb Grams Per Day
				SqlCommand^ cmdCarbGrams = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdCarbGrams->Parameters->AddWithValue("@UserID", userID);
				cmdCarbGrams->Parameters->AddWithValue("@Attribute", "CarbGramsPerDay");
				String^ carbGrams = safe_cast<String^>(cmdCarbGrams->ExecuteScalar());
				label13->Text = "Carb Grams Per Day: " + carbGrams;

				// Retrieve Fat Grams Per Day
				SqlCommand^ cmdFatGrams = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdFatGrams->Parameters->AddWithValue("@UserID", userID);
				cmdFatGrams->Parameters->AddWithValue("@Attribute", "FatGramsPerDay");
				String^ fatGrams = safe_cast<String^>(cmdFatGrams->ExecuteScalar());
				label9->Text = "Fat Grams Per Day: " + fatGrams;

				// Retrieve Water Liters Per Day
				SqlCommand^ cmdWaterLiters = gcnew SqlCommand("SELECT dbo.GetNutritionPlanAttributeByUserID(@UserID, @Attribute)", con);
				cmdWaterLiters->Parameters->AddWithValue("@UserID", userID);
				cmdWaterLiters->Parameters->AddWithValue("@Attribute", "WaterLitersPerDay");
				String^ waterLiters = safe_cast<String^>(cmdWaterLiters->ExecuteScalar());
				label10->Text = "Water Liters Per Day: " + waterLiters;

				// Close the connection
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NutritionPlan()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(221, 29);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Fat Grams Per Day:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(238, 29);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Water Liters Per Day:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(30, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 29);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Plane Name:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 29);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Start Date:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(433, 250);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(239, 29);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Carb Grams Per Day:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(433, 180);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(264, 29);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Protien Grams Per Day:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(433, 110);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(261, 29);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Total Calories Per Day:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(433, 40);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(118, 29);
			this->label16->TabIndex = 12;
			this->label16->Text = L"End Date:";
			// 
			// NutritionPlan
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(866, 333);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"NutritionPlan";
			this->Text = L"Nutrition Plan";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	};
}
