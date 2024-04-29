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
	/// Summary for AllWorkouts
	/// </summary>
	public ref class AllWorkouts : public System::Windows::Forms::Form
	{
	public:
		AllWorkouts(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//

			// Attach the SelectedIndexChanged event handler to the ID_ListBox
			ID_ListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AllWorkouts::ID_ListBox_SelectedIndexChanged);
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllWorkouts()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::ListBox^ ID_ListBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: SqlConnection^ connection; // SqlConnection object for database connection

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
			this->ID_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->ID_ListBox->ItemHeight = 20;
			this->ID_ListBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->ID_ListBox->Location = System::Drawing::Point(0, 0);
			this->ID_ListBox->Name = L"ID_ListBox";
			this->ID_ListBox->Size = System::Drawing::Size(146, 640);
			this->ID_ListBox->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(152, 270);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Duration:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(152, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 24);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Sets:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 24);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Reps:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(152, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Calories Burned:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(152, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 24);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Workout Type:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(148, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 24);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Machine Used:";
			// 
			// AllWorkouts
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(636, 670);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ID_ListBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"AllWorkouts";
			this->Text = L"All Workouts";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Event handler for the SelectedIndexChanged event of the ID_ListBox
	private: System::Void ID_ListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Ensure that SelectedItem is not null
		if (ID_ListBox->SelectedItem != nullptr) {
			// Get the selected workout ID from the list box
			String^ selectedID = ID_ListBox->SelectedItem->ToString();

			// Call the GetWorkoutAttribute function for the selected workout ID to retrieve its attributes
			String^ workoutType = GetWorkoutAttribute(selectedID, "WorkoutType");
			String^ caloriesBurned = GetWorkoutAttribute(selectedID, "CaloriesBurned");
			String^ reps = GetWorkoutAttribute(selectedID, "Reps");
			String^ sets = GetWorkoutAttribute(selectedID, "Sets");
			String^ duration = GetWorkoutAttribute(selectedID, "Duration");
			String^ machineUsed = GetWorkoutAttribute(selectedID, "MachineName");

			// Display the attributes in the corresponding labels, handling null values
			label5->Text = "Workout Type: " + (workoutType != nullptr ? workoutType : "NULL");
			label4->Text = "Calories Burned: " + (caloriesBurned != nullptr ? caloriesBurned : "NULL");
			label3->Text = "Reps: " + (reps != nullptr ? reps : "NULL");
			label2->Text = "Sets: " + (sets != nullptr ? sets : "NULL");
			label1->Text = "Duration: " + (duration != nullptr ? duration : "NULL");
			label6->Text = "Machine Used: " + (machineUsed != nullptr ? machineUsed : "NULL");
		}
		else {
			// Handle the case where SelectedItem is null (optional)
		}
	}

		   // Function to call the SQL function GetWorkoutAttribute
private: String^ GetWorkoutAttribute(String^ workoutID, String^ attribute) {
	String^ result = "";

	try {
		// Create the connection string
		Modules modules;
		String^ connectionString = "Server=" + gcnew String(modules.serverName.c_str()) + ";Database=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";

		// Create SqlConnection object
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		// Open the connection
		connection->Open();

		// Create the SqlCommand object
		SqlCommand^ cmd = gcnew SqlCommand("SELECT dbo.GetWorkoutAttribute(@WorkoutID, @Attribute)", connection);

		// Add parameters to the command
		cmd->Parameters->AddWithValue("@WorkoutID", workoutID);
		cmd->Parameters->AddWithValue("@Attribute", attribute);

		// Execute the command and retrieve the result
		result = dynamic_cast<String^>(cmd->ExecuteScalar());
	}
	catch (Exception^ ex) {
		// Handle any exceptions
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return result;
}

	};
}
