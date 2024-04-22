#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NutritionPlan
	/// </summary>
	public ref class NutritionPlan : public System::Windows::Forms::Form
	{
	public:
		NutritionPlan(void)
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
		~NutritionPlan()
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
		System::ComponentModel::Container ^components;

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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(309, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(744, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(309, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(744, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Calories";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(309, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Water";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(309, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Fat";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(744, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 32);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Protien";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(744, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Carb";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(262, 32);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Fat Grams Per Day:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(282, 32);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Water Liters Per Day:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(30, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(178, 32);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Plane Name:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 32);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Start Date:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(433, 250);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(282, 32);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Carb Grams Per Day:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(433, 180);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(312, 32);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Protien Grams Per Day:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(433, 110);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(306, 32);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Total Calories Per Day:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(433, 40);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(140, 32);
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
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
