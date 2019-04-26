#pragma once
//#include "Home.h"
//#include "Login.h"
namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for AddMember
	/// </summary>
	public ref class AddMember : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		AddMember(String ^mpass)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from lms.members;", conDatabase);
			MySqlDataReader^ myReader;
			try {
				conDatabase->Open();
				int a;

				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					a = myReader->GetUInt32("memberid");
				}
				a++;
				t1->Text = "" + a;
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddMember()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::TextBox^  t1;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  t2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  t3;
	private: System::Windows::Forms::TextBox^  t5;
	private: System::Windows::Forms::TextBox^  t4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddMember::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->t4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(418, 458);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 57);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Home";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AddMember::button4_Click);
			// 
			// t1
			// 
			this->t1->Enabled = false;
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(356, 48);
			this->t1->Margin = System::Windows::Forms::Padding(2);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(332, 44);
			this->t1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(241, 458);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 57);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddMember::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(162, 51);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"MemberID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(108, 128);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Member Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(82, 208);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Member Address";
			// 
			// t2
			// 
			this->t2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2->Location = System::Drawing::Point(356, 125);
			this->t2->Margin = System::Windows::Forms::Padding(2);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(332, 44);
			this->t2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(87, 287);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 34);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Member Contact";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(113, 365);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 34);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Member Email";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(602, 458);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 57);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddMember::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(57, 458);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 57);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddMember::button2_Click);
			// 
			// t3
			// 
			this->t3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t3->Location = System::Drawing::Point(356, 205);
			this->t3->Margin = System::Windows::Forms::Padding(2);
			this->t3->Name = L"t3";
			this->t3->Size = System::Drawing::Size(332, 44);
			this->t3->TabIndex = 2;
			// 
			// t5
			// 
			this->t5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t5->Location = System::Drawing::Point(356, 362);
			this->t5->Margin = System::Windows::Forms::Padding(2);
			this->t5->Name = L"t5";
			this->t5->Size = System::Drawing::Size(332, 44);
			this->t5->TabIndex = 4;
			// 
			// t4
			// 
			this->t4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t4->Location = System::Drawing::Point(356, 284);
			this->t4->Margin = System::Windows::Forms::Padding(2);
			this->t4->Name = L"t4";
			this->t4->Size = System::Drawing::Size(332, 44);
			this->t4->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(322, 23);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(745, 100);
			this->panel2->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(24, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(701, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"A  D  D    M  E  M  B  E  R";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->t5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->t4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->t3);
			this->panel1->Location = System::Drawing::Point(301, 188);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(792, 540);
			this->panel1->TabIndex = 18;
			// 
			// AddMember
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1346, 780);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddMember";
			this->Text = L"Book Gallery | Add Member";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean clear = false;
//		String ^mp = mpass1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		String ^que = "insert into lms.members values(" + t1->Text + ",'" + t2->Text + "','" + t3->Text + "','" + t4->Text + "','" + t5->Text + "');";
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			MessageBox::Show("Member with ID : " + t1->Text + " is added!");
			clear = true;
			String ^message = "Hello "+ t2->Text+", \n Your Membership at Book Gallery has been confirmed!\nYour MemberID : "+t1->Text+"\nThank you for Choosing us!";
			String ^to = t5->Text;
			String ^subject = "Membership Confirmation | Book Gallery";
			MailMessage^ mail = gcnew MailMessage("bgallery@gmail.com", to, subject, message);
			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
			client->Port = 587;
			client->Credentials = gcnew System::Net::NetworkCredential("bgallerylms@gmail.com", "bookgallery19");
			client->EnableSsl = true;
			client->Send(mail);
			MessageBox::Show("The Confirmation Mail has been sent!", "Success", MessageBoxButtons::OK);
		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (clear == true) {
		t1->Text = "";
		t2->Text = "";
		t3->Text = "";
		t4->Text = "";
		t5->Text = "";
	}
	else {
		t2->Text = "";
		t3->Text = "";
		t4->Text = "";
		t5->Text = "";
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	//Home^ sa = gcnew Home();
	//sa->ShowDialog();
}
};
}
