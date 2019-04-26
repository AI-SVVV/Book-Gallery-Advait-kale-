#pragma once

#include "Home.h"


namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		Login(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			mp = mysqlp->Text;
			
			pictureBox1->Image;
			try {
				//Connection to Database
				//String ^sp = mysqlp->Text;
				String ^constring = L"datasource=Localhost;port=3306;username=root;password="+mp;
				MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
				MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select state from LMS.otp;", conDatabase); //To execute Querey
				MySqlDataReader ^myReader; //To generate results from Myaql Table
				String ^st;
				
				conDatabase->Open(); //Open Connection
				myReader = cmdDatabase->ExecuteReader(); // Execute Querey

				//Read Each Value from table and use each result
				while (myReader->Read()) {
					st = myReader->GetString("state");
				}
				if (st == "active") {
					OTPCon();
				}

			}
			catch (Exception ^ex) {
				//MessageBox::Show("Error in Checking form state(in constructor)\n" + ex->Message);
			}
			//Code end
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::TextBox^  uid;
	private: System::Windows::Forms::Label^  attempt;




	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dt;
	private: System::Windows::Forms::Button^  exitbtn;
	private: System::Windows::Forms::Button^  verify;
	private: System::Windows::Forms::TextBox^  mysqlp;
	private: System::Windows::Forms::Label^  label4;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->uid = (gcnew System::Windows::Forms::TextBox());
			this->attempt = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->mysqlp = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->exitbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->verify = (gcnew System::Windows::Forms::Button());
			this->dt = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(290, 404);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(249, 32);
			this->pass->TabIndex = 14;
			// 
			// uid
			// 
			this->uid->AllowDrop = true;
			this->uid->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->uid->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->uid->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uid->Location = System::Drawing::Point(290, 331);
			this->uid->Name = L"uid";
			this->uid->Size = System::Drawing::Size(249, 32);
			this->uid->TabIndex = 13;
			// 
			// attempt
			// 
			this->attempt->AutoSize = true;
			this->attempt->BackColor = System::Drawing::Color::Transparent;
			this->attempt->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attempt->ForeColor = System::Drawing::Color::Red;
			this->attempt->Location = System::Drawing::Point(252, 621);
			this->attempt->Name = L"attempt";
			this->attempt->Size = System::Drawing::Size(116, 22);
			this->attempt->TabIndex = 6;
			this->attempt->Text = L"Attempts : 5";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Location = System::Drawing::Point(230, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(243, 546);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(140, 47);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->mysqlp);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->exitbtn);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->attempt);
			this->panel1->Controls->Add(this->pass);
			this->panel1->Controls->Add(this->uid);
			this->panel1->Controls->Add(this->verify);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(382, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(638, 711);
			this->panel1->TabIndex = 15;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel1_Paint);
			// 
			// mysqlp
			// 
			this->mysqlp->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mysqlp->Location = System::Drawing::Point(290, 477);
			this->mysqlp->Name = L"mysqlp";
			this->mysqlp->PasswordChar = '*';
			this->mysqlp->Size = System::Drawing::Size(249, 32);
			this->mysqlp->TabIndex = 21;
			this->mysqlp->TextChanged += gcnew System::EventHandler(this, &Login::mysqlp_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(37, 480);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Enter Database Password";
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Transparent;
			this->exitbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitbtn->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbtn->ForeColor = System::Drawing::Color::White;
			this->exitbtn->Location = System::Drawing::Point(243, 654);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(140, 36);
			this->exitbtn->TabIndex = 18;
			this->exitbtn->Text = L"Exit";
			this->exitbtn->UseVisualStyleBackColor = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &Login::exitbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comfortaa", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(118, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(428, 75);
			this->label3->TabIndex = 17;
			this->label3->Text = L"BOOK GALLERY";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(107, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 22);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Enter Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(127, 334);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 22);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Enter UserID";
			// 
			// verify
			// 
			this->verify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->verify->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->verify->ForeColor = System::Drawing::Color::White;
			this->verify->Location = System::Drawing::Point(263, 401);
			this->verify->Name = L"verify";
			this->verify->Size = System::Drawing::Size(120, 47);
			this->verify->TabIndex = 19;
			this->verify->Text = L"Verify";
			this->verify->UseVisualStyleBackColor = true;
			this->verify->Visible = false;
			this->verify->Click += gcnew System::EventHandler(this, &Login::verify_Click_1);
			// 
			// dt
			// 
			this->dt->Location = System::Drawing::Point(44, 163);
			this->dt->Name = L"dt";
			this->dt->Size = System::Drawing::Size(189, 20);
			this->dt->TabIndex = 16;
			this->dt->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1264, 780);
			this->Controls->Add(this->dt);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->Text = L"Book Gallery | Login";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int att = 5;
		String ^em1,^log1;
		int a1, a2, a3;
		int otp1;
		String ^ban = "false";
		String ^adminemail = "advaitkale01@gmail.com";
		String ^datetime;
		String ^usid;

private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		mp = mysqlp->Text;
		//Connection to Database
		String ^ss = uid->Text;
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select * from LMS.login where userid = '" + ss + "';", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table

		String ^u, ^p, ^b; //To store Results from myReader
		try {
		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

		//Read Each Value from table and use each result
		while (myReader->Read()) {
			u = (myReader->GetString("userid"));
			p = (myReader->GetString("password"));
		}
		
		if (uid->Text->Equals(u) && pass->Text->Equals(p)) { // If userid and pass match
			MessageBox::Show("Welcome to Book Gallery (LMS) ");

			//Hide Login Form
			this->Hide();

			//Show Main Form
			Home ^f1 = gcnew Home(mp);
			f1->ShowDialog();
		}
		else {
			attempt->Text = "Attempts : " + --att;
			if (att == 0) {
				MessageBox::Show("Too many wrong attempts!");
				ban = "true";
				Random^ r = gcnew Random;
				a1 = r->Next(100000,999999);
				MessageBox::Show("The Application is Blocked due to security reasons!\nThe OTP is sent to the registered Admin Email!");
				OTPCon();
				
			}
		}
	}
	catch (Exception ^ex) {
		//MessageBox::Show("Error in Checking form basic\n" + ex->Message);
		//MessageBox::Show("Incorect MySQL Password");
	}
	if (ban == "true") {
		//OTP INSERT INTO TABLE
		try {
			//Connection to Database
			String ^ss = uid->Text;
			String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);

			//Getting current datetime
			DateTime dat = dt->Value;
			datetime = System::Convert::ToString(dat);
			//MessageBox::Show(datetime);

			MySqlCommand ^cmdDatabase = gcnew MySqlCommand("insert into LMS.otp values('" + adminemail + "'," + a1 + ",'" + datetime + "','active');", conDatabase); //To execute Querey
			MySqlDataReader ^myReader; //To generate results from Myaql Table

			conDatabase->Open(); //Open Connection
			myReader = cmdDatabase->ExecuteReader(); // Execute Querey
			//MessageBox::Show("OTP data saved ");

		}
		catch (Exception ^ex) {
			MessageBox::Show("Error in Inserting otp in table\n" + ex->Message);
		}
		//OTP GET FROM TABLE, MAIL AND VERIFY
		try {
			//Connection to Database
			String ^ss = uid->Text;
			String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select * from lms.otp where state='active';", conDatabase); //To execute Querey
			MySqlDataReader ^myReader; //To generate results from Myaql Table

			conDatabase->Open(); //Open Connection
			myReader = cmdDatabase->ExecuteReader(); // Execute Querey

			//Read Each Value from table and use each result
			while (myReader->Read()) {
				em1 = myReader->GetString("email");
				otp1 = myReader->GetInt64("otp");
				log1 = myReader->GetString("log");
			}

			//EMAIL OTP
			String ^message = "Hello User,\n\n\nYour UserID : " + usid + "is BANNED Due to exceding the limit of wrong attempts!\n\nTo UNBAN, Enter the OTP Given below :\n\nOTP : " + a1 + "\nDate and Time : " + datetime;
			String ^to = adminemail;
			String ^subject = "UserID Banned | Book Gallery";
			MailMessage^ mail = gcnew MailMessage("bgallery@gmail.com", to, subject, message);
			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
			client->Port = 587;
			client->Credentials = gcnew System::Net::NetworkCredential("bgallerylms@gmail.com", "bookgallery19");
			client->EnableSsl = true;
			client->Send(mail);
			//MessageBox::Show("The OTP has been sent to the admin Email!");
			//EMAIL OTP END

			if (uid->Text->Equals(otp1)) {
				MessageBox::Show("Your UserID is unbanned!\nApplication will Restart!");
			}
		}
		catch (Exception ^ex) {
			MessageBox::Show("Error in Getting otp from table\n" + ex->Message);
		}
	}//IF
}
public: System::Void OTPCon() {
	mp = mysqlp->Text;
	label1->Text = "Enter OTP";
	label2->Visible = false;
	pass->Visible = false;
	mysqlp->Visible = false;
	label4->Visible = false;
	//exitbtn->Visible = false;
	verify->Visible = true;
	pictureBox2->Visible = false;

}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void verify_Click(System::Object^  sender, System::EventArgs^  e) {
	
	int otp2, otp3;
	try {
		//Connection to Database
		
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select * from LMS.otp;", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table


		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

		//Read Each Value from table and use each result
		while (myReader->Read()) {
			otp2 = (myReader->GetInt64("otp"));		
		}
		otp3 = System::Convert::ToInt64(uid->Text);
		if (otp2==otp3) { // If userid and pass match
			MessageBox::Show("OTP Verified! Welcome to Book Gallery (LMS) ");

			//Hide Login Form
			this->Hide();

			//Show Main Form
			Home ^f1 = gcnew Home(mp);
			f1->ShowDialog();
		}
		else {
				MessageBox::Show("Incorrect OTP!");
				Application::Exit();

			}
			//MessageBox::Show("Wrong UserID or Password!");

		
	}
	catch (Exception ^ex) {
		MessageBox::Show("Error in Checking form basic\n" + ex->Message);
	}
	//Edit OTP Expired
	try {
		//Connection to Database
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("update LMS.otp set state='expired' where otp="+otp2+";", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table


		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

	}
	catch (Exception ^ex) {
		MessageBox::Show("Error in Expiring OTP\n" + ex->Message);
	}
}
private: System::Void exitbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void verify_Click_1(System::Object^  sender, System::EventArgs^  e) {

	int otp2, otp3;
	try {
		//Connection to Database
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select * from LMS.otp;", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table


		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

		//Read Each Value from table and use each result
		while (myReader->Read()) {
			otp2 = (myReader->GetInt64("otp"));
		}
		otp3 = System::Convert::ToInt64(uid->Text);
		if (otp2 == otp3) { // If userid and pass match
			MessageBox::Show("OTP Verified! Welcome to Book Gallery (LMS) ");

			//Hide Login Form
			this->Hide();

			//Show Main Form
			Home ^f1 = gcnew Home(mp);
			f1->ShowDialog();
		}
		else {
			MessageBox::Show("Incorrect OTP!");
			Application::Exit();

		}
		//MessageBox::Show("Wrong UserID or Password!");


	}
	catch (Exception ^ex) {
		MessageBox::Show("Error in Checking form basic\n" + ex->Message);
	}
	//Edit OTP Expired
	try {
		//Connection to Database
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("update LMS.otp set state='expired' where otp=" + otp2 + ";", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table


		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

	}
	catch (Exception ^ex) {
		MessageBox::Show("Error in Checking form basic\n" + ex->Message);
	}
}
private: System::Void mysqlp_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	mp = mysqlp->Text;
	try {
		//Connection to Database
		//String ^sp = mysqlp->Text;
		String ^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand ^cmdDatabase = gcnew MySqlCommand("select state from LMS.otp;", conDatabase); //To execute Querey
		MySqlDataReader ^myReader; //To generate results from Myaql Table
		String ^st;

		conDatabase->Open(); //Open Connection
		myReader = cmdDatabase->ExecuteReader(); // Execute Querey

		//Read Each Value from table and use each result
		while (myReader->Read()) {
			st = myReader->GetString("state");
		}
		if (st == "active") {
			OTPCon();
		}

	}
	catch (Exception ^ex) {
		//MessageBox::Show("Error in Checking form state(in constructor)\n" + ex->Message);
	}
}
};
}