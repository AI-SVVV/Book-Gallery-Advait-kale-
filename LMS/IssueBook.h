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
	/// Summary for IssueBook
	/// </summary>
	public ref class IssueBook : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		IssueBook(String ^mpass)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			DateTime a1 = d1->Value;
			DateTime a2 = a1.AddDays(30);
			d2->Value = a2;
			AutoComp();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IssueBook()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DateTimePicker^  d2;


	protected:

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  t1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;



	private: System::Windows::Forms::DateTimePicker^  d1;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::TextBox^  t2;
	private: System::Windows::Forms::Label^  bn;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(IssueBook::typeid));
			this->d1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->d2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::Label());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->bn = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// d1
			// 
			this->d1->CustomFormat = L"yyyy-MM-dd";
			this->d1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->d1->Location = System::Drawing::Point(347, 303);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(289, 44);
			this->d1->TabIndex = 14;
			this->d1->ValueChanged += gcnew System::EventHandler(this, &IssueBook::d1_ValueChanged);
			// 
			// d2
			// 
			this->d2->CustomFormat = L"yyyy-MM-dd";
			this->d2->Enabled = false;
			this->d2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->d2->Location = System::Drawing::Point(347, 390);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(289, 44);
			this->d2->TabIndex = 14;
			this->d2->ValueChanged += gcnew System::EventHandler(this, &IssueBook::d2_ValueChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(397, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 52);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Home";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &IssueBook::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(214, 484);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 52);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Issue";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &IssueBook::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(134, 49);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"MemberID";
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(347, 46);
			this->t1->Margin = System::Windows::Forms::Padding(2);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(143, 44);
			this->t1->TabIndex = 0;
			this->t1->TextChanged += gcnew System::EventHandler(this, &IssueBook::t1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(175, 221);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"BookID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(140, 310);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Issue Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(101, 397);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 34);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Deposit Date";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(584, 484);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 52);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &IssueBook::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(32, 484);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &IssueBook::button2_Click);
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(530, 54);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(0, 34);
			this->name->TabIndex = 15;
			// 
			// t2
			// 
			this->t2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->t2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->t2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2->Location = System::Drawing::Point(347, 218);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(254, 44);
			this->t2->TabIndex = 16;
			this->t2->TextChanged += gcnew System::EventHandler(this, &IssueBook::t2_TextChanged);
			// 
			// bn
			// 
			this->bn->AutoSize = true;
			this->bn->BackColor = System::Drawing::Color::Transparent;
			this->bn->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bn->ForeColor = System::Drawing::Color::White;
			this->bn->Location = System::Drawing::Point(350, 138);
			this->bn->Name = L"bn";
			this->bn->Size = System::Drawing::Size(0, 34);
			this->bn->TabIndex = 17;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->bn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->d1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->d2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(343, 153);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(779, 574);
			this->panel1->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(121, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 34);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Book Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(389, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 100);
			this->panel2->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(662, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"I  S  S  U  E    B  O  O  K";
			// 
			// IssueBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 780);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"IssueBook";
			this->Text = L"IssueBook";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//		String ^mp = mpass1;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	t1->Text = "";
	t2->Text = "";
	d1->Text = "";
	d2->Text = "";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "insert into lms.books values('" + t1->Text + "','" + t2->Text + "','" + d1->Text + "','" + d2->Text + "');";
	MySqlCommand ^cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader ^myReader;

	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		MessageBox::Show("Member with MemberID : " + t1->Text + " has issued book with BookID : " + t1->Text + " !");
		
	}
	catch (Exception^ex) {
		MessageBox::Show("The Book with BookID : " + t2->Text + " is not available in Booklist!");
	}
	//For Mail
	try {
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		int bid = System::Convert::ToInt32(t1->Text);
		String ^que1 = "select mname, memail, bname from lms.members, lms.books, lms.booklist where members.memberid = books.memberid and books.bookid = booklist.bookid and members.memberid="+bid+";";
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand(que1, conDatabase);
		MySqlDataReader ^myReader;
		conDatabase->Open();
		String ^name, ^email, ^bookname, ^depodate;
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			name = myReader->GetString("mname");
			email = myReader->GetString("memail");
			bookname = myReader->GetString("BName");
		}
		String ^message = "Hello " + name + ", \n You have recently issued the book with BookID : " + t1->Text + "\nThe Details are :\nBookName : " + bookname + "\nIssueDate : " + d1->Text + "\nDepositDate : " + d2->Text + "\n\nPlease Return the book by the given deposit date or Late Fees is applicable!";
		String ^to = email;
		String ^subject = "Book Issue Confirmation | Book Gallery";
		MailMessage^ mail = gcnew MailMessage("bgallery@gmail.com", to, subject, message);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("bgallerylms@gmail.com", "bookgallery19");
		client->EnableSsl = true;
		client->Send(mail);
		MessageBox::Show("The Confirmation Mail has been sent!", "Success", MessageBoxButtons::OK);
		t1->Text = "";
		t2->Text = "";
		d1->Text = "";
		d2->Text = "";
	}
	catch (Exception ^e) {
		MessageBox::Show(e->Message);
	}

}
private: System::Void d2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void d1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	DateTime a1 = d1->Value;
	DateTime a2 = a1.AddDays(30);
	d2->Value = a2;
}
private: System::Void t1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "select mname from lms.members where memberid = " + t1->Text + ";";
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader^ myReader;
	try {
		String ^n1, ^n2;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			n1 = myReader->GetString("mname");
		}
		name->Text = n1;
	}

	catch (Exception^ex) {
		name->Text = "Member Not Found!";
		//	MessageBox::Show(ex->Message);
		
	}
}

void AutoComp() {
	t2->AutoCompleteMode = AutoCompleteMode::SuggestAppend;
	t2->AutoCompleteSource = AutoCompleteSource::CustomSource;
	AutoCompleteStringCollection ^col1 = gcnew AutoCompleteStringCollection();
//	AutoCompleteStringCollection ^col2 = gcnew AutoCompleteStringCollection();

	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "select * from lms.booklist;";
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader^ myReader;
	try {
		String ^n1, ^n2;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			n1 = myReader->GetString("bookid");
			n2 = myReader->GetString("bname");
			col1->Add(n1);
			//col2->Add(n2);

		}
	
	}
	catch (Exception^ex) {
		if(t2->Text != "")
			MessageBox::Show(ex->Message);
	}
	t2->AutoCompleteCustomSource = col1;
	
}

private: System::Void t2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	String ^que = "select bname from lms.booklist where bookid = '" + t2->Text + "';";
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader^ myReader;
	try {
		String ^n1;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			n1 = myReader->GetString("bname");
		}
		bn->Text = n1;
	}

	catch (Exception^ex) {
		name->Text = "Book Not Found!";
		//MessageBox::Show(ex->Message);

	}
}
};
}
