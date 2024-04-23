#pragma once

namespace SqlTest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for EditNutritionPlan
    /// </summary>
    public ref class EditNutritionPlan : public System::Windows::Forms::Form
    {
    public:
        EditNutritionPlan(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~EditNutritionPlan()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ lblPlanName;
    protected:
    private: System::Windows::Forms::Label^ lblStartDate;
    private: System::Windows::Forms::Label^ lblEndDate;
    private: System::Windows::Forms::Label^ lblTotalCaloriesPerDay;
    private: System::Windows::Forms::Label^ lblProteinGramsPerDay;
    private: System::Windows::Forms::Label^ lblCarbGramsPerDay;
    private: System::Windows::Forms::Label^ lblFatGramsPerDay;
    private: System::Windows::Forms::Label^ lblWaterLitersPerDay;
    private: System::Windows::Forms::TextBox^ txtPlanName;
    private: System::Windows::Forms::TextBox^ txtStartDate;
    private: System::Windows::Forms::TextBox^ txtEndDate;
    private: System::Windows::Forms::TextBox^ txtTotalCaloriesPerDay;
    private: System::Windows::Forms::TextBox^ txtProteinGramsPerDay;
    private: System::Windows::Forms::TextBox^ txtCarbGramsPerDay;
    private: System::Windows::Forms::TextBox^ txtFatGramsPerDay;
    private: System::Windows::Forms::TextBox^ txtWaterLitersPerDay;
    private: System::Windows::Forms::Button^ btnUpdate;

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
            this->lblPlanName = (gcnew System::Windows::Forms::Label());
            this->lblStartDate = (gcnew System::Windows::Forms::Label());
            this->lblEndDate = (gcnew System::Windows::Forms::Label());
            this->lblTotalCaloriesPerDay = (gcnew System::Windows::Forms::Label());
            this->lblProteinGramsPerDay = (gcnew System::Windows::Forms::Label());
            this->lblCarbGramsPerDay = (gcnew System::Windows::Forms::Label());
            this->lblFatGramsPerDay = (gcnew System::Windows::Forms::Label());
            this->lblWaterLitersPerDay = (gcnew System::Windows::Forms::Label());
            this->txtPlanName = (gcnew System::Windows::Forms::TextBox());
            this->txtStartDate = (gcnew System::Windows::Forms::TextBox());
            this->txtEndDate = (gcnew System::Windows::Forms::TextBox());
            this->txtTotalCaloriesPerDay = (gcnew System::Windows::Forms::TextBox());
            this->txtProteinGramsPerDay = (gcnew System::Windows::Forms::TextBox());
            this->txtCarbGramsPerDay = (gcnew System::Windows::Forms::TextBox());
            this->txtFatGramsPerDay = (gcnew System::Windows::Forms::TextBox());
            this->txtWaterLitersPerDay = (gcnew System::Windows::Forms::TextBox());
            this->btnUpdate = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // lblPlanName
            // 
            this->lblPlanName->Location = System::Drawing::Point(50, 50);
            this->lblPlanName->Name = L"lblPlanName";
            this->lblPlanName->Size = System::Drawing::Size(100, 23);
            this->lblPlanName->TabIndex = 0;
            this->lblPlanName->Text = L"Plan Name (Partial Key):";
            // 
            // lblStartDate
            // 
            this->lblStartDate->Location = System::Drawing::Point(50, 100);
            this->lblStartDate->Name = L"lblStartDate";
            this->lblStartDate->Size = System::Drawing::Size(100, 23);
            this->lblStartDate->TabIndex = 1;
            this->lblStartDate->Text = L"Start Date:";
            // 
            // lblEndDate
            // 
            this->lblEndDate->Location = System::Drawing::Point(50, 150);
            this->lblEndDate->Name = L"lblEndDate";
            this->lblEndDate->Size = System::Drawing::Size(100, 23);
            this->lblEndDate->TabIndex = 2;
            this->lblEndDate->Text = L"End Date:";
            // 
            // lblTotalCaloriesPerDay
            // 
            this->lblTotalCaloriesPerDay->Location = System::Drawing::Point(50, 200);
            this->lblTotalCaloriesPerDay->Name = L"lblTotalCaloriesPerDay";
            this->lblTotalCaloriesPerDay->Size = System::Drawing::Size(100, 23);
            this->lblTotalCaloriesPerDay->TabIndex = 3;
            this->lblTotalCaloriesPerDay->Text = L"Total Calories Per Day:";
            // 
            // lblProteinGramsPerDay
            // 
            this->lblProteinGramsPerDay->Location = System::Drawing::Point(50, 250);
            this->lblProteinGramsPerDay->Name = L"lblProteinGramsPerDay";
            this->lblProteinGramsPerDay->Size = System::Drawing::Size(100, 23);
            this->lblProteinGramsPerDay->TabIndex = 4;
            this->lblProteinGramsPerDay->Text = L"Protein Grams Per Day:";
            // 
            // lblCarbGramsPerDay
            // 
            this->lblCarbGramsPerDay->Location = System::Drawing::Point(50, 300);
            this->lblCarbGramsPerDay->Name = L"lblCarbGramsPerDay";
            this->lblCarbGramsPerDay->Size = System::Drawing::Size(100, 23);
            this->lblCarbGramsPerDay->TabIndex = 5;
            this->lblCarbGramsPerDay->Text = L"Carb Grams Per Day:";
            // 
            // lblFatGramsPerDay
            // 
            this->lblFatGramsPerDay->Location = System::Drawing::Point(50, 350);
            this->lblFatGramsPerDay->Name = L"lblFatGramsPerDay";
            this->lblFatGramsPerDay->Size = System::Drawing::Size(100, 23);
            this->lblFatGramsPerDay->TabIndex = 6;
            this->lblFatGramsPerDay->Text = L"Fat Grams Per Day:";
            // 
            // lblWaterLitersPerDay
            // 
            this->lblWaterLitersPerDay->Location = System::Drawing::Point(50, 400);
            this->lblWaterLitersPerDay->Name = L"lblWaterLitersPerDay";
            this->lblWaterLitersPerDay->Size = System::Drawing::Size(100, 23);
            this->lblWaterLitersPerDay->TabIndex = 7;
            this->lblWaterLitersPerDay->Text = L"Water Liters Per Day:";
            // 
            // txtPlanName
            // 
            this->txtPlanName->Location = System::Drawing::Point(200, 50);
            this->txtPlanName->Name = L"txtPlanName";
            this->txtPlanName->Size = System::Drawing::Size(100, 22);
            this->txtPlanName->TabIndex = 8;
            // 
            // txtStartDate
            // 
            this->txtStartDate->Location = System::Drawing::Point(200, 100);
            this->txtStartDate->Name = L"txtStartDate";
            this->txtStartDate->Size = System::Drawing::Size(100, 22);
            this->txtStartDate->TabIndex = 9;
            // 
            // txtEndDate
            // 
            this->txtEndDate->Location = System::Drawing::Point(200, 150);
            this->txtEndDate->Name = L"txtEndDate";
            this->txtEndDate->Size = System::Drawing::Size(100, 22);
            this->txtEndDate->TabIndex = 10;
            // 
            // txtTotalCaloriesPerDay
            // 
            this->txtTotalCaloriesPerDay->Location = System::Drawing::Point(200, 200);
            this->txtTotalCaloriesPerDay->Name = L"txtTotalCaloriesPerDay";
            this->txtTotalCaloriesPerDay->Size = System::Drawing::Size(100, 22);
            this->txtTotalCaloriesPerDay->TabIndex = 11;
            // 
            // txtProteinGramsPerDay
            // 
            this->txtProteinGramsPerDay->Location = System::Drawing::Point(200, 250);
            this->txtProteinGramsPerDay->Name = L"txtProteinGramsPerDay";
            this->txtProteinGramsPerDay->Size = System::Drawing::Size(100, 22);
            this->txtProteinGramsPerDay->TabIndex = 12;
            // 
            // txtCarbGramsPerDay
            // 
            this->txtCarbGramsPerDay->Location = System::Drawing::Point(200, 300);
            this->txtCarbGramsPerDay->Name = L"txtCarbGramsPerDay";
            this->txtCarbGramsPerDay->Size = System::Drawing::Size(100, 22);
            this->txtCarbGramsPerDay->TabIndex = 13;
            // 
            // txtFatGramsPerDay
            // 
            this->txtFatGramsPerDay->Location = System::Drawing::Point(200, 350);
            this->txtFatGramsPerDay->Name = L"txtFatGramsPerDay";
            this->txtFatGramsPerDay->Size = System::Drawing::Size(100, 22);
            this->txtFatGramsPerDay->TabIndex = 14;
            // 
            // txtWaterLitersPerDay
            // 
            this->txtWaterLitersPerDay->Location = System::Drawing::Point(200, 400);
            this->txtWaterLitersPerDay->Name = L"txtWaterLitersPerDay";
            this->txtWaterLitersPerDay->Size = System::Drawing::Size(100, 22);
            this->txtWaterLitersPerDay->TabIndex = 15;
            // 
            // btnUpdate
            // 
            this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->btnUpdate->Location = System::Drawing::Point(239, 497);
            this->btnUpdate->Name = L"btnUpdate";
            this->btnUpdate->Size = System::Drawing::Size(186, 90);
            this->btnUpdate->TabIndex = 16;
            this->btnUpdate->Text = L"Update";
            this->btnUpdate->UseVisualStyleBackColor = false;
            this->btnUpdate->Click += gcnew System::EventHandler(this, &EditNutritionPlan::btnUpdate_Click);
            // 
            // EditNutritionPlan
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(696, 670);
            this->Controls->Add(this->lblPlanName);
            this->Controls->Add(this->lblStartDate);
            this->Controls->Add(this->lblEndDate);
            this->Controls->Add(this->lblTotalCaloriesPerDay);
            this->Controls->Add(this->lblProteinGramsPerDay);
            this->Controls->Add(this->lblCarbGramsPerDay);
            this->Controls->Add(this->lblFatGramsPerDay);
            this->Controls->Add(this->lblWaterLitersPerDay);
            this->Controls->Add(this->txtPlanName);
            this->Controls->Add(this->txtStartDate);
            this->Controls->Add(this->txtEndDate);
            this->Controls->Add(this->txtTotalCaloriesPerDay);
            this->Controls->Add(this->txtProteinGramsPerDay);
            this->Controls->Add(this->txtCarbGramsPerDay);
            this->Controls->Add(this->txtFatGramsPerDay);
            this->Controls->Add(this->txtWaterLitersPerDay);
            this->Controls->Add(this->btnUpdate);
            this->Name = L"EditNutritionPlan";
            this->Text = L"EditNutritionPlan";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // Event handler for the Update button click
        System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Implement the logic to update the nutrition plan here
            // You can retrieve values from the text boxes and update the database or perform any other action.
        }
    };
}
