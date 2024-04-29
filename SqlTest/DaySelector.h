public ref class DaySelector : public System::Windows::Forms::Form
{
public:
    int SelectedDay;

    DaySelector(void)
    {
        InitializeComponent();
    }

protected:
    ~DaySelector()
    {
        if (components)
        {
            delete components;
        }
    }
private: System::Windows::Forms::Button^ confirm_btn;
private: array<System::Windows::Forms::RadioButton^>^ dayButtons;
private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
       void InitializeComponent(void)
       {
           this->SuspendLayout();
           // 
           // DaySelector
           // 
           this->ClientSize = System::Drawing::Size(282, 253);
           this->Name = L"DaySelector";
           this->Load += gcnew System::EventHandler(this, &DaySelector::DaySelector_Load);
           this->ResumeLayout(false);

       }
#pragma endregion

private: System::Void confirm_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    for (int i = 0; i < 7; i++)
    {
        if (this->dayButtons[i]->Checked)
        {
            this->SelectedDay = i + 1;
            break;
        }
    }
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
}
private: System::Void DaySelector_Load(System::Object^ sender, System::EventArgs^ e) {
}
};