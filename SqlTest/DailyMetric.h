#pragma once
#include "modularValues.h"
#include <msclr/marshal_cppstd.h>

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DailyMetric
	/// </summary>
	public ref class DailyMetric : public System::Windows::Forms::Form
	{
	public:
		String^ userID;
		DailyMetric(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DailyMetric(String^ UserID)
		{
			this->userID = UserID;
			InitializeComponent();
			ID_ListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &DailyMetric::ID_ListBox_SelectedIndexChanged);
			//
			//TODO: Add the constructor code here
			//

			PopulateIDListBox();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DailyMetric()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ID_ListBox;
	protected:

	private: System::Windows::Forms::Label^ CC_Labe;
	private: System::Windows::Forms::Label^ CB_Label;
	private: System::Windows::Forms::Label^ HR_Label;
	private: System::Windows::Forms::Label^ BP_Label;
	private: System::Windows::Forms::Label^ ST_Label;
	private: System::Windows::Forms::Label^ SH_Label;






	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ID_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->CC_Labe = (gcnew System::Windows::Forms::Label());
			this->CB_Label = (gcnew System::Windows::Forms::Label());
			this->HR_Label = (gcnew System::Windows::Forms::Label());
			this->BP_Label = (gcnew System::Windows::Forms::Label());
			this->ST_Label = (gcnew System::Windows::Forms::Label());
			this->SH_Label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ID_ListBox
			// 
			this->ID_ListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->ID_ListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID_ListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_ListBox->FormattingEnabled = true;
			this->ID_ListBox->ItemHeight = 29;
			this->ID_ListBox->Location = System::Drawing::Point(0, 0);
			this->ID_ListBox->Name = L"ID_ListBox";
			this->ID_ListBox->Size = System::Drawing::Size(146, 667);
			this->ID_ListBox->TabIndex = 0;
			// 
			// CC_Labe
			// 
			this->CC_Labe->AutoSize = true;
			this->CC_Labe->Location = System::Drawing::Point(430, 100);
			this->CC_Labe->Name = L"CC_Labe";
			this->CC_Labe->Size = System::Drawing::Size(263, 32);
			this->CC_Labe->TabIndex = 1;
			this->CC_Labe->Text = L"Calories Consumed";
			// 
			// CB_Label
			// 
			this->CB_Label->AutoSize = true;
			this->CB_Label->Location = System::Drawing::Point(430, 160);
			this->CB_Label->Name = L"CB_Label";
			this->CB_Label->Size = System::Drawing::Size(218, 32);
			this->CB_Label->TabIndex = 2;
			this->CB_Label->Text = L"Calories Burned";
			// 
			// HR_Label
			// 
			this->HR_Label->AutoSize = true;
			this->HR_Label->Location = System::Drawing::Point(430, 220);
			this->HR_Label->Name = L"HR_Label";
			this->HR_Label->Size = System::Drawing::Size(150, 32);
			this->HR_Label->TabIndex = 3;
			this->HR_Label->Text = L"Heart Rate";
			// 
			// BP_Label
			// 
			this->BP_Label->AutoSize = true;
			this->BP_Label->Location = System::Drawing::Point(430, 280);
			this->BP_Label->Name = L"BP_Label";
			this->BP_Label->Size = System::Drawing::Size(208, 32);
			this->BP_Label->TabIndex = 4;
			this->BP_Label->Text = L"Blood Pressure";
			// 
			// ST_Label
			// 
			this->ST_Label->AutoSize = true;
			this->ST_Label->Location = System::Drawing::Point(430, 340);
			this->ST_Label->Name = L"ST_Label";
			this->ST_Label->Size = System::Drawing::Size(173, 32);
			this->ST_Label->TabIndex = 5;
			this->ST_Label->Text = L"Steps Taken";
			// 
			// SH_Label
			// 
			this->SH_Label->AutoSize = true;
			this->SH_Label->Location = System::Drawing::Point(430, 400);
			this->SH_Label->Name = L"SH_Label";
			this->SH_Label->Size = System::Drawing::Size(170, 32);
			this->SH_Label->TabIndex = 6;
			this->SH_Label->Text = L"Sleep Hours";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label8->Location = System::Drawing::Point(13, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 32);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Date:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(140, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(561, 69);
			this->panel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 400);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 32);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Sleep Hours:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 340);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 32);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Steps Taken:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(153, 280);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 32);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Blood Pressure:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(153, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 32);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Heart Rate:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(153, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(226, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Calories Burned:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(153, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 32);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Calories Consumed:";
			// 
			// DailyMetric
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(696, 670);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->SH_Label);
			this->Controls->Add(this->ST_Label);
			this->Controls->Add(this->BP_Label);
			this->Controls->Add(this->HR_Label);
			this->Controls->Add(this->CB_Label);
			this->Controls->Add(this->CC_Labe);
			this->Controls->Add(this->ID_ListBox);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"DailyMetric";
			this->Text = L"Daily Metric";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void ID_ListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			


			int selectedIndex = ID_ListBox->SelectedIndex + 1;
			Modules modules;
			
			String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(connectionString);
			SqlCommand^ cmd = gcnew SqlCommand("SELECT dbo.getdailymetricAttributeByIndex(@UserID, @Index, @Attribute)", con);
			cmd->Parameters->AddWithValue("@UserID", userID); 
			cmd->Parameters->AddWithValue("@Index", selectedIndex); 

			try {
				con->Open();

				// Get and display the Date attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "Date");
				Object^ dateResult = cmd->ExecuteScalar();
				if (dateResult != nullptr) {
					label8->Text = dateResult->ToString();
				}

				// Get and display the SleepHours attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "SleepHours");
				Object^ sleepHoursResult = cmd->ExecuteScalar();
				if (sleepHoursResult != nullptr) {
					SH_Label->Text = sleepHoursResult->ToString();
				}

				// Get and display the StepsTaken attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "StepsTaken");
				Object^ stepsTakenResult = cmd->ExecuteScalar();
				if (stepsTakenResult != nullptr) {
					ST_Label->Text = stepsTakenResult->ToString();
				}

				// Get and display the BloodPressure attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "BloodPressure");
				Object^ bloodPressureResult = cmd->ExecuteScalar();
				if (bloodPressureResult != nullptr) {
					BP_Label->Text = bloodPressureResult->ToString();
				}

				// Get and display the HeartRate attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "HeartRate");
				Object^ heartRateResult = cmd->ExecuteScalar();
				if (heartRateResult != nullptr) {
					HR_Label->Text = heartRateResult->ToString();
				}

				// Get and display the CaloriesBurned attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "CaloriesBurned");
				Object^ caloriesBurnedResult = cmd->ExecuteScalar();
				if (caloriesBurnedResult != nullptr) {
					CB_Label->Text = caloriesBurnedResult->ToString();
				}

				// Get and display the CaloriesConsumed attribute
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->Parameters->AddWithValue("@Index", selectedIndex);
				cmd->Parameters->AddWithValue("@Attribute", "CaloriesConsumed");
				Object^ caloriesConsumedResult = cmd->ExecuteScalar();
				if (caloriesConsumedResult != nullptr) {
					CC_Labe->Text = caloriesConsumedResult->ToString();
				}
			}
			catch (SqlException^ ex) {
				// Handle SQL exceptions
			}
			finally {
				con->Close();
			}
		}

		private:
			// Function to populate ID_ListBox with the number of daily metrics
			void PopulateIDListBox() {
				Modules modules;

				// Establish connection to the database
				String^ connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
				SqlConnection^ con = gcnew SqlConnection(connectionString);
				SqlCommand^ cmd = gcnew SqlCommand("SELECT COUNT(*) FROM DailyMetrics WHERE UserID = @UserID", con);
				cmd->Parameters->AddWithValue("@UserID", userID);

				try {
					con->Open();
					int count = safe_cast<int>(cmd->ExecuteScalar());

					// Populate ID_ListBox with the count of daily metrics
					for (int i = 1; i <= count; i++) {
						ID_ListBox->Items->Add(i);
					}
				}
				catch (SqlException^ ex) {
					// Handle SQL exceptions
				}
				finally {
					con->Close();
				}
			}

#pragma endregion
	};
}
