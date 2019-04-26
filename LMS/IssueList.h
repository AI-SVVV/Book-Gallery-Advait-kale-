#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;;

	/// <summary>
	/// Summary for IssueList
	/// </summary>
	public ref class IssueList : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		IssueList(String ^mpass)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mp = mpass;
			String^constring = L"datasource=Localhost;port=3306;username=root;password="+mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select m.memberid, mname, bl.bookid,bname, memail, issuedate, depositdate from lms.books b, lms.members m, lms.booklist bl where m.memberid = b.memberid and b.bookid = bl.bookid;", conDatabase);
			MySqlDataReader^ myReader;

			try {

				MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDatabase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bsource = gcnew BindingSource();
				bsource->DataSource = dbdataset;
				dataGridView1->DataSource = bsource;
				sda->Update(dbdataset);
			}

			catch (Exception ^ex) {
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IssueList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  datelabel;
	private: System::Windows::Forms::TextBox^  t1;
	private: System::Windows::Forms::ComboBox^  c2;
	private: System::Windows::Forms::ComboBox^  c1;


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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(IssueList::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->datelabel = (gcnew System::Windows::Forms::Label());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->c2 = (gcnew System::Windows::Forms::ComboBox());
			this->c1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(603, 652);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 56);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &IssueList::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(926, 652);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 56);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &IssueList::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(276, 652);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 56);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &IssueList::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Coves", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Coves", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Location = System::Drawing::Point(362, 263);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(747, 345);
			this->dataGridView1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(415, 7);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(638, 100);
			this->panel2->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(24, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(598, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"I  S  S  U  E    L  I  S  T";
			// 
			// datelabel
			// 
			this->datelabel->AutoSize = true;
			this->datelabel->BackColor = System::Drawing::Color::Transparent;
			this->datelabel->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datelabel->ForeColor = System::Drawing::Color::White;
			this->datelabel->Location = System::Drawing::Point(906, 212);
			this->datelabel->Name = L"datelabel";
			this->datelabel->Size = System::Drawing::Size(118, 22);
			this->datelabel->TabIndex = 31;
			this->datelabel->Text = L"yyyy-MM-dd";
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(834, 154);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(283, 44);
			this->t1->TabIndex = 30;
			// 
			// c2
			// 
			this->c2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c2->FormattingEnabled = true;
			this->c2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"=", L">", L"<" });
			this->c2->Location = System::Drawing::Point(659, 154);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(113, 42);
			this->c2->TabIndex = 29;
			// 
			// c1
			// 
			this->c1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c1->FormattingEnabled = true;
			this->c1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"MemberID", L"BookID", L"Issue Date", L"Deposit Date" });
			this->c1->Location = System::Drawing::Point(365, 154);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(238, 42);
			this->c1->TabIndex = 28;
			this->c1->SelectedIndexChanged += gcnew System::EventHandler(this, &IssueList::c1_SelectedIndexChanged);
			// 
			// IssueList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 780);
			this->Controls->Add(this->datelabel);
			this->Controls->Add(this->t1);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"IssueList";
			this->Text = L"Book Gallery | Books Issue List";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//		String ^mp = mpass1;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select m.memberid, mname, bl.bookid,bname, memail, issuedate, depositdate from lms.books b, lms.members m, lms.booklist bl where m.memberid = b.memberid and b.bookid = bl.bookid;", conDatabase);
		MySqlDataReader^ myReader;

		try {

			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dbdataset;
			dataGridView1->DataSource = bsource;
			sda->Update(dbdataset);
		}

		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void c1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (c1->SelectedIndex <= 1) {
		c2->Items->Clear();
		c2->Items->Add("=");
		datelabel->Visible = false;
	}
	else {
		c2->Items->Clear();
		c2->Items->Add("=");
		c2->Items->Add(">=");
		c2->Items->Add("<=");
		c2->Items->Add(">");
		c2->Items->Add("<");
		datelabel->Visible = true;

	}
}
};
}
