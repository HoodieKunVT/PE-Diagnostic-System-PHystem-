#pragma once
#include "SchedMenu.h"
#include "TicketMenu.h"
#include "TicketCheckout.h"
using namespace YourProjectNamespace;


namespace $safeprojectname$ {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			MainMenuDashboard->Visible = false;
			FormsScreen->Visible = false;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Panel1;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Panel^ MainMenuDashboard;
	private: System::Windows::Forms::Button^ minimize;
	private: System::Windows::Forms::Button^ maximize;

	private:
		bool isDragging = false;
	private: System::Windows::Forms::Button^ SchedBTN;



	private: System::Windows::Forms::Panel^ placeholder1;








	private: System::Windows::Forms::Timer^ HRmenuTransition;
	private: System::Windows::Forms::Timer^ SidebarTransition;
	private: System::Windows::Forms::Button^ button2;







	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;


	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ FormsScreen;

	private: SchedMenu^ schedmnu;
	private: TicketMenu^ ticketmenu;
	private: TicketCheckout^ checkout;
	private: SeatSelection^ seats;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ check;



		   Point startPoint;

	private: System::Void Panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Record the starting point of the drag operation
		isDragging = true;
		startPoint = e->Location;
	}

	private: System::Void Panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Move the form if dragging
		if (isDragging) {
			Point endPoint = Point(e->X - startPoint.X, e->Y - startPoint.Y);
			this->Location = Point(this->Left + endPoint.X, this->Top + endPoint.Y);
		}
	}

	private: System::Void Panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Reset dragging flag
		isDragging = false;
	}
	private: System::Windows::Forms::Button^ HomeButton;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->HomeButton = (gcnew System::Windows::Forms::Button());
			this->minimize = (gcnew System::Windows::Forms::Button());
			this->maximize = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MainMenuDashboard = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SchedBTN = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->check = (gcnew System::Windows::Forms::Button());
			this->placeholder1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HRmenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->SidebarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->FormsScreen = (gcnew System::Windows::Forms::Panel());
			this->Panel1->SuspendLayout();
			this->MainMenuDashboard->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->placeholder1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Panel1->Controls->Add(this->HomeButton);
			this->Panel1->Controls->Add(this->minimize);
			this->Panel1->Controls->Add(this->maximize);
			this->Panel1->Controls->Add(this->ExitButton);
			this->Panel1->Controls->Add(this->label1);
			this->Panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel1->Location = System::Drawing::Point(0, 0);
			this->Panel1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(1262, 34);
			this->Panel1->TabIndex = 0;
			this->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel1_Paint);
			this->Panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Panel1_MouseMove);
			this->Panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Panel1_MouseDown);
			this->Panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Panel1_MouseMove);
			this->Panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Panel1_MouseUp);
			// 
			// HomeButton
			// 
			this->HomeButton->FlatAppearance->BorderSize = 0;
			this->HomeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeButton->Location = System::Drawing::Point(1, -4);
			this->HomeButton->Name = L"HomeButton";
			this->HomeButton->Size = System::Drawing::Size(59, 44);
			this->HomeButton->TabIndex = 4;
			this->HomeButton->Text = L"⌂";
			this->HomeButton->UseVisualStyleBackColor = true;
			this->HomeButton->Click += gcnew System::EventHandler(this, &MyForm::HomeButton_Click);
			// 
			// minimize
			// 
			this->minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minimize->BackColor = System::Drawing::Color::Transparent;
			this->minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minimize->ForeColor = System::Drawing::Color::Transparent;
			this->minimize->Location = System::Drawing::Point(1140, 3);
			this->minimize->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->minimize->Name = L"minimize";
			this->minimize->Size = System::Drawing::Size(33, 29);
			this->minimize->TabIndex = 3;
			this->minimize->Text = L"-";
			this->minimize->UseVisualStyleBackColor = false;
			this->minimize->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// maximize
			// 
			this->maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->maximize->BackColor = System::Drawing::Color::Transparent;
			this->maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maximize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maximize->ForeColor = System::Drawing::Color::Transparent;
			this->maximize->Location = System::Drawing::Point(1179, 3);
			this->maximize->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->maximize->Name = L"maximize";
			this->maximize->Size = System::Drawing::Size(32, 29);
			this->maximize->TabIndex = 2;
			this->maximize->Text = L"+";
			this->maximize->UseVisualStyleBackColor = false;
			this->maximize->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->BackColor = System::Drawing::Color::Transparent;
			this->ExitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Transparent;
			this->ExitButton->Location = System::Drawing::Point(1218, 2);
			this->ExitButton->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(32, 29);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"x";
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(66, 6);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nebula Express";
			// 
			// MainMenuDashboard
			// 
			this->MainMenuDashboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->MainMenuDashboard->BackColor = System::Drawing::Color::Gold;
			this->MainMenuDashboard->Controls->Add(this->flowLayoutPanel4);
			this->MainMenuDashboard->Controls->Add(this->placeholder1);
			this->MainMenuDashboard->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MainMenuDashboard->Location = System::Drawing::Point(0, 34);
			this->MainMenuDashboard->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MainMenuDashboard->Name = L"MainMenuDashboard";
			this->MainMenuDashboard->Size = System::Drawing::Size(251, 639);
			this->MainMenuDashboard->TabIndex = 1;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->SchedBTN);
			this->flowLayoutPanel4->Controls->Add(this->button1);
			this->flowLayoutPanel4->Controls->Add(this->check);
			this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel4->Location = System::Drawing::Point(0, 70);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(251, 292);
			this->flowLayoutPanel4->TabIndex = 7;
			// 
			// SchedBTN
			// 
			this->SchedBTN->FlatAppearance->BorderSize = 0;
			this->SchedBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SchedBTN->ForeColor = System::Drawing::Color::Black;
			this->SchedBTN->Location = System::Drawing::Point(3, 3);
			this->SchedBTN->Name = L"SchedBTN";
			this->SchedBTN->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->SchedBTN->Size = System::Drawing::Size(240, 44);
			this->SchedBTN->TabIndex = 0;
			this->SchedBTN->Text = L"SCH     Train Sched";
			this->SchedBTN->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SchedBTN->UseVisualStyleBackColor = true;
			this->SchedBTN->Click += gcnew System::EventHandler(this, &MyForm::SchedBTN_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(3, 53);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(240, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TCK     Ticketing";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// check
			// 
			this->check->FlatAppearance->BorderSize = 0;
			this->check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->check->ForeColor = System::Drawing::Color::Black;
			this->check->Location = System::Drawing::Point(3, 103);
			this->check->Name = L"check";
			this->check->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->check->Size = System::Drawing::Size(240, 44);
			this->check->TabIndex = 3;
			this->check->Text = L"TCO     Ticket Checkout";
			this->check->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->check->UseVisualStyleBackColor = true;
			this->check->Click += gcnew System::EventHandler(this, &MyForm::check_Click);
			// 
			// placeholder1
			// 
			this->placeholder1->Controls->Add(this->button2);
			this->placeholder1->Dock = System::Windows::Forms::DockStyle::Top;
			this->placeholder1->Location = System::Drawing::Point(0, 0);
			this->placeholder1->Name = L"placeholder1";
			this->placeholder1->Size = System::Drawing::Size(251, 70);
			this->placeholder1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(69, 70);
			this->button2->TabIndex = 0;
			this->button2->Text = L"☰";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// SidebarTransition
			// 
			this->SidebarTransition->Interval = 10;
			this->SidebarTransition->Tick += gcnew System::EventHandler(this, &MyForm::SidebarTransition_Tick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 624);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 49);
			this->panel2->TabIndex = 2;
			// 
			// FormsScreen
			// 
			this->FormsScreen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FormsScreen->BackColor = System::Drawing::Color::White;
			this->FormsScreen->ForeColor = System::Drawing::Color::Black;
			this->FormsScreen->Location = System::Drawing::Point(287, 69);
			this->FormsScreen->Name = L"FormsScreen";
			this->FormsScreen->Size = System::Drawing::Size(948, 522);
			this->FormsScreen->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->ControlBox = false;
			this->Controls->Add(this->FormsScreen);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->MainMenuDashboard);
			this->Controls->Add(this->Panel1);
			this->Font = (gcnew System::Drawing::Font(L"MS Outlook", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nebula Express";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->MainMenuDashboard->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->placeholder1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {

			this->WindowState = FormWindowState::Normal;
		}
		else {

			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	

	
	private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}

	private: bool isHRmenuVisible = false;

	private: System::Void HRmenubtn_Click(System::Object^ sender, System::EventArgs^ e) {

		HRmenuTransition->Start();

	}
		   bool sidebarExpand = false;

	private: System::Void SidebarTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (sidebarExpand == false) {
			MainMenuDashboard->Width += 10;
			if (MainMenuDashboard->Width >= 243) {

				SidebarTransition->Stop();
				sidebarExpand = true;
			}

		}
		else {
			MainMenuDashboard->Width -= 10;
			if (MainMenuDashboard->Width <= 67) {

				SidebarTransition->Stop();
				sidebarExpand = false;
			}

		}

	}
	private: bool isFormScreenVisible = false;

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		SidebarTransition->Start();
		isFormScreenVisible = !isFormScreenVisible;
		FormsScreen->Visible = isFormScreenVisible;
		this->FormsScreen->Controls->Clear();
	}


		   //child forms section



	private: System::Void SchedBTN_Click(System::Object^ sender, System::EventArgs^ e) {


		if (this->schedmnu == nullptr || this->schedmnu->IsDisposed)
		{
			this->schedmnu = gcnew SchedMenu();
			this->schedmnu->TopLevel = false;
			this->schedmnu->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->schedmnu->Dock = DockStyle::Fill;
			this->FormsScreen->Controls->Clear(); // Optional: clear the panel before adding new control
			this->FormsScreen->Controls->Add(this->schedmnu);
			this->schedmnu->Show();
		}
	}


	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

		if (this->ticketmenu == nullptr || this->ticketmenu->IsDisposed)
		{
			this->ticketmenu = gcnew TicketMenu();
			this->ticketmenu->TopLevel = false;
			this->ticketmenu->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ticketmenu->Dock = DockStyle::Fill;
			this->FormsScreen->Controls->Clear(); // Optional: clear the panel before adding new control
			this->FormsScreen->Controls->Add(this->ticketmenu);
			this->ticketmenu->Show();
		}

	}

private: System::Void check_Click(System::Object^ sender, System::EventArgs^ e) {
	

	if (this->checkout == nullptr || this->checkout->IsDisposed) {
		this->checkout = gcnew TicketCheckout(ticketmenu, seats);
		this->checkout->TopLevel = false;
		this->checkout->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->checkout->Dock = DockStyle::Fill;
		this->FormsScreen->Controls->Clear();
		this->FormsScreen->Controls->Add(this->checkout);
		this->checkout->Show();
	}
}
private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {

	MainMenuDashboard->Show();
}
};
}