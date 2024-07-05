#pragma once

#include "SeatSelection.h"

namespace YourProjectNamespace {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class TicketMenu : public System::Windows::Forms::Form {
    public:
        TicketMenu(void) {
            InitializeComponent();
            PopulateStations();
        }

        String^ GetStartingPoint() {
            return startingPoint; // Return the starting point string
        }

        String^ GetDestination() {
            return destination; // Return the destination string
        }

        int GetFare() {
            return fare; // Return the fare amount
        }

    protected:
        ~TicketMenu() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::ComboBox^ fromComboBox;
        System::Windows::Forms::ComboBox^ toComboBox;
        System::Windows::Forms::Label^ fareLabel;
        System::Windows::Forms::Button^ continueButton;
        System::Windows::Forms::Button^ exitButton;
        System::ComponentModel::Container^ components; // Declare components container
        String^ startingPoint; // Declare starting point
        String^ destination; // Declare destination
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
           int fare; // Declare fare

        void InitializeComponent(void) {
            this->fromComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->toComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->fareLabel = (gcnew System::Windows::Forms::Label());
            this->continueButton = (gcnew System::Windows::Forms::Button());
            this->exitButton = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // fromComboBox
            // 
            this->fromComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->fromComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->fromComboBox->FormattingEnabled = true;
            this->fromComboBox->Location = System::Drawing::Point(50, 50);
            this->fromComboBox->Name = L"fromComboBox";
            this->fromComboBox->Size = System::Drawing::Size(300, 26);
            this->fromComboBox->TabIndex = 0;
            this->fromComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &TicketMenu::CalculateFare);
            // 
            // toComboBox
            // 
            this->toComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->toComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->toComboBox->FormattingEnabled = true;
            this->toComboBox->Location = System::Drawing::Point(50, 111);
            this->toComboBox->Name = L"toComboBox";
            this->toComboBox->Size = System::Drawing::Size(300, 26);
            this->toComboBox->TabIndex = 1;
            this->toComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &TicketMenu::CalculateFare);
            // 
            // fareLabel
            // 
            this->fareLabel->AutoSize = true;
            this->fareLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->fareLabel->ForeColor = System::Drawing::SystemColors::MenuText;
            this->fareLabel->Location = System::Drawing::Point(50, 162);
            this->fareLabel->Name = L"fareLabel";
            this->fareLabel->Size = System::Drawing::Size(102, 20);
            this->fareLabel->TabIndex = 2;
            this->fareLabel->Text = L"Fare: 0 PHP";
            // 
            // continueButton
            // 
            this->continueButton->Enabled = false;
            this->continueButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->continueButton->ForeColor = System::Drawing::SystemColors::MenuText;
            this->continueButton->Location = System::Drawing::Point(50, 217);
            this->continueButton->Name = L"continueButton";
            this->continueButton->Size = System::Drawing::Size(192, 52);
            this->continueButton->TabIndex = 3;
            this->continueButton->Text = L"Continue";
            this->continueButton->UseVisualStyleBackColor = true;
            this->continueButton->Click += gcnew System::EventHandler(this, &TicketMenu::continueButton_Click);
            // 
            // exitButton
            // 
            this->exitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->exitButton->ForeColor = System::Drawing::SystemColors::MenuText;
            this->exitButton->Location = System::Drawing::Point(764, 431);
            this->exitButton->Name = L"exitButton";
            this->exitButton->Size = System::Drawing::Size(136, 49);
            this->exitButton->TabIndex = 4;
            this->exitButton->Text = L"Exit";
            this->exitButton->UseVisualStyleBackColor = true;
            this->exitButton->Click += gcnew System::EventHandler(this, &TicketMenu::exitButton_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(46, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(115, 20);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Starting Point:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(46, 88);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(99, 20);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Destination:";
            // 
            // TicketMenu
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(948, 522);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->exitButton);
            this->Controls->Add(this->continueButton);
            this->Controls->Add(this->fareLabel);
            this->Controls->Add(this->toComboBox);
            this->Controls->Add(this->fromComboBox);
            this->Name = L"TicketMenu";
            this->Text = L"Ticket Menu";
            this->Load += gcnew System::EventHandler(this, &TicketMenu::TicketMenu_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void PopulateStations() {
            array<String^>^ stations = {
                "Baguio City", "Manila City", "Taguig", "Imus", "Dasmarinas",
                "Tagaytay", "Batangas City", "Mindoro", "Masbate City", "Legazpi City",
                "Sorsogon City", "Cabalogan City", "Tacloban City", "Leyte",
                "Cebu City", "Bacolod", "Iloilo City", "Zamboanga", "Cotabato City", "Davao City"
            };

            fromComboBox->Items->AddRange(stations);
            toComboBox->Items->AddRange(stations);
        }

        void CalculateFare(System::Object^ sender, System::EventArgs^ e) {
            if (fromComboBox->SelectedItem != nullptr && toComboBox->SelectedItem != nullptr) {
                int fromIndex = fromComboBox->SelectedIndex;
                int toIndex = toComboBox->SelectedIndex;
                int distance = Math::Abs(toIndex - fromIndex);
                fare = distance * 50; // Set fare
                fareLabel->Text = "Fare: " + fare.ToString() + " PHP";
                continueButton->Enabled = true;
            }
            else {
                fare = 0; // Reset fare
                fareLabel->Text = "Fare: 0 PHP";
                continueButton->Enabled = false;
            }
        }

        void continueButton_Click(System::Object^ sender, System::EventArgs^ e) {
            SeatSelection^ seatSelectionForm = gcnew SeatSelection();
            seatSelectionForm->ShowDialog();
        }

        void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close(); // Close the form when Exit button is clicked
        }

        // Event handler for form load
        System::Void TicketMenu_Load(System::Object^ sender, System::EventArgs^ e) {
            // Any initialization or actions to be performed when the form loads
        }
    };
}
