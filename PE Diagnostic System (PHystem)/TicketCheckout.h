#pragma once

#include "TicketMenu.h"
#include "SeatSelection.h"
#include <cstdlib>
#include <ctime>
#include <cliext/list>

namespace YourProjectNamespace {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class TicketCheckout : public System::Windows::Forms::Form {
    public:
        TicketMenu^ ticketMenu;
        SeatSelection^ seatSelection;
        int currentSeatIndex;

        TicketCheckout(TicketMenu^ ticketMenu, SeatSelection^ seatSelection)
            : ticketMenu(ticketMenu), seatSelection(seatSelection), currentSeatIndex(0) {
            InitializeComponent();
            GenerateNextTicket();
        }

    protected:
        ~TicketCheckout() {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ labelTrainName;
        System::Windows::Forms::Label^ labelStart;
        System::Windows::Forms::Label^ labelDestination;
        System::Windows::Forms::Label^ labelFare;
        System::Windows::Forms::Label^ labelSeat;
        System::Windows::Forms::Button^ buttonConfirm;
        System::Windows::Forms::Button^ buttonExit;

        void InitializeComponent(void) {
            this->labelTrainName = (gcnew System::Windows::Forms::Label());
            this->labelStart = (gcnew System::Windows::Forms::Label());
            this->labelDestination = (gcnew System::Windows::Forms::Label());
            this->labelFare = (gcnew System::Windows::Forms::Label());
            this->labelSeat = (gcnew System::Windows::Forms::Label());
            this->buttonConfirm = (gcnew System::Windows::Forms::Button());
            this->buttonExit = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelTrainName
            // 
            this->labelTrainName->AutoSize = true;
            this->labelTrainName->Location = System::Drawing::Point(30, 30);
            this->labelTrainName->Name = L"labelTrainName";
            this->labelTrainName->Size = System::Drawing::Size(81, 16);
            this->labelTrainName->TabIndex = 0;
            this->labelTrainName->Text = L"Train Name:";
            // 
            // labelStart
            // 
            this->labelStart->AutoSize = true;
            this->labelStart->Location = System::Drawing::Point(30, 70);
            this->labelStart->Name = L"labelStart";
            this->labelStart->Size = System::Drawing::Size(88, 16);
            this->labelStart->TabIndex = 1;
            this->labelStart->Text = L"Starting Point:";
            // 
            // labelDestination
            // 
            this->labelDestination->AutoSize = true;
            this->labelDestination->Location = System::Drawing::Point(30, 110);
            this->labelDestination->Name = L"labelDestination";
            this->labelDestination->Size = System::Drawing::Size(77, 16);
            this->labelDestination->TabIndex = 2;
            this->labelDestination->Text = L"Destination:";
            // 
            // labelFare
            // 
            this->labelFare->AutoSize = true;
            this->labelFare->Location = System::Drawing::Point(30, 150);
            this->labelFare->Name = L"labelFare";
            this->labelFare->Size = System::Drawing::Size(38, 16);
            this->labelFare->TabIndex = 3;
            this->labelFare->Text = L"Fare:";
            // 
            // labelSeat
            // 
            this->labelSeat->AutoSize = true;
            this->labelSeat->Location = System::Drawing::Point(30, 190);
            this->labelSeat->Name = L"labelSeat";
            this->labelSeat->Size = System::Drawing::Size(38, 16);
            this->labelSeat->TabIndex = 4;
            this->labelSeat->Text = L"Seat:";
            // 
            // buttonConfirm
            // 
            this->buttonConfirm->Location = System::Drawing::Point(30, 230);
            this->buttonConfirm->Name = L"buttonConfirm";
            this->buttonConfirm->Size = System::Drawing::Size(100, 30);
            this->buttonConfirm->TabIndex = 5;
            this->buttonConfirm->Text = L"Confirm";
            this->buttonConfirm->UseVisualStyleBackColor = true;
            this->buttonConfirm->Click += gcnew System::EventHandler(this, &TicketCheckout::buttonConfirm_Click);
            // 
            // buttonExit
            // 
            this->buttonExit->Location = System::Drawing::Point(150, 230);
            this->buttonExit->Name = L"buttonExit";
            this->buttonExit->Size = System::Drawing::Size(100, 30);
            this->buttonExit->TabIndex = 6;
            this->buttonExit->Text = L"Exit";
            this->buttonExit->UseVisualStyleBackColor = true;
            this->buttonExit->Click += gcnew System::EventHandler(this, &TicketCheckout::buttonExit_Click);
            // 
            // TicketCheckout
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(300, 300);
            this->Controls->Add(this->buttonExit);
            this->Controls->Add(this->buttonConfirm);
            this->Controls->Add(this->labelSeat);
            this->Controls->Add(this->labelFare);
            this->Controls->Add(this->labelDestination);
            this->Controls->Add(this->labelStart);
            this->Controls->Add(this->labelTrainName);
            this->Name = L"TicketCheckout";
            this->Text = L"Ticket Checkout";
            this->Load += gcnew System::EventHandler(this, &TicketCheckout::TicketCheckout_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }

        void GenerateNextTicket() {
            cliext::list<String^>^ selectedSeats = seatSelection->GetSelectedSeats();
            if (currentSeatIndex < selectedSeats->size()) {
                String^ trainName = GenerateTrainName();
                String^ start = ticketMenu->GetStartingPoint();
                String^ destination = ticketMenu->GetDestination();
                int fare = ticketMenu->GetFare();

                // Accessing the seat using an iterator
                cliext::list<String^>::iterator it = selectedSeats->begin();
                for (int i = 0; i < currentSeatIndex; ++i) {
                    ++it;
                }
                String^ seat = *it;

                labelTrainName->Text = "Train Name: " + trainName;
                labelStart->Text = "Starting Point: " + start;
                labelDestination->Text = "Destination: " + destination;
                labelFare->Text = "Fare: " + fare.ToString() + " PHP";
                labelSeat->Text = "Seat: " + seat;
            }
            else {
                MessageBox::Show("All tickets generated.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
                this->Close();
            }
        }

        String^ GenerateTrainName() {
            srand(static_cast<unsigned int>(time(0)));
            int trainNumber = rand() % 500 + 1;
            return "NE " + trainNumber.ToString("D3");
        }

        void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
            // Here you would add code to save the ticket information to a file or print it
            currentSeatIndex++;
            GenerateNextTicket();
        }

        void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }

    private: System::Void TicketCheckout_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
