#pragma once

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
	/// Summary for DepositBook
	/// </summary>
	public ref class DepositBook : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		DepositBook(String ^mpass)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			button2->Enabled = false;
			d1->Enabled = false;
			t5->ReadOnly = true;
			t1->Items->Add("Select BookID");
			t1->SelectedItem = "Select BookID";
			t1->Items->Clear();
			//name->Text = "Issuer Name";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DepositBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  d2;
	protected:

	private: System::Windows::Forms::DateTimePicker^  d1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  t5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  FETCH;



	private: System::Windows::Forms::TextBox^  t2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::ComboBox^  t1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DepositBook::typeid));
			this->d2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->d1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FETCH = (gcnew System::Windows::Forms::Button());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->t1 = (gcnew System::Windows::Forms::ComboBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// d2
			// 
			this->d2->CustomFormat = L"yyyy-MM-dd";
			this->d2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->d2->Location = System::Drawing::Point(295, 192);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(292, 44);
			this->d2->TabIndex = 31;
			this->d2->ValueChanged += gcnew System::EventHandler(this, &DepositBook::d2_ValueChanged);
			// 
			// d1
			// 
			this->d1->CustomFormat = L"yyyy-MM-dd";
			this->d1->Enabled = false;
			this->d1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->d1->Location = System::Drawing::Point(336, 372);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(291, 44);
			this->d1->TabIndex = 30;
			this->d1->ValueChanged += gcnew System::EventHandler(this, &DepositBook::d1_ValueChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(578, 540);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 56);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DepositBook::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(407, 540);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 56);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Home";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DepositBook::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(231, 540);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 56);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DepositBook::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(39, 540);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 56);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Deposit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DepositBook::button2_Click);
			// 
			// t5
			// 
			this->t5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t5->Location = System::Drawing::Point(335, 458);
			this->t5->Margin = System::Windows::Forms::Padding(2);
			this->t5->MaxLength = 2;
			this->t5->Name = L"t5";
			this->t5->ReadOnly = true;
			this->t5->Size = System::Drawing::Size(292, 44);
			this->t5->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(77, 461);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 34);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Overdue";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(35, 199);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 34);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Deposit Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(66, 379);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 34);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Issue Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(58, 39);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 34);
			this->label2->TabIndex = 19;
			this->label2->Text = L"MemberID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(100, 117);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 34);
			this->label1->TabIndex = 18;
			this->label1->Text = L"BookID";
			// 
			// FETCH
			// 
			this->FETCH->BackColor = System::Drawing::Color::Transparent;
			this->FETCH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FETCH->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FETCH->ForeColor = System::Drawing::Color::White;
			this->FETCH->Location = System::Drawing::Point(293, 280);
			this->FETCH->Margin = System::Windows::Forms::Padding(2);
			this->FETCH->Name = L"FETCH";
			this->FETCH->Size = System::Drawing::Size(145, 52);
			this->FETCH->TabIndex = 6;
			this->FETCH->Text = L"Fetch";
			this->FETCH->UseVisualStyleBackColor = false;
			this->FETCH->Click += gcnew System::EventHandler(this, &DepositBook::FETCH_Click);
			// 
			// t2
			// 
			this->t2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2->Location = System::Drawing::Point(293, 36);
			this->t2->Margin = System::Windows::Forms::Padding(2);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(117, 44);
			this->t2->TabIndex = 23;
			this->t2->TextChanged += gcnew System::EventHandler(this, &DepositBook::t2_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(298, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(839, 100);
			this->panel2->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(818, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"D  E  P  O  S  I  T    B  O  O  K";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->FETCH);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->d1);
			this->panel1->Controls->Add(this->d2);
			this->panel1->Controls->Add(this->t5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(336, 130);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 624);
			this->panel1->TabIndex = 33;
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->FormattingEnabled = true;
			this->t1->Location = System::Drawing::Point(295, 114);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(292, 42);
			this->t1->TabIndex = 33;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->name->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(438, 42);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(0, 34);
			this->name->TabIndex = 32;
			// 
			// DepositBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 780);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DepositBook";
			this->Text = L"DepositBook";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double a1, a2, a3;
//		String ^mp = mpass1;
	private: System::Void FETCH_Click(System::Object^  sender, System::EventArgs^  e) {
		//Connection to Database
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select * from LMS.books where bookid='" + t1->Text + "';", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table

		DateTime id, dd;
		if (t1->SelectedText == "Select BookID") {
			MessageBox::Show("Please Select a valid BookID!");
		}
		else {
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				while (myReader->Read()) {
					//t2->Text = myReader->GetString("MemberID");
					id = myReader->GetDateTime("IssueDate");
					dd = myReader->GetDateTime("DepositDate");
				}
				d1->Text = "" + id;
				d2->Text = "" + dd;
				t5->Text = "" + dd.Subtract(id); //31.00:00:00
				String ^aa = t5->Text->Remove(2, 9); //31
				a1 = System::Convert::ToDouble(aa);
				a2 = a1 - 30;
				if (a2 < 0) {
					a2 = 0;
				}
				a3 = a2 / 2;
				t5->Text = "" + a3;
				FETCH->Enabled = false;
				button2->Enabled = true;
			}
			catch (Exception^ex) {
				if (t1->SelectedText != "Select BookID") {
					MessageBox::Show("The Book with BookID : " + t1->Text + " is not Issued by any Member!");
				}
				else {
					MessageBox::Show("Please Select a valid BookID");
				}
			}
		}


	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//For Mail
	try {
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		int ab = System::Convert::ToInt32(t2->Text);
		String ^que1 = "select mname, memail, bname from lms.members, lms.books, lms.booklist where members.memberid = books.memberid and books.bookid = booklist.bookid and books.memberid=" + ab + ";";
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand(que1, conDatabase);
		MySqlDataReader ^myReader;
		conDatabase->Open();
		String ^name, ^email, ^bookname, ^depodate;
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			name = myReader->GetString("mname");
			email = myReader->GetString("memail");
			bookname = myReader->GetString("bname");
		}
		//	MessageBox::Show(name+"\n"+email+"\n"+bookname);
		String ^message = "Hello " + name + ", \n You have recently deposited the book with BookID : " + t1->Text + "\nThe Details are :\nBookName : " + bookname + "\nIssueDate : " + d1->Text + "\nDepositDate : " + d2->Text + "\nOverdue : " + t5->Text;
		String ^to = email;
		String ^subject = "Book Deposit Confirmation | Book Gallery";
		MailMessage^ mail = gcnew MailMessage("bgallery@gmail.com", to, subject, message);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("bgallerylms@gmail.com", "bookgallery19");
		client->EnableSsl = true;
		client->Send(mail);
		MessageBox::Show("The Confirmation Mail has been sent!", "Success", MessageBoxButtons::OK);
				
	}
	catch (Exception ^e) {
		MessageBox::Show(e->Message);
	}
	//Connection to Database
	String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "delete from lms.books where bookid='" + t1->Text + "';";
	MySqlCommand ^cmdDatabase = gcnew MySqlCommand(que, conDatabase); //To execute Querey
	MySqlDataReader ^myReader; //To generate results from Myaql Table

	
		try {

			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			if (t2->Text == "" || t5->Text == "") {
				MessageBox::Show("Member with MemberID : " + t2->Text + " has not issued any book!");
			}
			else {
				MessageBox::Show("Member with MemberID : " + t2->Text + " has deposited the book with BookID : " + t1->SelectedValue + " and paid the overdue of " + t5->Text + "!");
				t1->Text = "";
				t2->Text = "";
				t5->Text = "";
				button2->Enabled = false;
				FETCH->Enabled = true;
				d1->Text = "";
				d2->Text = "";
				name->Text = "";
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	t1->Text = "";
	t2->Text = "";
	t5->Text = "";
	button2->Enabled = false;
	FETCH->Enabled = true;
	d1->Text = "";
	name->Text = "";
	t1->Items->Add("Select BookID");
	t1->SelectedItem = "Select BookID";
	t1->Items->Clear();
}
private: System::Void d1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void d2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (t1->Text != "Select BookID") {
		try {
			String ^constring = L"datasource=Localhost;port=3306;username=root;password="+mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			String ^q2 = "update lms.books set depositdate = '" + d2->Text + "' where memberid =" + t2->Text + " and bookid='" + t1->Text + "';";
			MySqlCommand ^cmdDatabase = gcnew MySqlCommand(q2, conDatabase); //To execute Querey
			MySqlDataReader ^myReader;
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void t2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "select * from lms.members m, lms.books b where m.memberid = b.memberid and m.memberid = "+t2->Text+";";
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader^ myReader;
	try {
		t1->Items->Add("Select BookID");
		t1->SelectedItem = "Select BookID";
		t1->Items->Clear();
		String ^n1, ^n2;
		int n3;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			n1 = myReader->GetString("mname");
		}
		name->Text = n1;
		Fillcombo();
	}

	catch (Exception^ex) {
		if (t2->Text != "") {
			MessageBox::Show(ex->Message);
		}
	}
}
private: void Fillcombo(void) {
	try {
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		String ^q2 = "select b.bookid from lms.books b, lms.booklist bl where memberid="+t2->Text+" and b.bookid = bl.bookid;";
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand(q2, conDatabase); //To execute Querey
		MySqlDataReader ^myReader;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		t1->Items->Add("Select BookID");
		t1->SelectedItem = "Select BookID";
		t1->Items->Clear();
		
		while (myReader->Read()) {
			String ^q = myReader->GetString("bookid");
			t1->Items->Add(q);
		}
	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
