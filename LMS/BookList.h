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
	/// Summary for BookList
	/// </summary>
	public ref class BookList : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		BookList(String ^mpass)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			datelabel->Visible = false;
			mp = mpass;
			String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
			MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from lms.booklist;", conDatabase);
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
		~BookList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel2;
	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  c1;
	private: System::Windows::Forms::ComboBox^  c2;
	private: System::Windows::Forms::TextBox^  t1;
	private: System::Windows::Forms::Label^  datelabel;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BookList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->c1 = (gcnew System::Windows::Forms::ComboBox());
			this->c2 = (gcnew System::Windows::Forms::ComboBox());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->datelabel = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(359, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(638, 100);
			this->panel2->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(24, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(583, 67);
			this->label6->TabIndex = 0;
			this->label6->Text = L"B  O  O  K    L  I  S  T";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Coves", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Coves", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(455, 278);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(446, 338);
			this->dataGridView1->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(618, 661);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 56);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BookList::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(941, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 56);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BookList::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(291, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 56);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BookList::button1_Click);
			// 
			// c1
			// 
			this->c1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c1->FormattingEnabled = true;
			this->c1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BookID", L"Book Name", L"Author Name", L"Manufacture Date" });
			this->c1->Location = System::Drawing::Point(302, 172);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(238, 42);
			this->c1->TabIndex = 24;
			this->c1->SelectedIndexChanged += gcnew System::EventHandler(this, &BookList::c1_SelectedIndexChanged);
			// 
			// c2
			// 
			this->c2->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c2->FormattingEnabled = true;
			this->c2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"=", L">", L"<" });
			this->c2->Location = System::Drawing::Point(596, 172);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(113, 42);
			this->c2->TabIndex = 25;
			this->c2->SelectedIndexChanged += gcnew System::EventHandler(this, &BookList::c2_SelectedIndexChanged);
			// 
			// t1
			// 
			this->t1->Font = (gcnew System::Drawing::Font(L"Coves", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->Location = System::Drawing::Point(771, 172);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(283, 44);
			this->t1->TabIndex = 26;
			this->t1->TextChanged += gcnew System::EventHandler(this, &BookList::t1_TextChanged);
			// 
			// datelabel
			// 
			this->datelabel->AutoSize = true;
			this->datelabel->BackColor = System::Drawing::Color::Transparent;
			this->datelabel->Font = (gcnew System::Drawing::Font(L"Coves", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datelabel->ForeColor = System::Drawing::Color::White;
			this->datelabel->Location = System::Drawing::Point(843, 230);
			this->datelabel->Name = L"datelabel";
			this->datelabel->Size = System::Drawing::Size(118, 22);
			this->datelabel->TabIndex = 27;
			this->datelabel->Text = L"yyyy-MM-dd";
			// 
			// BookList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 788);
			this->Controls->Add(this->datelabel);
			this->Controls->Add(this->t1);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BookList";
			this->Text = L"BookList";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	t1->Text = "";
	c2->Items->Clear();
	String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
	MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from lms.booklist;", conDatabase);
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
private: System::Void c1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (c1->SelectedIndex != 3) {
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
private: System::Void t1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String ^c1o, ^val;
	DateTime dt;
	switch (c1->SelectedIndex) {
		case 0:		c1o = "bookid";
			datelabel->Visible = false;
					break;
		case 1:		c1o = "bname";
			datelabel->Visible = false;
					break;
		case 2:		c1o = "authname";
			datelabel->Visible = false;
					break;
		case 3:		c1o = "dom";
					datelabel->Visible = true;
					break;
	}

	if (c1->SelectedItem != "" && c2->SelectedItem != "") {
		String^constring = L"datasource=Localhost;port=3306;username=root;password=" + mp;
		MySqlConnection ^conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase;
		if(c1o != "dom") 
			cmdDatabase = gcnew MySqlCommand("select * from lms.booklist where " + c1o + " like '%" + t1->Text + "%' ;", conDatabase);
		else 
			cmdDatabase = gcnew MySqlCommand("select * from lms.booklist where " + c1o + c2->SelectedItem+"'" + t1->Text + "%' ;", conDatabase);
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
			//MessageBox::Show(ex->Message);
		}
	}
	else {
		MessageBox::Show("Please Enter the Constraints to search!");
	}
}
private: System::Void c2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
