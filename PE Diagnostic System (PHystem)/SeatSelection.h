#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <cliext/list>

namespace YourProjectNamespace {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace cliext;

    public ref class SeatSelection : public System::Windows::Forms::Form {
    public:
        SeatSelection(void) {
            InitializeComponent();
            InitializeSeats();
        }

        list<String^>^ GetSelectedSeats() {
            return gcnew list<String^>(selectedSeats);
        }

    protected:
        ~SeatSelection() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ confirmButton;
        System::Windows::Forms::Button^ exitButton;
        System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel;
        list<Button^>^ seatButtons;
        list<String^>^ selectedSeats;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void) {
            this->confirmButton = (gcnew System::Windows::Forms::Button());
            this->exitButton = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SuspendLayout();
            // 
            // confirmButton
            // 
            this->confirmButton->Location = System::Drawing::Point(200, 308);
            this->confirmButton->Name = L"confirmButton";
            this->confirmButton->Size = System::Drawing::Size(100, 28);
            this->confirmButton->TabIndex = 0;
            this->confirmButton->Text = L"Confirm";
            this->confirmButton->UseVisualStyleBackColor = true;
            this->confirmButton->Click += gcnew System::EventHandler(this, &SeatSelection::ConfirmButton_Click);
            // 
            // exitButton
            // 
            this->exitButton->Location = System::Drawing::Point(320, 308);
            this->exitButton->Name = L"exitButton";
            this->exitButton->Size = System::Drawing::Size(100, 28);
            this->exitButton->TabIndex = 1;
            this->exitButton->Text = L"Exit";
            this->exitButton->UseVisualStyleBackColor = true;
            this->exitButton->Click += gcnew System::EventHandler(this, &SeatSelection::ExitButton_Click);
            // 
            // tableLayoutPanel
            // 
            this->tableLayoutPanel->ColumnCount = 7;
            for (int i = 0; i < 7; ++i) {
                this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            }
            this->tableLayoutPanel->Location = System::Drawing::Point(13, 12);
            this->tableLayoutPanel->Name = L"tableLayoutPanel";
            this->tableLayoutPanel->RowCount = 5;
            for (int i = 0; i < 5; ++i) {
                this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            }
            this->tableLayoutPanel->Size = System::Drawing::Size(320, 246);
            this->tableLayoutPanel->TabIndex = 2;
            // 
            // SeatSelection
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(467, 369);
            this->Controls->Add(this->confirmButton);
            this->Controls->Add(this->exitButton);
            this->Controls->Add(this->tableLayoutPanel);
            this->Name = L"SeatSelection";
            this->Text = L"Seat Selection";
            this->ResumeLayout(false);

            // Initialize selectedSeats to avoid null reference exception
            this->selectedSeats = gcnew list<String^>();
        }

        void InitializeSeats() {
            array<String^>^ seatLabels = {
                "A1", "A2", "A3", "", "A4", "A5", "A6",
                "B1", "B2", "B3", "", "B4", "B5", "B6",
                "C1", "C2", "C3", "", "C4", "C5", "C6",
                "D1", "D2", "D3", "", "D4", "D5", "D6",
                "E1", "E2", "E3", "", "E4", "E5", "E6"
            };

            seatButtons = gcnew list<Button^>();

            int seatIndex = 0;

            for (int row = 0; row < 5; ++row) {
                for (int col = 0; col < 7; ++col) {
                    Button^ seatButton = gcnew Button();
                    seatButton->Size = System::Drawing::Size(40, 40);
                    seatButton->Text = seatLabels[seatIndex];
                    seatButton->BackColor = Color::Green;

                    if (seatLabels[seatIndex] != "") {
                        seatButton->Click += gcnew System::EventHandler(this, &SeatSelection::SeatButton_Click);
                        seatButtons->push_back(seatButton);
                    }
                    else {
                        seatButton->Enabled = false; // Placeholder button for the gap
                    }

                    this->tableLayoutPanel->Controls->Add(seatButton, col, row);
                    ++seatIndex;
                }
            }
        }

        void SeatButton_Click(System::Object^ sender, System::EventArgs^ e) {
            Button^ clickedButton = safe_cast<Button^>(sender);
            if (clickedButton->BackColor == Color::Green) {
                clickedButton->BackColor = Color::Red;
                selectedSeats->push_back(clickedButton->Text);
            }
            else if (clickedButton->BackColor == Color::Red) {
                clickedButton->BackColor = Color::Green;
                selectedSeats->remove(clickedButton->Text);
            }
        }

        void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
            // Store the selected seats as needed
            MessageBox::Show("Selected seats: " + String::Join(", ", selectedSeats));
        }

        void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }
    };
}
