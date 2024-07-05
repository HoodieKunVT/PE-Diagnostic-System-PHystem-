#pragma once

#include "Train.h"
#include "TrainStation.h"

namespace YourProjectNamespace {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class SchedMenu : public System::Windows::Forms::Form {
    public:
        SchedMenu(void) {
            InitializeComponent();
            InitializeTrainSchedule();
        }

    protected:
        ~SchedMenu() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Timer^ timer1;
        System::ComponentModel::IContainer^ components;
        System::Windows::Forms::Button^ closeButton;
        List<Train^>^ trains;
        List<TrainStation^>^ stations;

        void InitializeComponent(void) {
            this->components = (gcnew System::ComponentModel::Container());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->closeButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();

            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(12, 12);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->Size = System::Drawing::Size(1008, 526);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &SchedMenu::dataGridView1_CellFormatting);
            this->dataGridView1->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
            this->dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);

            // 
            // closeButton
            // 
            this->closeButton->Location = System::Drawing::Point(12, 550);
            this->closeButton->Name = L"closeButton";
            this->closeButton->Size = System::Drawing::Size(100, 30);
            this->closeButton->TabIndex = 1;
            this->closeButton->Text = L"Close";
            this->closeButton->UseVisualStyleBackColor = true;
            this->closeButton->Click += gcnew System::EventHandler(this, &SchedMenu::closeButton_Click);

            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &SchedMenu::timer1_Tick);

            // 
            // SchedMenu
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1032, 590);
            this->Controls->Add(this->closeButton);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"SchedMenu";
            this->Text = L"Train Schedule";
            this->Load += gcnew System::EventHandler(this, &SchedMenu::SchedMenu_Load);
            this->Resize += gcnew System::EventHandler(this, &SchedMenu::SchedMenu_Resize);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
        }

        void InitializeTrainSchedule() {
            trains = gcnew List<Train^>();
            stations = gcnew List<TrainStation^>();

            // Define the stations
            stations->Add(gcnew TrainStation("Baguio City", 0));
            stations->Add(gcnew TrainStation("Manila City", 10));
            stations->Add(gcnew TrainStation("Taguig", 10));
            stations->Add(gcnew TrainStation("Imus", 10));
            stations->Add(gcnew TrainStation("Dasmarinas", 10));
            stations->Add(gcnew TrainStation("Tagaytay", 10));
            stations->Add(gcnew TrainStation("Batangas City", 10));
            stations->Add(gcnew TrainStation("Mindoro", 10));
            stations->Add(gcnew TrainStation("Masbate City", 10));
            stations->Add(gcnew TrainStation("Legazpi City", 10));
            stations->Add(gcnew TrainStation("Sorsogon City", 10));
            stations->Add(gcnew TrainStation("Cabalogan City", 10));
            stations->Add(gcnew TrainStation("Tacloban City", 10));
            stations->Add(gcnew TrainStation("Leyte", 10));
            stations->Add(gcnew TrainStation("Cebu City", 10));
            stations->Add(gcnew TrainStation("Bacolod", 10));
            stations->Add(gcnew TrainStation("Iloilo City", 10));
            stations->Add(gcnew TrainStation("Zamboanga", 10));
            stations->Add(gcnew TrainStation("Cotabato City", 10));
            stations->Add(gcnew TrainStation("Davao City", 2));

            // Generate trains
            Random^ rand = gcnew Random();
            for (int i = 0; i < 10; i++) {
                String^ trainName = "NE " + rand->Next(1, 501).ToString("D3");
                int startIndex = i % stations->Count;
                trains->Add(gcnew Train(trainName, stations, startIndex));
            }

            // Set up DataGridView columns
            dataGridView1->Columns->Add("TrainName", "Train Name");
            dataGridView1->Columns->Add("CurrentStation", "Current Station");
            dataGridView1->Columns->Add("Status", "Status");

            UpdateDataGridView();
            timer1->Start();
        }

        void UpdateDataGridView() {
            if (this->InvokeRequired) {
                this->BeginInvoke(gcnew MethodInvoker(this, &SchedMenu::UpdateDataGridView));
            }
            else {
                dataGridView1->Rows->Clear();
                for each (Train ^ train in trains) {
                    dataGridView1->Rows->Add(train->TrainName, train->CurrentStation->Name, train->Status);
                }
            }
        }

        void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
            for each (Train ^ train in trains) {
                train->UpdateStatus();
            }
            UpdateDataGridView();
        }

        void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
            if (e->ColumnIndex == 2) { // Status column
                String^ status = e->Value->ToString();
                if (status == "On Time") {
                    e->CellStyle->ForeColor = System::Drawing::Color::Yellow;
                }
                else if (status == "Arriving") {
                    e->CellStyle->ForeColor = System::Drawing::Color::Orange;
                }
                else if (status == "Arrived") {
                    e->CellStyle->ForeColor = System::Drawing::Color::Red;
                }
                else if (status == "Departing") {
                    e->CellStyle->ForeColor = System::Drawing::Color::Green;
                }
            }
        }

        void SchedMenu_Load(System::Object^ sender, System::EventArgs^ e) {
            UpdateDataGridView();
        }

        void SchedMenu_Resize(System::Object^ sender, System::EventArgs^ e) {
            dataGridView1->Width = this->ClientSize.Width - 24;
            dataGridView1->Height = this->ClientSize.Height - 64;
            closeButton->Location = System::Drawing::Point(12, this->ClientSize.Height - 40);
        }

        void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }
    };
}
