#pragma once
#include "BMIForm.h"


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
	private: System::Windows::Forms::Button^ WHRbtn;

	private: System::Windows::Forms::Button^ BMIbtn;
	private: System::Windows::Forms::Panel^ placeholder1;
	private: System::Windows::Forms::Button^ HRmenubtn;

	private: System::Windows::Forms::Button^ THRbtn;

	private: System::Windows::Forms::Button^ MHRbtn;

	private: System::Windows::Forms::Button^ RHRbtn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ HRmenuTransition;
	private: System::Windows::Forms::Timer^ SidebarTransition;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FlowLayoutPanel^ HRSubmenu;





	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ FormsScreen;

	private: BMIForm^ bmiForm;








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
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->WHRbtn = (gcnew System::Windows::Forms::Button());
			this->HRSubmenu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->HRmenubtn = (gcnew System::Windows::Forms::Button());
			this->RHRbtn = (gcnew System::Windows::Forms::Button());
			this->MHRbtn = (gcnew System::Windows::Forms::Button());
			this->THRbtn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->BMIbtn = (gcnew System::Windows::Forms::Button());
			this->placeholder1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HRmenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->SidebarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->FormsScreen = (gcnew System::Windows::Forms::Panel());
			this->Panel1->SuspendLayout();
			this->MainMenuDashboard->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->HRSubmenu->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->placeholder1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
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
			this->HomeButton->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
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
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(66, 6);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PROJEKT: PHystem";
			// 
			// MainMenuDashboard
			// 
			this->MainMenuDashboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->MainMenuDashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->MainMenuDashboard->Controls->Add(this->flowLayoutPanel2);
			this->MainMenuDashboard->Controls->Add(this->flowLayoutPanel3);
			this->MainMenuDashboard->Controls->Add(this->HRSubmenu);
			this->MainMenuDashboard->Controls->Add(this->flowLayoutPanel4);
			this->MainMenuDashboard->Controls->Add(this->placeholder1);
			this->MainMenuDashboard->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MainMenuDashboard->Location = System::Drawing::Point(0, 34);
			this->MainMenuDashboard->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MainMenuDashboard->Name = L"MainMenuDashboard";
			this->MainMenuDashboard->Size = System::Drawing::Size(67, 639);
			this->MainMenuDashboard->TabIndex = 1;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 249);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(67, 60);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(250, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"BP        Blood Pressure ";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->WHRbtn);
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 193);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(67, 56);
			this->flowLayoutPanel3->TabIndex = 6;
			// 
			// WHRbtn
			// 
			this->WHRbtn->FlatAppearance->BorderSize = 0;
			this->WHRbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WHRbtn->ForeColor = System::Drawing::Color::White;
			this->WHRbtn->Location = System::Drawing::Point(3, 3);
			this->WHRbtn->Name = L"WHRbtn";
			this->WHRbtn->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->WHRbtn->Size = System::Drawing::Size(250, 44);
			this->WHRbtn->TabIndex = 1;
			this->WHRbtn->Text = L"WHR    W-H Ratio Calculator";
			this->WHRbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->WHRbtn->UseVisualStyleBackColor = true;
			this->WHRbtn->Click += gcnew System::EventHandler(this, &MyForm::WHRbtn_Click);
			// 
			// HRSubmenu
			// 
			this->HRSubmenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->HRSubmenu->Controls->Add(this->HRmenubtn);
			this->HRSubmenu->Controls->Add(this->RHRbtn);
			this->HRSubmenu->Controls->Add(this->MHRbtn);
			this->HRSubmenu->Controls->Add(this->THRbtn);
			this->HRSubmenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->HRSubmenu->Location = System::Drawing::Point(0, 128);
			this->HRSubmenu->Name = L"HRSubmenu";
			this->HRSubmenu->Size = System::Drawing::Size(67, 65);
			this->HRSubmenu->TabIndex = 5;
			// 
			// HRmenubtn
			// 
			this->HRmenubtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->HRmenubtn->FlatAppearance->BorderSize = 0;
			this->HRmenubtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HRmenubtn->ForeColor = System::Drawing::Color::White;
			this->HRmenubtn->Location = System::Drawing::Point(3, 3);
			this->HRmenubtn->Name = L"HRmenubtn";
			this->HRmenubtn->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->HRmenubtn->Size = System::Drawing::Size(250, 60);
			this->HRmenubtn->TabIndex = 2;
			this->HRmenubtn->Text = L"HR       Heart Rate";
			this->HRmenubtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->HRmenubtn->UseVisualStyleBackColor = false;
			this->HRmenubtn->Click += gcnew System::EventHandler(this, &MyForm::HRmenubtn_Click);
			// 
			// RHRbtn
			// 
			this->RHRbtn->FlatAppearance->BorderSize = 0;
			this->RHRbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RHRbtn->Location = System::Drawing::Point(3, 69);
			this->RHRbtn->Name = L"RHRbtn";
			this->RHRbtn->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->RHRbtn->Size = System::Drawing::Size(250, 50);
			this->RHRbtn->TabIndex = 0;
			this->RHRbtn->Text = L"RHR Calculator";
			this->RHRbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RHRbtn->UseVisualStyleBackColor = true;
			// 
			// MHRbtn
			// 
			this->MHRbtn->FlatAppearance->BorderSize = 0;
			this->MHRbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MHRbtn->Location = System::Drawing::Point(3, 125);
			this->MHRbtn->Name = L"MHRbtn";
			this->MHRbtn->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->MHRbtn->Size = System::Drawing::Size(250, 50);
			this->MHRbtn->TabIndex = 1;
			this->MHRbtn->Text = L"MHR Calculator";
			this->MHRbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MHRbtn->UseVisualStyleBackColor = true;
			// 
			// THRbtn
			// 
			this->THRbtn->FlatAppearance->BorderSize = 0;
			this->THRbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->THRbtn->Location = System::Drawing::Point(3, 181);
			this->THRbtn->Name = L"THRbtn";
			this->THRbtn->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->THRbtn->Size = System::Drawing::Size(250, 50);
			this->THRbtn->TabIndex = 2;
			this->THRbtn->Text = L"THR Calculator";
			this->THRbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->THRbtn->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->BMIbtn);
			this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel4->Location = System::Drawing::Point(0, 70);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(67, 58);
			this->flowLayoutPanel4->TabIndex = 7;
			// 
			// BMIbtn
			// 
			this->BMIbtn->FlatAppearance->BorderSize = 0;
			this->BMIbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BMIbtn->Location = System::Drawing::Point(3, 3);
			this->BMIbtn->Name = L"BMIbtn";
			this->BMIbtn->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->BMIbtn->Size = System::Drawing::Size(240, 44);
			this->BMIbtn->TabIndex = 0;
			this->BMIbtn->Text = L"BMI     BMI Calculator";
			this->BMIbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BMIbtn->UseVisualStyleBackColor = true;
			this->BMIbtn->Click += gcnew System::EventHandler(this, &MyForm::BMIbtn_Click);
			// 
			// placeholder1
			// 
			this->placeholder1->Controls->Add(this->button2);
			this->placeholder1->Dock = System::Windows::Forms::DockStyle::Top;
			this->placeholder1->Location = System::Drawing::Point(0, 0);
			this->placeholder1->Name = L"placeholder1";
			this->placeholder1->Size = System::Drawing::Size(67, 70);
			this->placeholder1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			// HRmenuTransition
			// 
			this->HRmenuTransition->Interval = 10;
			this->HRmenuTransition->Tick += gcnew System::EventHandler(this, &MyForm::HRmenuTransition_Tick);
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
			this->FormsScreen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->FormsScreen->Location = System::Drawing::Point(287, 69);
			this->FormsScreen->Name = L"FormsScreen";
			this->FormsScreen->Size = System::Drawing::Size(948, 522);
			this->FormsScreen->TabIndex = 3;

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
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
			this->Text = L"PROJEKT: PHystem";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->MainMenuDashboard->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->HRSubmenu->ResumeLayout(false);
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
private: bool isMenuVisible = false;

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	isMenuVisible = !isMenuVisible;
	MainMenuDashboard->Visible = isMenuVisible;
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
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HRsubmenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void WHRbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   bool HRSubmenuExpand = false;
private: System::Void HRmenuTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		
	if (HRSubmenuExpand == false) {
		HRSubmenu->Height += 10;
		if (HRSubmenu->Height >= 243) {
			
			HRmenuTransition->Stop();
			HRSubmenuExpand = true;
		}

	}
	else {
		HRSubmenu->Height -= 10;
		if (HRSubmenu->Height <= 66) {
			
			HRmenuTransition->Stop();
			HRSubmenuExpand = false;
		}

	}

}
//child forms section



private: System::Void BMIbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	
		if (this->bmiForm == nullptr || this->bmiForm->IsDisposed)
		{
			this->bmiForm = gcnew BMIForm();
			this->bmiForm->TopLevel = false;
			this->bmiForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->bmiForm->Dock = DockStyle::Fill;
			this->FormsScreen->Controls->Clear(); // Optional: clear the panel before adding new control
			this->FormsScreen->Controls->Add(this->bmiForm);
			this->bmiForm->Show();
		}
	}


};
}