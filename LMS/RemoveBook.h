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
	/// Summary for RemoveBook
	/// </summary>
	
	public ref class RemoveBook : public System::Windows::Forms::Form
	{
		
	public:
		String ^mp;
		RemoveBook(String ^mpass)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			button1->Enabled = false;
			AutoComp();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RemoveBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  t1;
	protected:
	private: System::Windows::Forms::TextBox^  t2;
	private: System::Windows::Forms::TextBox^  t3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DateTimePicker^  d;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveBook::typeid));
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->d = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(377, 29);
			this->t1->Margin = System::Windows::Forms::Padding(2);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(252, 44);
			this->t1->TabIndex = 0;
			// 
			// t2
			// 
			this->t2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2->Location = System::Drawing::Point(357, 192);
			this->t2->Margin = System::Windows::Forms::Padding(2);
			this->t2->Name = L"t2";
			this->t2->ReadOnly = true;
			this->t2->Size = System::Drawing::Size(309, 44);
			this->t2->TabIndex = 1;
			// 
			// t3
			// 
			this->t3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t3->Location = System::Drawing::Point(357, 276);
			this->t3->Margin = System::Windows::Forms::Padding(2);
			this->t3->Name = L"t3";
			this->t3->ReadOnly = true;
			this->t3->Size = System::Drawing::Size(309, 44);
			this->t3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(218, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"BookID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(230, 464);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 50);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RemoveBook::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(138, 195);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Book Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(116, 279);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 34);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Author Name";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(300, 109);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 48);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Fetch";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RemoveBook::button2_Click);
			// 
			// d
			// 
			this->d->CustomFormat = L"yyyy-MM-dd";
			this->d->Enabled = false;
			this->d->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->d->Location = System::Drawing::Point(357, 358);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(309, 44);
			this->d->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(29, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(276, 34);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Date of Manufacture";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(571, 464);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 50);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RemoveBook::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(404, 464);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 50);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Home";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RemoveBook::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(54, 464);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 50);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RemoveBook::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(268, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(792, 100);
			this->panel2->TabIndex = 16;
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
			this->label6->Size = System::Drawing::Size(777, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"R  E  M  O  V  E    B  O  O  K";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->d);
			this->panel1->Controls->Add(this->t3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Location = System::Drawing::Point(279, 160);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(768, 553);
			this->panel1->TabIndex = 17;
			// 
			// RemoveBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 742);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RemoveBook";
			this->Text = L"RemoveBook";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//		String ^mp = mpass1;
		void AutoComp() {
			t1->AutoCompleteMode = AutoCompleteMode::SuggestAppend;
			t1->AutoCompleteSource = AutoCompleteSource::CustomSource;
			AutoCompleteStringCollection ^col1 = gcnew AutoCompleteStringCollection();

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
				if (t1->Text != "")
					MessageBox::Show(ex->Message);
			}
			t1->AutoCompleteCustomSource = col1;

		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from lms.booklist where bookid='" + t1->Text + "';", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				t2->Text = myReader->GetString("BName");
				t3->Text = myReader->GetString("AuthName");
				d->Text = myReader->GetString("DOM");
			}
			if (t2->Text == "") {
				MessageBox::Show("The Book with BookID : " + t1->Text + " was not found!");
				t1->Text = "";
			}
			else {
				button1->Enabled = true;
				button2->Enabled = false;
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	t1->Text = "";
	t2->Text = "";
	t3->Text = "";
	d->Text = "";
	button2->Enabled = true;
	button1->Enabled = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("delete from lms.booklist where bookid= '" + t1->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		MessageBox::Show("The Book with BookID : " + t1->Text + " is removed!");
		button1->Enabled = false;
		button2->Enabled = true;
	}
	catch (Exception^ex) {
		MessageBox::Show("The Book with BookID : " + t1->Text + " is currently issued!");
		button2->Enabled = true;
		button1->Enabled = false;
		t1->Text = "";
		t2->Text = "";
		t3->Text = "";
		d->Text = "";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
