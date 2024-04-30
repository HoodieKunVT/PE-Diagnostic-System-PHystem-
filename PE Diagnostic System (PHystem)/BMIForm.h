#pragma once


using namespace System;
using namespace System::Windows::Forms;

public ref class BMIForm : public Form
{
public:
    BMIForm(void)
    {
        InitializeComponent();
    }

protected:
    ~BMIForm()
    {
        if (components)
        {
            delete components;
        }
    }
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ HeightBox;

private: System::Windows::Forms::TextBox^ Height;
private: System::Windows::Forms::Label^ Weightbox;
private: System::Windows::Forms::TextBox^ Weight;

private: System::Windows::Forms::Button^ BMIcalc;
private: System::Windows::Forms::TextBox^ ResultBox;
private: System::Windows::Forms::TextBox^ infoBox;
private: System::Windows::Forms::Label^ Result;
private: System::Windows::Forms::Button^ button1;



protected:

private:
    System::ComponentModel::Container^ components;

    void InitializeComponent(void)
    {
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->infoBox = (gcnew System::Windows::Forms::TextBox());
        this->Result = (gcnew System::Windows::Forms::Label());
        this->ResultBox = (gcnew System::Windows::Forms::TextBox());
        this->BMIcalc = (gcnew System::Windows::Forms::Button());
        this->Weightbox = (gcnew System::Windows::Forms::Label());
        this->Weight = (gcnew System::Windows::Forms::TextBox());
        this->HeightBox = (gcnew System::Windows::Forms::Label());
        this->Height = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->panel1->SuspendLayout();
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::SystemColors::Control;
        this->label1->Location = System::Drawing::Point(24, 25);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(364, 25);
        this->label1->TabIndex = 0;
        this->label1->Text = L"BODY MASS INDEX CALCULATOR";
        // 
        // panel1
        // 
        this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
            static_cast<System::Int32>(static_cast<System::Byte>(24)));
        this->panel1->Controls->Add(this->button1);
        this->panel1->Controls->Add(this->infoBox);
        this->panel1->Controls->Add(this->Result);
        this->panel1->Controls->Add(this->ResultBox);
        this->panel1->Controls->Add(this->BMIcalc);
        this->panel1->Controls->Add(this->Weightbox);
        this->panel1->Controls->Add(this->Weight);
        this->panel1->Controls->Add(this->HeightBox);
        this->panel1->Controls->Add(this->Height);
        this->panel1->Location = System::Drawing::Point(26, 69);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(892, 404);
        this->panel1->TabIndex = 1;
        // 
        // infoBox
        // 
        this->infoBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->infoBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->infoBox->Location = System::Drawing::Point(304, 90);
        this->infoBox->Multiline = true;
        this->infoBox->Name = L"infoBox";
        this->infoBox->Size = System::Drawing::Size(532, 229);
        this->infoBox->TabIndex = 7;
        // 
        // Result
        // 
        this->Result->AutoSize = true;
        this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Result->ForeColor = System::Drawing::SystemColors::Control;
        this->Result->Location = System::Drawing::Point(303, 16);
        this->Result->Name = L"Result";
        this->Result->Size = System::Drawing::Size(135, 18);
        this->Result->TabIndex = 6;
        this->Result->Text = L"Your BMI Result:";
        // 
        // ResultBox
        // 
        this->ResultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->ResultBox->Location = System::Drawing::Point(304, 42);
        this->ResultBox->Name = L"ResultBox";
        this->ResultBox->Size = System::Drawing::Size(205, 27);
        this->ResultBox->TabIndex = 5;
        // 
        // BMIcalc
        // 
        this->BMIcalc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->BMIcalc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->BMIcalc->ForeColor = System::Drawing::SystemColors::Control;
        this->BMIcalc->Location = System::Drawing::Point(32, 213);
        this->BMIcalc->Name = L"BMIcalc";
        this->BMIcalc->Size = System::Drawing::Size(196, 52);
        this->BMIcalc->TabIndex = 4;
        this->BMIcalc->Text = L"Calculate";
        this->BMIcalc->UseVisualStyleBackColor = true;
        this->BMIcalc->Click += gcnew System::EventHandler(this, &BMIForm::BMIcalc_Click);
        // 
        // Weightbox
        // 
        this->Weightbox->AutoSize = true;
        this->Weightbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Weightbox->ForeColor = System::Drawing::SystemColors::Control;
        this->Weightbox->Location = System::Drawing::Point(29, 120);
        this->Weightbox->Name = L"Weightbox";
        this->Weightbox->Size = System::Drawing::Size(176, 18);
        this->Weightbox->TabIndex = 3;
        this->Weightbox->Text = L"Weight (In Kilograms):";
        // 
        // Weight
        // 
        this->Weight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Weight->Location = System::Drawing::Point(30, 148);
        this->Weight->Name = L"Weight";
        this->Weight->Size = System::Drawing::Size(205, 27);
        this->Weight->TabIndex = 2;
        // 
        // HeightBox
        // 
        this->HeightBox->AutoSize = true;
        this->HeightBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->HeightBox->ForeColor = System::Drawing::SystemColors::Control;
        this->HeightBox->Location = System::Drawing::Point(26, 19);
        this->HeightBox->Name = L"HeightBox";
        this->HeightBox->Size = System::Drawing::Size(148, 18);
        this->HeightBox->TabIndex = 1;
        this->HeightBox->Text = L"Height (In Meters):";
        // 
        // Height
        // 
        this->Height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->Height->Location = System::Drawing::Point(29, 43);
        this->Height->Name = L"Height";
        this->Height->Size = System::Drawing::Size(205, 27);
        this->Height->TabIndex = 0;
        // 
        // button1
        // 
        this->button1->FlatAppearance->BorderSize = 0;
        this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
        this->button1->Location = System::Drawing::Point(33, 335);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(96, 55);
        this->button1->TabIndex = 8;
        this->button1->Text = L"⏎ ";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &BMIForm::button1_Click);
        // 
        // BMIForm
        // 
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
            static_cast<System::Int32>(static_cast<System::Byte>(18)));
        this->ClientSize = System::Drawing::Size(948, 522);
        this->Controls->Add(this->panel1);
        this->Controls->Add(this->label1);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
        this->Name = L"BMIForm";
        this->Text = L"BMI Form";
        this->panel1->ResumeLayout(false);
        this->panel1->PerformLayout();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
private: System::Void BMIcalc_Click(System::Object^ sender, System::EventArgs^ e) {

    double height, weight, bmi;
    try {
        height = Convert::ToDouble(Height->Text);
        weight = Convert::ToDouble(Weight->Text);

        if (height > 0 && weight > 0) {
            // Calculate BMI
            bmi = weight / (height * height);
            // Display the result
            ResultBox->Text = "" + Convert::ToString(bmi);
            
            if (bmi <= 18.50) {
                infoBox->Text = "What's good? Your Body Mass Index test results just came back and they show that you are underwweight. I would urge you to get checked in the hospital about this. This is normally caused by genetics or your metabolism.";
            }
            else if (bmi > 18.5 && bmi <= 24.9) {
                infoBox->Text = "Hallo! Your BMI Test results just came back and it has shown that you are in the Healthy Weight Range! Keep it up!";
            }
            else if (bmi > 24.9 && bmi <= 29.9) {
                infoBox->Text = "Good day to you! Your BMI Test results just came back and it says here that you are *flips page* Overweight. It is not too late to lose all that! You can consult a nutrionist if you have any questions on how to start losing weight!";
            }
            else { 
                infoBox->Text="Sup! Your BMI test results just came back and it would seem you are on the Obese side. *pats your back* Do not worry my friend. It is not too late to lose all that weight! You can start gradually but not too extreme right off the bat! Just do be reminded to consult any doctor or nutrionist about your plans so you don't hurt yourself in the process! Cheer up! :D";
            }
        }
        else {
            // Input is not positive numbers
            ResultBox->Text = "Please enter positive values for height and weight.";
        }
    }
    catch (System::FormatException^) {
        // Handle format errors if conversion fails
        ResultBox->Text = "Please enter valid numbers for height and weight.";
    }


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
};
