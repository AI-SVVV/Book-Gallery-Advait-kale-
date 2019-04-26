#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for RemoveMember
	/// </summary>
	public ref class RemoveMember : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		RemoveMember(String ^mpass)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			button1->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RemoveMember()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button5;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  t5;
	private: System::Windows::Forms::TextBox^  t4;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  t1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  t3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  t2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveMember::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->t4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(556, 512);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 53);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RemoveMember::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(198, 512);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 53);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RemoveMember::button3_Click);
			// 
			// t5
			// 
			this->t5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t5->Location = System::Drawing::Point(279, 445);
			this->t5->Name = L"t5";
			this->t5->ReadOnly = true;
			this->t5->Size = System::Drawing::Size(320, 44);
			this->t5->TabIndex = 10;
			// 
			// t4
			// 
			this->t4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t4->Location = System::Drawing::Point(279, 365);
			this->t4->Name = L"t4";
			this->t4->ReadOnly = true;
			this->t4->Size = System::Drawing::Size(320, 44);
			this->t4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(148, 448);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 34);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(160, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Member ID";
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(371, 30);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(173, 44);
			this->t1->TabIndex = 3;
			this->t1->TextChanged += gcnew System::EventHandler(this, &RemoveMember::t1_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(371, 512);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 53);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Home";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RemoveMember::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(122, 368);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 34);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contact";
			// 
			// t3
			// 
			this->t3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t3->Location = System::Drawing::Point(279, 284);
			this->t3->Name = L"t3";
			this->t3->ReadOnly = true;
			this->t3->Size = System::Drawing::Size(320, 44);
			this->t3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 512);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 53);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RemoveMember::button1_Click);
			// 
			// t2
			// 
			this->t2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2->Location = System::Drawing::Point(279, 198);
			this->t2->Name = L"t2";
			this->t2->ReadOnly = true;
			this->t2->Size = System::Drawing::Size(320, 44);
			this->t2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(143, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(124, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->t3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->t5);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->t4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Location = System::Drawing::Point(307, 159);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(718, 589);
			this->panel1->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(320, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 45);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Fetch";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RemoveMember::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(200, 29);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(927, 100);
			this->panel2->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(10, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(909, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"R  E  M  O  V  E    M  E  M  B  E  R";
			// 
			// RemoveMember
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
			this->Name = L"RemoveMember";
			this->Text = L"Book Gallery | Remove Member";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//		String ^mp = mpass1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("delete from LMS.Members where MemberID=" + t1->Text + ";", conDatabase);
			MySqlDataReader^ myReader;

			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			MessageBox::Show("The member with MemberID : " + t1->Text + " is deleted!");
			button1->Enabled = false;
		//	button2->Enabled = false;

		}
		catch (Exception^ex) {
			MessageBox::Show("The Member with MemberID : "+t1->Text+" has not returned the issued books!");
			button1->Enabled = false;
			//button2->Enabled = true;
			t1->Enabled = true;
			t1->Text = "";
			t2->Text = "";
			t3->Text = "";
			t4->Text = "";
			t5->Text = "";
		}
	}
			 int id;

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	t1->Text = "";
	//t1->Enabled = true;
	t2->Text = "";
	t3->Text = "";
	t4->Text = "";
	t5->Text = "";
	button1->Enabled = false;
//	button2->Enabled = true;
}
private: System::Void t1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Add here
	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	id = System::Convert::ToInt32(t1->Text);//Fetching Integer
	String ^que = "select * from LMS.Members where memberid = " + id + ";";
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand(que, conDatabase);
	MySqlDataReader^ myReader;
	try {
		String ^test;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			test = myReader->GetString("MName");
			t3->Text = myReader->GetString("MAddress");
			t4->Text = myReader->GetString("MContact");
			t5->Text = myReader->GetString("MEmail");
		}
		t2->Text = test;
		if (test == "") {
			MessageBox::Show("Member with MemberID : " + id + " not found!");
			//t1->Text = "";
			t2->Text = "";
			t3->Text = "";
			t4->Text = "";
			t5->Text = "";
		}
		else {
			button1->Enabled = true;
			//t1->Enabled = false;
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
