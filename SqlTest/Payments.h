#pragma once
#include "SubscrpPlans.h"
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
	/// Summary for Payments
	/// </summary>
	public ref class Payments : public System::Windows::Forms::Form
	{

	public:
		String^ UserID;
		String^ connectionString;
		Payments(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Payments(String^ UserID)
		{
			Modules modules;
			 connectionString = "Data Source=" + gcnew String(modules.serverName.c_str()) + ";Initial Catalog=" + gcnew String(modules.dataBaseName.c_str()) + ";Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(connectionString);
			con->Open();
			this->UserID = UserID;
			InitializeComponent();

			// Retrieve payment amount, date, and active status from database
			Decimal paymentAmount;
			DateTime paymentDate;
			String^ activeStatus;
			this->button2->Click += gcnew System::EventHandler(this, &Payments::FreezeSubscription_Click);
			this->button1->Click += gcnew System::EventHandler(this, &Payments::CancelSubscription_Click);



			try
			{
				SqlCommand^ cmd = gcnew SqlCommand("SELECT dbo.GetPaymentDetails(@UserID, 'PaymentAmount'), dbo.GetPaymentDetails(@UserID, 'PaymentDate'), dbo.GetPaymentDetails(@UserID, 'Active')", con);
				cmd->Parameters->AddWithValue("@UserID", UserID);

				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read())
				{
					if (Decimal::TryParse(reader[0]->ToString(), paymentAmount) &&
						DateTime::TryParse(reader[1]->ToString(), paymentDate))
					{
						// Calculate subscription duration based on payment amount
						int subscriptionDuration = CalculateSubscriptionDuration(paymentAmount);

						// Calculate renewal date by adding subscription duration to payment date
						DateTime renewDate = paymentDate.AddMonths(subscriptionDuration);

						// Update labels with subscription duration, renewal date, and active status information
						label1->Text = "Current Subscription: " + subscriptionDuration.ToString() + " months";
						label2->Text = "Renew on: " + renewDate.ToString("yyyy-MM-dd");


						// Set Active_Label based on active status
						label5->Text = (reader[2]->ToString() == "1") ? "Active: True" : "Active: False";
					}
					else
					{
						// Handle case where payment amount, date, or active status is not retrieved or parsed successfully
						// For example, display default values or show an error message
						label1->Text = "Current Subscription: N/A";
						label2->Text = "Renew on: <date>";
						label5->Text = "Unknown";
					}
				}
				else
				{
					// Handle case where no payment record is found for the user
					// For example, display default values or show an error message
					label1->Text = "Current Subscription: Unknown";
					label2->Text = "Renew on: <date>";
					Active_Label->Text = "Unknown";
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally
			{
				con->Close();
			}

		}




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Payments()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int CalculateSubscriptionDuration(Decimal paymentAmount)
		{
			if (paymentAmount <= 100)
			{
				return 1; // 1 month subscription
			}
			else if (paymentAmount > 100 && paymentAmount <= 500)
			{
				return 6; // 6 months subscription
			}
			else
			{
				return 12; // 1 year subscription
			}
		}

		// Function to retrieve payment amount from the database
		Decimal GetPaymentAmountForUser(String^ userID)
		{
			Decimal paymentAmount = 0;

			// Write SQL query to get payment amount for the user
			// Execute the query and retrieve the payment amount

			return paymentAmount;
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label5;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Subscription:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Renew on:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button1->Location = System::Drawing::Point(39, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Cancel Subscription";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button2->Location = System::Drawing::Point(332, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Freeze Subscription";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->button3->Location = System::Drawing::Point(138, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(403, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Change Subscription Plan";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Payments::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Active:";
			// 
			// Payments
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(662, 496);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Payments";
			this->Text = L"Payments";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	System::Void FreezeSubscription_Click(System::Object^ sender, System::EventArgs^ e) {
		// The event handler code for freezing the subscription
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		try
		{
			// Execute SQL command to update user's subscription status
			SqlCommand^ cmd = gcnew SqlCommand("UPDATE [User] SET Active = 0, Frozen = 1 WHERE UserID = @UserID", con);
			cmd->Parameters->AddWithValue("@UserID", UserID);
			cmd->ExecuteNonQuery();

			// Display message to the user
			MessageBox::Show("Subscription frozen successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Update label to show subscription status
			label5->Text = "Active: False";
		}
		catch (Exception^ ex)
		{
			// Handle any errors that occur during the update process
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			// Close the database connection
			con->Close();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SubscrpPlans^ subscrpPlans = gcnew SubscrpPlans;
		this->Hide();
		subscrpPlans->ShowDialog();
		this->Show();
	}
private: System::Void CancelSubscription_Click(System::Object^ sender, System::EventArgs^ e) {
	// The event handler code for canceling the subscription
	SqlConnection^ con = gcnew SqlConnection(connectionString);
	con->Open();

	try
	{
		// Execute SQL command to update user's subscription status
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE [User] SET Active = 0 WHERE UserID = @UserID", con);
		cmd->Parameters->AddWithValue("@UserID", UserID);
		cmd->ExecuteNonQuery();

		// Update labels to show subscription status as canceled
		label1->Text = "Current Subscription: N/A";
		label2->Text = "Renew on: N/A";
		label5->Text = "Active: False";

		// Display message to the user
		MessageBox::Show("Subscription canceled successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex)
	{
		// Handle any errors that occur during the update process
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		// Close the database connection
		con->Close();
	}
}



};
}
