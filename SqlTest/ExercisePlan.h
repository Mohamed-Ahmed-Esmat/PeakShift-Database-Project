#pragma once

namespace SqlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExercisePlan
	/// </summary>
	public ref class ExercisePlan : public System::Windows::Forms::Form
	{
	public:
		ExercisePlan(void)
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
		~ExercisePlan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ Month_Box;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Year_Box;

	private: System::Windows::Forms::Button^ View_Button;
	private: System::Windows::Forms::Panel^ Cell_1;

	private: System::Windows::Forms::Label^ No_1;
	private: System::Windows::Forms::Label^ MG_1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ MG_2;

    private: System::Windows::Forms::Label^ No_2;

    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ MG_10;

    private: System::Windows::Forms::Label^ No_10;

    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ MG_9;

    private: System::Windows::Forms::Label^ No_9;

    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ MG_26;

    private: System::Windows::Forms::Label^ No_26;

    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ MG_18;

    private: System::Windows::Forms::Label^ No_18;

    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ MG_25;

    private: System::Windows::Forms::Label^ No_25;

    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Label^ MG_17;

    private: System::Windows::Forms::Label^ No_17;

    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::Label^ MG_28;

    private: System::Windows::Forms::Label^ No_28;

    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ MG_12;

    private: System::Windows::Forms::Label^ No_12;

    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::Label^ MG_20;

    private: System::Windows::Forms::Label^ No_20;

    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Label^ MG_4;

    private: System::Windows::Forms::Label^ No_4;

    private: System::Windows::Forms::Panel^ panel13;
    private: System::Windows::Forms::Label^ MG_27;

    private: System::Windows::Forms::Label^ No_27;

    private: System::Windows::Forms::Panel^ panel14;
    private: System::Windows::Forms::Label^ MG_11;

    private: System::Windows::Forms::Label^ No_11;

    private: System::Windows::Forms::Panel^ panel15;
    private: System::Windows::Forms::Label^ MG_19;

    private: System::Windows::Forms::Label^ No_19;

    private: System::Windows::Forms::Panel^ panel16;
    private: System::Windows::Forms::Label^ MG_3;

    private: System::Windows::Forms::Label^ No_3;

    private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ MG_30;

    private: System::Windows::Forms::Label^ No_30;

    private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ MG_14;

    private: System::Windows::Forms::Label^ No_14;

    private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Label^ MG_22;

    private: System::Windows::Forms::Label^ No_22;

    private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ MG_6;

    private: System::Windows::Forms::Label^ No_6;

    private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Label^ MG_29;

private: System::Windows::Forms::Label^ No_29;

    private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Label^ MG_13;

private: System::Windows::Forms::Label^ No_13;

    private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ MG_21;

private: System::Windows::Forms::Label^ No_21;

    private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ MG_5;

private: System::Windows::Forms::Label^ No_5;




private: System::Windows::Forms::Panel^ Cell_16;
private: System::Windows::Forms::Label^ MG_16;



private: System::Windows::Forms::Label^ No_16;

    private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ MG_24;

private: System::Windows::Forms::Label^ No_24;

    private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Label^ MG_8;

private: System::Windows::Forms::Label^ No_8;

    private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Label^ MG_31;

private: System::Windows::Forms::Label^ No_31;

    private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ MG_15;
private: System::Windows::Forms::Label^ No_15;



    private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Label^ MG_23;

private: System::Windows::Forms::Label^ No_23;

    private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Label^ MG_7;

private: System::Windows::Forms::Label^ No_7;









































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
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->View_Button = (gcnew System::Windows::Forms::Button());
            this->Month_Box = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->Year_Box = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Cell_1 = (gcnew System::Windows::Forms::Panel());
            this->MG_1 = (gcnew System::Windows::Forms::Label());
            this->No_1 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->MG_2 = (gcnew System::Windows::Forms::Label());
            this->No_2 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->MG_10 = (gcnew System::Windows::Forms::Label());
            this->No_10 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->MG_9 = (gcnew System::Windows::Forms::Label());
            this->No_9 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->MG_26 = (gcnew System::Windows::Forms::Label());
            this->No_26 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->MG_18 = (gcnew System::Windows::Forms::Label());
            this->No_18 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->MG_25 = (gcnew System::Windows::Forms::Label());
            this->No_25 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->MG_17 = (gcnew System::Windows::Forms::Label());
            this->No_17 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->MG_28 = (gcnew System::Windows::Forms::Label());
            this->No_28 = (gcnew System::Windows::Forms::Label());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->MG_12 = (gcnew System::Windows::Forms::Label());
            this->No_12 = (gcnew System::Windows::Forms::Label());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->MG_20 = (gcnew System::Windows::Forms::Label());
            this->No_20 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->MG_4 = (gcnew System::Windows::Forms::Label());
            this->No_4 = (gcnew System::Windows::Forms::Label());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->MG_27 = (gcnew System::Windows::Forms::Label());
            this->No_27 = (gcnew System::Windows::Forms::Label());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->MG_11 = (gcnew System::Windows::Forms::Label());
            this->No_11 = (gcnew System::Windows::Forms::Label());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->MG_19 = (gcnew System::Windows::Forms::Label());
            this->No_19 = (gcnew System::Windows::Forms::Label());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->MG_3 = (gcnew System::Windows::Forms::Label());
            this->No_3 = (gcnew System::Windows::Forms::Label());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->MG_30 = (gcnew System::Windows::Forms::Label());
            this->No_30 = (gcnew System::Windows::Forms::Label());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->MG_14 = (gcnew System::Windows::Forms::Label());
            this->No_14 = (gcnew System::Windows::Forms::Label());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->MG_22 = (gcnew System::Windows::Forms::Label());
            this->No_22 = (gcnew System::Windows::Forms::Label());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->MG_6 = (gcnew System::Windows::Forms::Label());
            this->No_6 = (gcnew System::Windows::Forms::Label());
            this->panel21 = (gcnew System::Windows::Forms::Panel());
            this->MG_29 = (gcnew System::Windows::Forms::Label());
            this->No_29 = (gcnew System::Windows::Forms::Label());
            this->panel22 = (gcnew System::Windows::Forms::Panel());
            this->MG_13 = (gcnew System::Windows::Forms::Label());
            this->No_13 = (gcnew System::Windows::Forms::Label());
            this->panel23 = (gcnew System::Windows::Forms::Panel());
            this->MG_21 = (gcnew System::Windows::Forms::Label());
            this->No_21 = (gcnew System::Windows::Forms::Label());
            this->panel24 = (gcnew System::Windows::Forms::Panel());
            this->MG_5 = (gcnew System::Windows::Forms::Label());
            this->No_5 = (gcnew System::Windows::Forms::Label());
            this->Cell_16 = (gcnew System::Windows::Forms::Panel());
            this->MG_16 = (gcnew System::Windows::Forms::Label());
            this->No_16 = (gcnew System::Windows::Forms::Label());
            this->panel27 = (gcnew System::Windows::Forms::Panel());
            this->MG_24 = (gcnew System::Windows::Forms::Label());
            this->No_24 = (gcnew System::Windows::Forms::Label());
            this->panel28 = (gcnew System::Windows::Forms::Panel());
            this->MG_8 = (gcnew System::Windows::Forms::Label());
            this->No_8 = (gcnew System::Windows::Forms::Label());
            this->panel29 = (gcnew System::Windows::Forms::Panel());
            this->MG_31 = (gcnew System::Windows::Forms::Label());
            this->No_31 = (gcnew System::Windows::Forms::Label());
            this->panel30 = (gcnew System::Windows::Forms::Panel());
            this->MG_15 = (gcnew System::Windows::Forms::Label());
            this->No_15 = (gcnew System::Windows::Forms::Label());
            this->panel31 = (gcnew System::Windows::Forms::Panel());
            this->MG_23 = (gcnew System::Windows::Forms::Label());
            this->No_23 = (gcnew System::Windows::Forms::Label());
            this->panel32 = (gcnew System::Windows::Forms::Panel());
            this->MG_7 = (gcnew System::Windows::Forms::Label());
            this->No_7 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->Cell_1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            this->panel10->SuspendLayout();
            this->panel11->SuspendLayout();
            this->panel12->SuspendLayout();
            this->panel13->SuspendLayout();
            this->panel14->SuspendLayout();
            this->panel15->SuspendLayout();
            this->panel16->SuspendLayout();
            this->panel17->SuspendLayout();
            this->panel18->SuspendLayout();
            this->panel19->SuspendLayout();
            this->panel20->SuspendLayout();
            this->panel21->SuspendLayout();
            this->panel22->SuspendLayout();
            this->panel23->SuspendLayout();
            this->panel24->SuspendLayout();
            this->Cell_16->SuspendLayout();
            this->panel27->SuspendLayout();
            this->panel28->SuspendLayout();
            this->panel29->SuspendLayout();
            this->panel30->SuspendLayout();
            this->panel31->SuspendLayout();
            this->panel32->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
                static_cast<System::Int32>(static_cast<System::Byte>(99)));
            this->panel1->Controls->Add(this->View_Button);
            this->panel1->Controls->Add(this->Month_Box);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->Year_Box);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel1->Location = System::Drawing::Point(12, 12);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1183, 79);
            this->panel1->TabIndex = 0;
            // 
            // View_Button
            // 
            this->View_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->View_Button->Location = System::Drawing::Point(1065, 22);
            this->View_Button->Name = L"View_Button";
            this->View_Button->Size = System::Drawing::Size(102, 37);
            this->View_Button->TabIndex = 4;
            this->View_Button->Text = L"View";
            this->View_Button->UseVisualStyleBackColor = false;
            // 
            // Month_Box
            // 
            this->Month_Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->Month_Box->FormattingEnabled = true;
            this->Month_Box->Location = System::Drawing::Point(301, 23);
            this->Month_Box->Name = L"Month_Box";
            this->Month_Box->Size = System::Drawing::Size(121, 37);
            this->Month_Box->TabIndex = 3;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(221, 26);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(85, 29);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Month:";
            // 
            // Year_Box
            // 
            this->Year_Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->Year_Box->FormattingEnabled = true;
            this->Year_Box->Location = System::Drawing::Point(76, 23);
            this->Year_Box->Name = L"Year_Box";
            this->Year_Box->Size = System::Drawing::Size(121, 37);
            this->Year_Box->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 26);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(70, 29);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Year:";
            // 
            // Cell_1
            // 
            this->Cell_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->Cell_1->Controls->Add(this->MG_1);
            this->Cell_1->Controls->Add(this->No_1);
            this->Cell_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cell_1->Location = System::Drawing::Point(12, 97);
            this->Cell_1->Name = L"Cell_1";
            this->Cell_1->Size = System::Drawing::Size(142, 180);
            this->Cell_1->TabIndex = 1;
            // 
            // MG_1
            // 
            this->MG_1->AutoSize = true;
            this->MG_1->Location = System::Drawing::Point(17, 90);
            this->MG_1->Name = L"MG_1";
            this->MG_1->Size = System::Drawing::Size(104, 64);
            this->MG_1->TabIndex = 1;
            this->MG_1->Text = L"Muscle\r\nGroup";
            // 
            // No_1
            // 
            this->No_1->AutoSize = true;
            this->No_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_1->Location = System::Drawing::Point(52, 26);
            this->No_1->Name = L"No_1";
            this->No_1->Size = System::Drawing::Size(30, 32);
            this->No_1->TabIndex = 0;
            this->No_1->Text = L"1";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel2->Controls->Add(this->MG_2);
            this->panel2->Controls->Add(this->No_2);
            this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel2->Location = System::Drawing::Point(160, 97);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(142, 180);
            this->panel2->TabIndex = 2;
            // 
            // MG_2
            // 
            this->MG_2->AutoSize = true;
            this->MG_2->Location = System::Drawing::Point(17, 90);
            this->MG_2->Name = L"MG_2";
            this->MG_2->Size = System::Drawing::Size(104, 64);
            this->MG_2->TabIndex = 1;
            this->MG_2->Text = L"Muscle\r\nGroup";
            // 
            // No_2
            // 
            this->No_2->AutoSize = true;
            this->No_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_2->Location = System::Drawing::Point(52, 26);
            this->No_2->Name = L"No_2";
            this->No_2->Size = System::Drawing::Size(30, 32);
            this->No_2->TabIndex = 0;
            this->No_2->Text = L"2";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel3->Controls->Add(this->MG_10);
            this->panel3->Controls->Add(this->No_10);
            this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel3->Location = System::Drawing::Point(160, 283);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(142, 180);
            this->panel3->TabIndex = 4;
            // 
            // MG_10
            // 
            this->MG_10->AutoSize = true;
            this->MG_10->Location = System::Drawing::Point(17, 90);
            this->MG_10->Name = L"MG_10";
            this->MG_10->Size = System::Drawing::Size(104, 64);
            this->MG_10->TabIndex = 1;
            this->MG_10->Text = L"Muscle\r\nGroup";
            // 
            // No_10
            // 
            this->No_10->AutoSize = true;
            this->No_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_10->Location = System::Drawing::Point(46, 26);
            this->No_10->Name = L"No_10";
            this->No_10->Size = System::Drawing::Size(46, 32);
            this->No_10->TabIndex = 0;
            this->No_10->Text = L"10";
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel4->Controls->Add(this->MG_9);
            this->panel4->Controls->Add(this->No_9);
            this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel4->Location = System::Drawing::Point(12, 283);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(142, 180);
            this->panel4->TabIndex = 3;
            // 
            // MG_9
            // 
            this->MG_9->AutoSize = true;
            this->MG_9->Location = System::Drawing::Point(17, 90);
            this->MG_9->Name = L"MG_9";
            this->MG_9->Size = System::Drawing::Size(104, 64);
            this->MG_9->TabIndex = 1;
            this->MG_9->Text = L"Muscle\r\nGroup";
            // 
            // No_9
            // 
            this->No_9->AutoSize = true;
            this->No_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_9->Location = System::Drawing::Point(52, 26);
            this->No_9->Name = L"No_9";
            this->No_9->Size = System::Drawing::Size(30, 32);
            this->No_9->TabIndex = 0;
            this->No_9->Text = L"9";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel5->Controls->Add(this->MG_26);
            this->panel5->Controls->Add(this->No_26);
            this->panel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel5->Location = System::Drawing::Point(160, 655);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(142, 180);
            this->panel5->TabIndex = 8;
            // 
            // MG_26
            // 
            this->MG_26->AutoSize = true;
            this->MG_26->Location = System::Drawing::Point(17, 90);
            this->MG_26->Name = L"MG_26";
            this->MG_26->Size = System::Drawing::Size(104, 64);
            this->MG_26->TabIndex = 1;
            this->MG_26->Text = L"Muscle\r\nGroup";
            // 
            // No_26
            // 
            this->No_26->AutoSize = true;
            this->No_26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_26->Location = System::Drawing::Point(46, 32);
            this->No_26->Name = L"No_26";
            this->No_26->Size = System::Drawing::Size(46, 32);
            this->No_26->TabIndex = 0;
            this->No_26->Text = L"26";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel6->Controls->Add(this->MG_18);
            this->panel6->Controls->Add(this->No_18);
            this->panel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel6->Location = System::Drawing::Point(160, 469);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(142, 180);
            this->panel6->TabIndex = 6;
            // 
            // MG_18
            // 
            this->MG_18->AutoSize = true;
            this->MG_18->Location = System::Drawing::Point(17, 90);
            this->MG_18->Name = L"MG_18";
            this->MG_18->Size = System::Drawing::Size(104, 64);
            this->MG_18->TabIndex = 1;
            this->MG_18->Text = L"Muscle\r\nGroup";
            // 
            // No_18
            // 
            this->No_18->AutoSize = true;
            this->No_18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_18->Location = System::Drawing::Point(46, 32);
            this->No_18->Name = L"No_18";
            this->No_18->Size = System::Drawing::Size(46, 32);
            this->No_18->TabIndex = 0;
            this->No_18->Text = L"18";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel7->Controls->Add(this->MG_25);
            this->panel7->Controls->Add(this->No_25);
            this->panel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel7->Location = System::Drawing::Point(12, 655);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(142, 180);
            this->panel7->TabIndex = 7;
            // 
            // MG_25
            // 
            this->MG_25->AutoSize = true;
            this->MG_25->Location = System::Drawing::Point(17, 90);
            this->MG_25->Name = L"MG_25";
            this->MG_25->Size = System::Drawing::Size(104, 64);
            this->MG_25->TabIndex = 1;
            this->MG_25->Text = L"Muscle\r\nGroup";
            // 
            // No_25
            // 
            this->No_25->AutoSize = true;
            this->No_25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_25->Location = System::Drawing::Point(46, 32);
            this->No_25->Name = L"No_25";
            this->No_25->Size = System::Drawing::Size(46, 32);
            this->No_25->TabIndex = 0;
            this->No_25->Text = L"25";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel8->Controls->Add(this->MG_17);
            this->panel8->Controls->Add(this->No_17);
            this->panel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel8->Location = System::Drawing::Point(12, 469);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(142, 180);
            this->panel8->TabIndex = 5;
            // 
            // MG_17
            // 
            this->MG_17->AutoSize = true;
            this->MG_17->Location = System::Drawing::Point(17, 90);
            this->MG_17->Name = L"MG_17";
            this->MG_17->Size = System::Drawing::Size(104, 64);
            this->MG_17->TabIndex = 1;
            this->MG_17->Text = L"Muscle\r\nGroup";
            // 
            // No_17
            // 
            this->No_17->AutoSize = true;
            this->No_17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_17->Location = System::Drawing::Point(46, 32);
            this->No_17->Name = L"No_17";
            this->No_17->Size = System::Drawing::Size(46, 32);
            this->No_17->TabIndex = 0;
            this->No_17->Text = L"17";
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel9->Controls->Add(this->MG_28);
            this->panel9->Controls->Add(this->No_28);
            this->panel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel9->Location = System::Drawing::Point(456, 655);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(142, 180);
            this->panel9->TabIndex = 16;
            // 
            // MG_28
            // 
            this->MG_28->AutoSize = true;
            this->MG_28->Location = System::Drawing::Point(17, 90);
            this->MG_28->Name = L"MG_28";
            this->MG_28->Size = System::Drawing::Size(104, 64);
            this->MG_28->TabIndex = 1;
            this->MG_28->Text = L"Muscle\r\nGroup";
            // 
            // No_28
            // 
            this->No_28->AutoSize = true;
            this->No_28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_28->Location = System::Drawing::Point(46, 32);
            this->No_28->Name = L"No_28";
            this->No_28->Size = System::Drawing::Size(46, 32);
            this->No_28->TabIndex = 0;
            this->No_28->Text = L"28";
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel10->Controls->Add(this->MG_12);
            this->panel10->Controls->Add(this->No_12);
            this->panel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel10->Location = System::Drawing::Point(456, 283);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(142, 180);
            this->panel10->TabIndex = 12;
            // 
            // MG_12
            // 
            this->MG_12->AutoSize = true;
            this->MG_12->Location = System::Drawing::Point(17, 90);
            this->MG_12->Name = L"MG_12";
            this->MG_12->Size = System::Drawing::Size(104, 64);
            this->MG_12->TabIndex = 1;
            this->MG_12->Text = L"Muscle\r\nGroup";
            // 
            // No_12
            // 
            this->No_12->AutoSize = true;
            this->No_12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_12->Location = System::Drawing::Point(46, 26);
            this->No_12->Name = L"No_12";
            this->No_12->Size = System::Drawing::Size(46, 32);
            this->No_12->TabIndex = 0;
            this->No_12->Text = L"12";
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel11->Controls->Add(this->MG_20);
            this->panel11->Controls->Add(this->No_20);
            this->panel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel11->Location = System::Drawing::Point(456, 469);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(142, 180);
            this->panel11->TabIndex = 14;
            // 
            // MG_20
            // 
            this->MG_20->AutoSize = true;
            this->MG_20->Location = System::Drawing::Point(17, 90);
            this->MG_20->Name = L"MG_20";
            this->MG_20->Size = System::Drawing::Size(104, 64);
            this->MG_20->TabIndex = 1;
            this->MG_20->Text = L"Muscle\r\nGroup";
            // 
            // No_20
            // 
            this->No_20->AutoSize = true;
            this->No_20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_20->Location = System::Drawing::Point(46, 32);
            this->No_20->Name = L"No_20";
            this->No_20->Size = System::Drawing::Size(46, 32);
            this->No_20->TabIndex = 0;
            this->No_20->Text = L"20";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel12->Controls->Add(this->MG_4);
            this->panel12->Controls->Add(this->No_4);
            this->panel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel12->Location = System::Drawing::Point(456, 97);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(142, 180);
            this->panel12->TabIndex = 10;
            // 
            // MG_4
            // 
            this->MG_4->AutoSize = true;
            this->MG_4->Location = System::Drawing::Point(17, 90);
            this->MG_4->Name = L"MG_4";
            this->MG_4->Size = System::Drawing::Size(104, 64);
            this->MG_4->TabIndex = 1;
            this->MG_4->Text = L"Muscle\r\nGroup";
            // 
            // No_4
            // 
            this->No_4->AutoSize = true;
            this->No_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_4->Location = System::Drawing::Point(52, 26);
            this->No_4->Name = L"No_4";
            this->No_4->Size = System::Drawing::Size(30, 32);
            this->No_4->TabIndex = 0;
            this->No_4->Text = L"4";
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel13->Controls->Add(this->MG_27);
            this->panel13->Controls->Add(this->No_27);
            this->panel13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel13->Location = System::Drawing::Point(308, 655);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(142, 180);
            this->panel13->TabIndex = 15;
            // 
            // MG_27
            // 
            this->MG_27->AutoSize = true;
            this->MG_27->Location = System::Drawing::Point(17, 90);
            this->MG_27->Name = L"MG_27";
            this->MG_27->Size = System::Drawing::Size(104, 64);
            this->MG_27->TabIndex = 1;
            this->MG_27->Text = L"Muscle\r\nGroup";
            // 
            // No_27
            // 
            this->No_27->AutoSize = true;
            this->No_27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_27->Location = System::Drawing::Point(46, 32);
            this->No_27->Name = L"No_27";
            this->No_27->Size = System::Drawing::Size(46, 32);
            this->No_27->TabIndex = 0;
            this->No_27->Text = L"27";
            // 
            // panel14
            // 
            this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel14->Controls->Add(this->MG_11);
            this->panel14->Controls->Add(this->No_11);
            this->panel14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel14->Location = System::Drawing::Point(308, 283);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(142, 180);
            this->panel14->TabIndex = 11;
            // 
            // MG_11
            // 
            this->MG_11->AutoSize = true;
            this->MG_11->Location = System::Drawing::Point(17, 90);
            this->MG_11->Name = L"MG_11";
            this->MG_11->Size = System::Drawing::Size(104, 64);
            this->MG_11->TabIndex = 1;
            this->MG_11->Text = L"Muscle\r\nGroup";
            // 
            // No_11
            // 
            this->No_11->AutoSize = true;
            this->No_11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_11->Location = System::Drawing::Point(46, 26);
            this->No_11->Name = L"No_11";
            this->No_11->Size = System::Drawing::Size(46, 32);
            this->No_11->TabIndex = 0;
            this->No_11->Text = L"11";
            // 
            // panel15
            // 
            this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel15->Controls->Add(this->MG_19);
            this->panel15->Controls->Add(this->No_19);
            this->panel15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel15->Location = System::Drawing::Point(308, 469);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(142, 180);
            this->panel15->TabIndex = 13;
            // 
            // MG_19
            // 
            this->MG_19->AutoSize = true;
            this->MG_19->Location = System::Drawing::Point(17, 90);
            this->MG_19->Name = L"MG_19";
            this->MG_19->Size = System::Drawing::Size(104, 64);
            this->MG_19->TabIndex = 1;
            this->MG_19->Text = L"Muscle\r\nGroup";
            // 
            // No_19
            // 
            this->No_19->AutoSize = true;
            this->No_19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_19->Location = System::Drawing::Point(46, 32);
            this->No_19->Name = L"No_19";
            this->No_19->Size = System::Drawing::Size(46, 32);
            this->No_19->TabIndex = 0;
            this->No_19->Text = L"19";
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel16->Controls->Add(this->MG_3);
            this->panel16->Controls->Add(this->No_3);
            this->panel16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel16->Location = System::Drawing::Point(308, 97);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(142, 180);
            this->panel16->TabIndex = 9;
            // 
            // MG_3
            // 
            this->MG_3->AutoSize = true;
            this->MG_3->Location = System::Drawing::Point(17, 90);
            this->MG_3->Name = L"MG_3";
            this->MG_3->Size = System::Drawing::Size(104, 64);
            this->MG_3->TabIndex = 1;
            this->MG_3->Text = L"Muscle\r\nGroup";
            // 
            // No_3
            // 
            this->No_3->AutoSize = true;
            this->No_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_3->Location = System::Drawing::Point(52, 26);
            this->No_3->Name = L"No_3";
            this->No_3->Size = System::Drawing::Size(30, 32);
            this->No_3->TabIndex = 0;
            this->No_3->Text = L"3";
            // 
            // panel17
            // 
            this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel17->Controls->Add(this->MG_30);
            this->panel17->Controls->Add(this->No_30);
            this->panel17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel17->Location = System::Drawing::Point(752, 655);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(142, 180);
            this->panel17->TabIndex = 16;
            // 
            // MG_30
            // 
            this->MG_30->AutoSize = true;
            this->MG_30->Location = System::Drawing::Point(17, 90);
            this->MG_30->Name = L"MG_30";
            this->MG_30->Size = System::Drawing::Size(104, 64);
            this->MG_30->TabIndex = 1;
            this->MG_30->Text = L"Muscle\r\nGroup";
            // 
            // No_30
            // 
            this->No_30->AutoSize = true;
            this->No_30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_30->Location = System::Drawing::Point(46, 32);
            this->No_30->Name = L"No_30";
            this->No_30->Size = System::Drawing::Size(46, 32);
            this->No_30->TabIndex = 0;
            this->No_30->Text = L"30";
            // 
            // panel18
            // 
            this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel18->Controls->Add(this->MG_14);
            this->panel18->Controls->Add(this->No_14);
            this->panel18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel18->Location = System::Drawing::Point(752, 283);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(142, 180);
            this->panel18->TabIndex = 12;
            // 
            // MG_14
            // 
            this->MG_14->AutoSize = true;
            this->MG_14->Location = System::Drawing::Point(17, 90);
            this->MG_14->Name = L"MG_14";
            this->MG_14->Size = System::Drawing::Size(104, 64);
            this->MG_14->TabIndex = 1;
            this->MG_14->Text = L"Muscle\r\nGroup";
            // 
            // No_14
            // 
            this->No_14->AutoSize = true;
            this->No_14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_14->Location = System::Drawing::Point(46, 32);
            this->No_14->Name = L"No_14";
            this->No_14->Size = System::Drawing::Size(46, 32);
            this->No_14->TabIndex = 0;
            this->No_14->Text = L"14";
            // 
            // panel19
            // 
            this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel19->Controls->Add(this->MG_22);
            this->panel19->Controls->Add(this->No_22);
            this->panel19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel19->Location = System::Drawing::Point(752, 469);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(142, 180);
            this->panel19->TabIndex = 14;
            // 
            // MG_22
            // 
            this->MG_22->AutoSize = true;
            this->MG_22->Location = System::Drawing::Point(17, 90);
            this->MG_22->Name = L"MG_22";
            this->MG_22->Size = System::Drawing::Size(104, 64);
            this->MG_22->TabIndex = 1;
            this->MG_22->Text = L"Muscle\r\nGroup";
            // 
            // No_22
            // 
            this->No_22->AutoSize = true;
            this->No_22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_22->Location = System::Drawing::Point(46, 32);
            this->No_22->Name = L"No_22";
            this->No_22->Size = System::Drawing::Size(46, 32);
            this->No_22->TabIndex = 0;
            this->No_22->Text = L"22";
            // 
            // panel20
            // 
            this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel20->Controls->Add(this->MG_6);
            this->panel20->Controls->Add(this->No_6);
            this->panel20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel20->Location = System::Drawing::Point(752, 97);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(142, 180);
            this->panel20->TabIndex = 10;
            // 
            // MG_6
            // 
            this->MG_6->AutoSize = true;
            this->MG_6->Location = System::Drawing::Point(17, 90);
            this->MG_6->Name = L"MG_6";
            this->MG_6->Size = System::Drawing::Size(104, 64);
            this->MG_6->TabIndex = 1;
            this->MG_6->Text = L"Muscle\r\nGroup";
            // 
            // No_6
            // 
            this->No_6->AutoSize = true;
            this->No_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_6->Location = System::Drawing::Point(52, 26);
            this->No_6->Name = L"No_6";
            this->No_6->Size = System::Drawing::Size(30, 32);
            this->No_6->TabIndex = 0;
            this->No_6->Text = L"6";
            // 
            // panel21
            // 
            this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel21->Controls->Add(this->MG_29);
            this->panel21->Controls->Add(this->No_29);
            this->panel21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel21->Location = System::Drawing::Point(604, 655);
            this->panel21->Name = L"panel21";
            this->panel21->Size = System::Drawing::Size(142, 180);
            this->panel21->TabIndex = 15;
            // 
            // MG_29
            // 
            this->MG_29->AutoSize = true;
            this->MG_29->Location = System::Drawing::Point(17, 90);
            this->MG_29->Name = L"MG_29";
            this->MG_29->Size = System::Drawing::Size(104, 64);
            this->MG_29->TabIndex = 1;
            this->MG_29->Text = L"Muscle\r\nGroup";
            // 
            // No_29
            // 
            this->No_29->AutoSize = true;
            this->No_29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_29->Location = System::Drawing::Point(46, 32);
            this->No_29->Name = L"No_29";
            this->No_29->Size = System::Drawing::Size(46, 32);
            this->No_29->TabIndex = 0;
            this->No_29->Text = L"29";
            // 
            // panel22
            // 
            this->panel22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel22->Controls->Add(this->MG_13);
            this->panel22->Controls->Add(this->No_13);
            this->panel22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel22->Location = System::Drawing::Point(604, 283);
            this->panel22->Name = L"panel22";
            this->panel22->Size = System::Drawing::Size(142, 180);
            this->panel22->TabIndex = 11;
            // 
            // MG_13
            // 
            this->MG_13->AutoSize = true;
            this->MG_13->Location = System::Drawing::Point(17, 90);
            this->MG_13->Name = L"MG_13";
            this->MG_13->Size = System::Drawing::Size(104, 64);
            this->MG_13->TabIndex = 1;
            this->MG_13->Text = L"Muscle\r\nGroup";
            // 
            // No_13
            // 
            this->No_13->AutoSize = true;
            this->No_13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_13->Location = System::Drawing::Point(46, 26);
            this->No_13->Name = L"No_13";
            this->No_13->Size = System::Drawing::Size(46, 32);
            this->No_13->TabIndex = 0;
            this->No_13->Text = L"13";
            // 
            // panel23
            // 
            this->panel23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel23->Controls->Add(this->MG_21);
            this->panel23->Controls->Add(this->No_21);
            this->panel23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel23->Location = System::Drawing::Point(604, 469);
            this->panel23->Name = L"panel23";
            this->panel23->Size = System::Drawing::Size(142, 180);
            this->panel23->TabIndex = 13;
            // 
            // MG_21
            // 
            this->MG_21->AutoSize = true;
            this->MG_21->Location = System::Drawing::Point(17, 90);
            this->MG_21->Name = L"MG_21";
            this->MG_21->Size = System::Drawing::Size(104, 64);
            this->MG_21->TabIndex = 1;
            this->MG_21->Text = L"Muscle\r\nGroup";
            // 
            // No_21
            // 
            this->No_21->AutoSize = true;
            this->No_21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_21->Location = System::Drawing::Point(46, 32);
            this->No_21->Name = L"No_21";
            this->No_21->Size = System::Drawing::Size(46, 32);
            this->No_21->TabIndex = 0;
            this->No_21->Text = L"21";
            // 
            // panel24
            // 
            this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel24->Controls->Add(this->MG_5);
            this->panel24->Controls->Add(this->No_5);
            this->panel24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel24->Location = System::Drawing::Point(604, 97);
            this->panel24->Name = L"panel24";
            this->panel24->Size = System::Drawing::Size(142, 180);
            this->panel24->TabIndex = 9;
            // 
            // MG_5
            // 
            this->MG_5->AutoSize = true;
            this->MG_5->Location = System::Drawing::Point(17, 90);
            this->MG_5->Name = L"MG_5";
            this->MG_5->Size = System::Drawing::Size(104, 64);
            this->MG_5->TabIndex = 1;
            this->MG_5->Text = L"Muscle\r\nGroup";
            // 
            // No_5
            // 
            this->No_5->AutoSize = true;
            this->No_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_5->Location = System::Drawing::Point(52, 26);
            this->No_5->Name = L"No_5";
            this->No_5->Size = System::Drawing::Size(30, 32);
            this->No_5->TabIndex = 0;
            this->No_5->Text = L"5";
            // 
            // Cell_16
            // 
            this->Cell_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->Cell_16->Controls->Add(this->MG_16);
            this->Cell_16->Controls->Add(this->No_16);
            this->Cell_16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cell_16->Location = System::Drawing::Point(1048, 283);
            this->Cell_16->Name = L"Cell_16";
            this->Cell_16->Size = System::Drawing::Size(142, 180);
            this->Cell_16->TabIndex = 20;
            // 
            // MG_16
            // 
            this->MG_16->AutoSize = true;
            this->MG_16->Location = System::Drawing::Point(17, 90);
            this->MG_16->Name = L"MG_16";
            this->MG_16->Size = System::Drawing::Size(104, 64);
            this->MG_16->TabIndex = 1;
            this->MG_16->Text = L"Muscle\r\nGroup";
            // 
            // No_16
            // 
            this->No_16->AutoSize = true;
            this->No_16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_16->Location = System::Drawing::Point(46, 32);
            this->No_16->Name = L"No_16";
            this->No_16->Size = System::Drawing::Size(46, 32);
            this->No_16->TabIndex = 0;
            this->No_16->Text = L"16";
            // 
            // panel27
            // 
            this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel27->Controls->Add(this->MG_24);
            this->panel27->Controls->Add(this->No_24);
            this->panel27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel27->Location = System::Drawing::Point(1048, 469);
            this->panel27->Name = L"panel27";
            this->panel27->Size = System::Drawing::Size(142, 180);
            this->panel27->TabIndex = 22;
            // 
            // MG_24
            // 
            this->MG_24->AutoSize = true;
            this->MG_24->Location = System::Drawing::Point(17, 90);
            this->MG_24->Name = L"MG_24";
            this->MG_24->Size = System::Drawing::Size(104, 64);
            this->MG_24->TabIndex = 1;
            this->MG_24->Text = L"Muscle\r\nGroup";
            // 
            // No_24
            // 
            this->No_24->AutoSize = true;
            this->No_24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_24->Location = System::Drawing::Point(46, 32);
            this->No_24->Name = L"No_24";
            this->No_24->Size = System::Drawing::Size(46, 32);
            this->No_24->TabIndex = 0;
            this->No_24->Text = L"24";
            // 
            // panel28
            // 
            this->panel28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel28->Controls->Add(this->MG_8);
            this->panel28->Controls->Add(this->No_8);
            this->panel28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel28->Location = System::Drawing::Point(1048, 97);
            this->panel28->Name = L"panel28";
            this->panel28->Size = System::Drawing::Size(142, 180);
            this->panel28->TabIndex = 18;
            // 
            // MG_8
            // 
            this->MG_8->AutoSize = true;
            this->MG_8->Location = System::Drawing::Point(17, 90);
            this->MG_8->Name = L"MG_8";
            this->MG_8->Size = System::Drawing::Size(104, 64);
            this->MG_8->TabIndex = 1;
            this->MG_8->Text = L"Muscle\r\nGroup";
            // 
            // No_8
            // 
            this->No_8->AutoSize = true;
            this->No_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_8->Location = System::Drawing::Point(52, 26);
            this->No_8->Name = L"No_8";
            this->No_8->Size = System::Drawing::Size(30, 32);
            this->No_8->TabIndex = 0;
            this->No_8->Text = L"8";
            // 
            // panel29
            // 
            this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel29->Controls->Add(this->MG_31);
            this->panel29->Controls->Add(this->No_31);
            this->panel29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel29->Location = System::Drawing::Point(900, 655);
            this->panel29->Name = L"panel29";
            this->panel29->Size = System::Drawing::Size(142, 180);
            this->panel29->TabIndex = 23;
            // 
            // MG_31
            // 
            this->MG_31->AutoSize = true;
            this->MG_31->Location = System::Drawing::Point(17, 90);
            this->MG_31->Name = L"MG_31";
            this->MG_31->Size = System::Drawing::Size(104, 64);
            this->MG_31->TabIndex = 1;
            this->MG_31->Text = L"Muscle\r\nGroup";
            // 
            // No_31
            // 
            this->No_31->AutoSize = true;
            this->No_31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_31->Location = System::Drawing::Point(46, 32);
            this->No_31->Name = L"No_31";
            this->No_31->Size = System::Drawing::Size(46, 32);
            this->No_31->TabIndex = 0;
            this->No_31->Text = L"31";
            // 
            // panel30
            // 
            this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel30->Controls->Add(this->MG_15);
            this->panel30->Controls->Add(this->No_15);
            this->panel30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel30->Location = System::Drawing::Point(900, 283);
            this->panel30->Name = L"panel30";
            this->panel30->Size = System::Drawing::Size(142, 180);
            this->panel30->TabIndex = 19;
            // 
            // MG_15
            // 
            this->MG_15->AutoSize = true;
            this->MG_15->Location = System::Drawing::Point(17, 90);
            this->MG_15->Name = L"MG_15";
            this->MG_15->Size = System::Drawing::Size(104, 64);
            this->MG_15->TabIndex = 1;
            this->MG_15->Text = L"Muscle\r\nGroup";
            // 
            // No_15
            // 
            this->No_15->AutoSize = true;
            this->No_15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_15->Location = System::Drawing::Point(46, 32);
            this->No_15->Name = L"No_15";
            this->No_15->Size = System::Drawing::Size(46, 32);
            this->No_15->TabIndex = 0;
            this->No_15->Text = L"15";
            // 
            // panel31
            // 
            this->panel31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel31->Controls->Add(this->MG_23);
            this->panel31->Controls->Add(this->No_23);
            this->panel31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel31->Location = System::Drawing::Point(900, 469);
            this->panel31->Name = L"panel31";
            this->panel31->Size = System::Drawing::Size(142, 180);
            this->panel31->TabIndex = 21;
            // 
            // MG_23
            // 
            this->MG_23->AutoSize = true;
            this->MG_23->Location = System::Drawing::Point(17, 90);
            this->MG_23->Name = L"MG_23";
            this->MG_23->Size = System::Drawing::Size(104, 64);
            this->MG_23->TabIndex = 1;
            this->MG_23->Text = L"Muscle\r\nGroup";
            // 
            // No_23
            // 
            this->No_23->AutoSize = true;
            this->No_23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_23->Location = System::Drawing::Point(46, 32);
            this->No_23->Name = L"No_23";
            this->No_23->Size = System::Drawing::Size(46, 32);
            this->No_23->TabIndex = 0;
            this->No_23->Text = L"23";
            // 
            // panel32
            // 
            this->panel32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)));
            this->panel32->Controls->Add(this->MG_7);
            this->panel32->Controls->Add(this->No_7);
            this->panel32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel32->Location = System::Drawing::Point(900, 97);
            this->panel32->Name = L"panel32";
            this->panel32->Size = System::Drawing::Size(142, 180);
            this->panel32->TabIndex = 17;
            // 
            // MG_7
            // 
            this->MG_7->AutoSize = true;
            this->MG_7->Location = System::Drawing::Point(17, 90);
            this->MG_7->Name = L"MG_7";
            this->MG_7->Size = System::Drawing::Size(104, 64);
            this->MG_7->TabIndex = 1;
            this->MG_7->Text = L"Muscle\r\nGroup";
            // 
            // No_7
            // 
            this->No_7->AutoSize = true;
            this->No_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->No_7->Location = System::Drawing::Point(52, 26);
            this->No_7->Name = L"No_7";
            this->No_7->Size = System::Drawing::Size(30, 32);
            this->No_7->TabIndex = 0;
            this->No_7->Text = L"7";
            // 
            // ExercisePlan
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->ClientSize = System::Drawing::Size(1203, 844);
            this->Controls->Add(this->panel17);
            this->Controls->Add(this->Cell_16);
            this->Controls->Add(this->panel9);
            this->Controls->Add(this->panel27);
            this->Controls->Add(this->panel18);
            this->Controls->Add(this->panel28);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->panel29);
            this->Controls->Add(this->panel19);
            this->Controls->Add(this->panel30);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->panel31);
            this->Controls->Add(this->panel20);
            this->Controls->Add(this->panel32);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel21);
            this->Controls->Add(this->panel11);
            this->Controls->Add(this->panel22);
            this->Controls->Add(this->panel23);
            this->Controls->Add(this->panel6);
            this->Controls->Add(this->panel24);
            this->Controls->Add(this->panel12);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel13);
            this->Controls->Add(this->panel7);
            this->Controls->Add(this->panel14);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel15);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->panel16);
            this->Controls->Add(this->Cell_1);
            this->Controls->Add(this->panel1);
            this->Name = L"ExercisePlan";
            this->Text = L"Exercise Plan";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->Cell_1->ResumeLayout(false);
            this->Cell_1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            this->panel13->ResumeLayout(false);
            this->panel13->PerformLayout();
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            this->panel15->ResumeLayout(false);
            this->panel15->PerformLayout();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            this->panel17->ResumeLayout(false);
            this->panel17->PerformLayout();
            this->panel18->ResumeLayout(false);
            this->panel18->PerformLayout();
            this->panel19->ResumeLayout(false);
            this->panel19->PerformLayout();
            this->panel20->ResumeLayout(false);
            this->panel20->PerformLayout();
            this->panel21->ResumeLayout(false);
            this->panel21->PerformLayout();
            this->panel22->ResumeLayout(false);
            this->panel22->PerformLayout();
            this->panel23->ResumeLayout(false);
            this->panel23->PerformLayout();
            this->panel24->ResumeLayout(false);
            this->panel24->PerformLayout();
            this->Cell_16->ResumeLayout(false);
            this->Cell_16->PerformLayout();
            this->panel27->ResumeLayout(false);
            this->panel27->PerformLayout();
            this->panel28->ResumeLayout(false);
            this->panel28->PerformLayout();
            this->panel29->ResumeLayout(false);
            this->panel29->PerformLayout();
            this->panel30->ResumeLayout(false);
            this->panel30->PerformLayout();
            this->panel31->ResumeLayout(false);
            this->panel31->PerformLayout();
            this->panel32->ResumeLayout(false);
            this->panel32->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion





};
}
