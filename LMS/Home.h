#pragma once

#include "AddMember.h"
#include "RemoveMember.h"
#include "IssueList.h"
#include "AddBook.h"
#include "RemoveBook.h"
#include "DepositBook.h"
#include "IssueBook.h"
#include "Memberlist.h"
#include "BookList.h"

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		String ^mp;
		Home(String ^mpass)
		{
			mp = mpass;
			//MessageBox::Show("Value from Database  : "+mpass1);
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			//Headings
			mt->Visible = true;
			bt->Visible = false;
			blt->Visible = false;
			
			//Left Element
			bll->Visible = true;
			bl->Visible = false;
			ml->Visible = false;
			
			//Right Element
			br->Visible = true;
			blr->Visible = false;
			mr->Visible = false;

			addmp->Visible = true;
			remmp->Visible = true;
			addbp->Visible = false;
			rembp->Visible = false;
			issup->Visible = false;
			depop->Visible = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  mt;
	private: System::Windows::Forms::Label^  disp;
	protected:





	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  bt;
	private: System::Windows::Forms::PictureBox^  blt;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  br;
	private: System::Windows::Forms::PictureBox^  bll;
	private: System::Windows::Forms::PictureBox^  ml;
	private: System::Windows::Forms::PictureBox^  bl;
	private: System::Windows::Forms::PictureBox^  blr;
	private: System::Windows::Forms::PictureBox^  mr;
	private: System::Windows::Forms::PictureBox^  addm;
	private: System::Windows::Forms::PictureBox^  remm;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  issu;
private: System::Windows::Forms::Panel^  addmp;
private: System::Windows::Forms::Panel^  issup;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Panel^  remmp;
private: System::Windows::Forms::Panel^  depop;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::PictureBox^  depo;
private: System::Windows::Forms::Panel^  addbp;
private: System::Windows::Forms::PictureBox^  addb;
private: System::Windows::Forms::Panel^  rembp;
private: System::Windows::Forms::PictureBox^  remb;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mt = (gcnew System::Windows::Forms::PictureBox());
			this->disp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bt = (gcnew System::Windows::Forms::PictureBox());
			this->blt = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->br = (gcnew System::Windows::Forms::PictureBox());
			this->bll = (gcnew System::Windows::Forms::PictureBox());
			this->ml = (gcnew System::Windows::Forms::PictureBox());
			this->bl = (gcnew System::Windows::Forms::PictureBox());
			this->blr = (gcnew System::Windows::Forms::PictureBox());
			this->mr = (gcnew System::Windows::Forms::PictureBox());
			this->addm = (gcnew System::Windows::Forms::PictureBox());
			this->remm = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->addbp = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addb = (gcnew System::Windows::Forms::PictureBox());
			this->addmp = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->issup = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->issu = (gcnew System::Windows::Forms::PictureBox());
			this->rembp = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->remb = (gcnew System::Windows::Forms::PictureBox());
			this->depop = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->depo = (gcnew System::Windows::Forms::PictureBox());
			this->remmp = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mt))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->br))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ml))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remm))->BeginInit();
			this->panel1->SuspendLayout();
			this->addbp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addb))->BeginInit();
			this->addmp->SuspendLayout();
			this->issup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->issu))->BeginInit();
			this->rembp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remb))->BeginInit();
			this->depop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depo))->BeginInit();
			this->remmp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1228, -4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 90);
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Home::pictureBox4_Click);
			// 
			// mt
			// 
			this->mt->BackColor = System::Drawing::Color::Transparent;
			this->mt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mt.BackgroundImage")));
			this->mt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mt->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->mt->Location = System::Drawing::Point(176, 3);
			this->mt->Name = L"mt";
			this->mt->Size = System::Drawing::Size(160, 168);
			this->mt->TabIndex = 1;
			this->mt->TabStop = false;
			// 
			// disp
			// 
			this->disp->AutoSize = true;
			this->disp->BackColor = System::Drawing::Color::Transparent;
			this->disp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disp->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disp->ForeColor = System::Drawing::Color::White;
			this->disp->Location = System::Drawing::Point(189, 174);
			this->disp->Name = L"disp";
			this->disp->Size = System::Drawing::Size(132, 29);
			this->disp->TabIndex = 2;
			this->disp->Text = L"MEMBERS";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->disp);
			this->panel2->Controls->Add(this->mt);
			this->panel2->Controls->Add(this->bt);
			this->panel2->Controls->Add(this->blt);
			this->panel2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->panel2->Location = System::Drawing::Point(443, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(502, 207);
			this->panel2->TabIndex = 3;
			// 
			// bt
			// 
			this->bt->BackColor = System::Drawing::Color::Transparent;
			this->bt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt.BackgroundImage")));
			this->bt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bt->Location = System::Drawing::Point(176, 3);
			this->bt->Name = L"bt";
			this->bt->Size = System::Drawing::Size(160, 168);
			this->bt->TabIndex = 4;
			this->bt->TabStop = false;
			// 
			// blt
			// 
			this->blt->BackColor = System::Drawing::Color::Transparent;
			this->blt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blt.BackgroundImage")));
			this->blt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->blt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->blt->Location = System::Drawing::Point(176, 3);
			this->blt->Name = L"blt";
			this->blt->Size = System::Drawing::Size(160, 168);
			this->blt->TabIndex = 7;
			this->blt->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(598, 708);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(159, 56);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Home::pictureBox5_Click);
			// 
			// br
			// 
			this->br->BackColor = System::Drawing::Color::Transparent;
			this->br->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"br.BackgroundImage")));
			this->br->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->br->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->br->Location = System::Drawing::Point(1067, 400);
			this->br->Name = L"br";
			this->br->Size = System::Drawing::Size(311, 199);
			this->br->TabIndex = 18;
			this->br->TabStop = false;
			this->br->Click += gcnew System::EventHandler(this, &Home::pictureBox3_Click_1);
			// 
			// bll
			// 
			this->bll->BackColor = System::Drawing::Color::Transparent;
			this->bll->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bll.BackgroundImage")));
			this->bll->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bll->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->bll->Location = System::Drawing::Point(-3, 400);
			this->bll->Name = L"bll";
			this->bll->Size = System::Drawing::Size(311, 199);
			this->bll->TabIndex = 19;
			this->bll->TabStop = false;
			this->bll->Click += gcnew System::EventHandler(this, &Home::pictureBox6_Click);
			// 
			// ml
			// 
			this->ml->BackColor = System::Drawing::Color::Transparent;
			this->ml->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ml.BackgroundImage")));
			this->ml->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ml->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->ml->Location = System::Drawing::Point(-3, 400);
			this->ml->Name = L"ml";
			this->ml->Size = System::Drawing::Size(311, 199);
			this->ml->TabIndex = 20;
			this->ml->TabStop = false;
			this->ml->Click += gcnew System::EventHandler(this, &Home::ml_Click);
			// 
			// bl
			// 
			this->bl->BackColor = System::Drawing::Color::Transparent;
			this->bl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bl.BackgroundImage")));
			this->bl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bl->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->bl->Location = System::Drawing::Point(-3, 400);
			this->bl->Name = L"bl";
			this->bl->Size = System::Drawing::Size(311, 199);
			this->bl->TabIndex = 21;
			this->bl->TabStop = false;
			this->bl->Click += gcnew System::EventHandler(this, &Home::bl_Click);
			// 
			// blr
			// 
			this->blr->BackColor = System::Drawing::Color::Transparent;
			this->blr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blr.BackgroundImage")));
			this->blr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->blr->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->blr->Location = System::Drawing::Point(1067, 400);
			this->blr->Name = L"blr";
			this->blr->Size = System::Drawing::Size(311, 199);
			this->blr->TabIndex = 22;
			this->blr->TabStop = false;
			this->blr->Click += gcnew System::EventHandler(this, &Home::blr_Click);
			// 
			// mr
			// 
			this->mr->BackColor = System::Drawing::Color::Transparent;
			this->mr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mr.BackgroundImage")));
			this->mr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->mr->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->mr->Location = System::Drawing::Point(1067, 400);
			this->mr->Name = L"mr";
			this->mr->Size = System::Drawing::Size(311, 199);
			this->mr->TabIndex = 23;
			this->mr->TabStop = false;
			this->mr->Click += gcnew System::EventHandler(this, &Home::mr_Click);
			// 
			// addm
			// 
			this->addm->BackColor = System::Drawing::Color::Transparent;
			this->addm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addm.BackgroundImage")));
			this->addm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addm->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->addm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addm->Location = System::Drawing::Point(23, 3);
			this->addm->Name = L"addm";
			this->addm->Size = System::Drawing::Size(150, 150);
			this->addm->TabIndex = 25;
			this->addm->TabStop = false;
			this->addm->Click += gcnew System::EventHandler(this, &Home::addm_Click);
			// 
			// remm
			// 
			this->remm->BackColor = System::Drawing::Color::Transparent;
			this->remm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remm.BackgroundImage")));
			this->remm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->remm->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->remm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remm->Location = System::Drawing::Point(44, 3);
			this->remm->Name = L"remm";
			this->remm->Size = System::Drawing::Size(150, 150);
			this->remm->TabIndex = 26;
			this->remm->TabStop = false;
			this->remm->Click += gcnew System::EventHandler(this, &Home::remm_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->addbp);
			this->panel1->Controls->Add(this->addmp);
			this->panel1->Controls->Add(this->issup);
			this->panel1->Controls->Add(this->rembp);
			this->panel1->Controls->Add(this->depop);
			this->panel1->Controls->Add(this->remmp);
			this->panel1->Location = System::Drawing::Point(377, 340);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 303);
			this->panel1->TabIndex = 27;
			// 
			// addbp
			// 
			this->addbp->BackColor = System::Drawing::Color::Transparent;
			this->addbp->Controls->Add(this->label5);
			this->addbp->Controls->Add(this->addb);
			this->addbp->Location = System::Drawing::Point(41, 49);
			this->addbp->Name = L"addbp";
			this->addbp->Size = System::Drawing::Size(195, 218);
			this->addbp->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(20, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"ADD BOOK";
			// 
			// addb
			// 
			this->addb->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addb.BackgroundImage")));
			this->addb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->addb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addb->Location = System::Drawing::Point(22, 3);
			this->addb->Name = L"addb";
			this->addb->Size = System::Drawing::Size(150, 150);
			this->addb->TabIndex = 0;
			this->addb->TabStop = false;
			this->addb->Click += gcnew System::EventHandler(this, &Home::addb_Click);
			// 
			// addmp
			// 
			this->addmp->BackColor = System::Drawing::Color::Transparent;
			this->addmp->Controls->Add(this->addm);
			this->addmp->Controls->Add(this->label1);
			this->addmp->Location = System::Drawing::Point(41, 49);
			this->addmp->Name = L"addmp";
			this->addmp->Size = System::Drawing::Size(195, 218);
			this->addmp->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(5, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 31);
			this->label1->TabIndex = 27;
			this->label1->Text = L"ADD MEMBER";
			this->label1->Click += gcnew System::EventHandler(this, &Home::label1_Click);
			// 
			// issup
			// 
			this->issup->BackColor = System::Drawing::Color::Transparent;
			this->issup->Controls->Add(this->label3);
			this->issup->Controls->Add(this->issu);
			this->issup->Location = System::Drawing::Point(42, 49);
			this->issup->Name = L"issup";
			this->issup->Size = System::Drawing::Size(195, 218);
			this->issup->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(15, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 31);
			this->label3->TabIndex = 29;
			this->label3->Text = L"ISSUE BOOK";
			// 
			// issu
			// 
			this->issu->BackColor = System::Drawing::Color::Transparent;
			this->issu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"issu.BackgroundImage")));
			this->issu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->issu->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->issu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->issu->Location = System::Drawing::Point(21, 4);
			this->issu->Name = L"issu";
			this->issu->Size = System::Drawing::Size(150, 150);
			this->issu->TabIndex = 28;
			this->issu->TabStop = false;
			this->issu->Click += gcnew System::EventHandler(this, &Home::issu_Click);
			// 
			// rembp
			// 
			this->rembp->BackColor = System::Drawing::Color::Transparent;
			this->rembp->Controls->Add(this->label6);
			this->rembp->Controls->Add(this->remb);
			this->rembp->Location = System::Drawing::Point(366, 49);
			this->rembp->Name = L"rembp";
			this->rembp->Size = System::Drawing::Size(224, 228);
			this->rembp->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(10, 184);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 31);
			this->label6->TabIndex = 30;
			this->label6->Text = L"REMOVE BOOK";
			// 
			// remb
			// 
			this->remb->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remb.BackgroundImage")));
			this->remb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->remb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->remb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remb->Location = System::Drawing::Point(37, 3);
			this->remb->Name = L"remb";
			this->remb->Size = System::Drawing::Size(150, 150);
			this->remb->TabIndex = 30;
			this->remb->TabStop = false;
			this->remb->Click += gcnew System::EventHandler(this, &Home::remb_Click);
			// 
			// depop
			// 
			this->depop->BackColor = System::Drawing::Color::Transparent;
			this->depop->Controls->Add(this->label4);
			this->depop->Controls->Add(this->depo);
			this->depop->Location = System::Drawing::Point(370, 49);
			this->depop->Name = L"depop";
			this->depop->Size = System::Drawing::Size(212, 231);
			this->depop->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(5, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 31);
			this->label4->TabIndex = 30;
			this->label4->Text = L"DEPOSIT BOOK";
			// 
			// depo
			// 
			this->depo->BackColor = System::Drawing::Color::Transparent;
			this->depo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"depo.BackgroundImage")));
			this->depo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->depo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->depo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->depo->Location = System::Drawing::Point(30, 5);
			this->depo->Name = L"depo";
			this->depo->Size = System::Drawing::Size(150, 150);
			this->depo->TabIndex = 29;
			this->depo->TabStop = false;
			this->depo->Click += gcnew System::EventHandler(this, &Home::depo_Click);
			// 
			// remmp
			// 
			this->remmp->BackColor = System::Drawing::Color::Transparent;
			this->remmp->Controls->Add(this->label2);
			this->remmp->Controls->Add(this->remm);
			this->remmp->Location = System::Drawing::Point(355, 49);
			this->remmp->Name = L"remmp";
			this->remmp->Size = System::Drawing::Size(243, 234);
			this->remmp->TabIndex = 29;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Coves", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 31);
			this->label2->TabIndex = 27;
			this->label2->Text = L"REMOVE MEMBER";
			this->label2->Click += gcnew System::EventHandler(this, &Home::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(248, 696);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 71);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(970, 699);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(175, 68);
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1378, 769);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ml);
			this->Controls->Add(this->bll);
			this->Controls->Add(this->blr);
			this->Controls->Add(this->bl);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->br);
			this->Controls->Add(this->mr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Book Gallery | Home";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mt))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->br))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bll))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ml))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remm))->EndInit();
			this->panel1->ResumeLayout(false);
			this->addbp->ResumeLayout(false);
			this->addbp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addb))->EndInit();
			this->addmp->ResumeLayout(false);
			this->addmp->PerformLayout();
			this->issup->ResumeLayout(false);
			this->issup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->issu))->EndInit();
			this->rembp->ResumeLayout(false);
			this->rembp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remb))->EndInit();
			this->depop->ResumeLayout(false);
			this->depop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depo))->EndInit();
			this->remmp->ResumeLayout(false);
			this->remmp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Thank you for using Book Gallery (LMS)!");
	//MessageBox::Show("Value from Database  : " + mp);
	Application::Exit();
	//AboutUs abu = gcnew AboutUs();
	//abu->ShowDialog();
}

private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	//New Booklist L
	addmp->Visible = false;
	remmp->Visible = false;
	addbp->Visible = true;
	addbp->BringToFront();
	rembp->Visible = true;
	rembp->BringToFront();
	issup->Visible = false;
	depop->Visible = false;

	//Headings
	mt->Visible = false;
	bt->Visible = false;
	blt->Visible = true;

	//Left Element
	bll->Visible = false;
	bl->Visible = true;
	ml->Visible = false;

	//Right Element
	br->Visible = false;
	blr->Visible = false;
	mr->Visible = true;
	
	//Label
	disp->Text = "BOOKLIST";
	disp->Left = 180;
}
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//New Books R
	addmp->Visible = false;
	remmp->Visible = false;
	addbp->Visible = false;
	rembp->Visible = false;
	issup->Visible = true;
	issup->BringToFront();
	depop->Visible = true;
	depop->BringToFront();
	
	//Headings
	mt->Visible = false;
	bt->Visible = true;
	blt->Visible = false;

	//Left Element
	bll->Visible = false;
	bl->Visible = false;
	ml->Visible = true;

	//Right Element
	br->Visible = false;
	blr->Visible = true;
	mr->Visible = false;

	//Label
	disp->Text = "ISSUE | DEPOSIT BOOKS";
	disp->Left = 90;
}
private: System::Void bl_Click(System::Object^  sender, System::EventArgs^  e) {
	addmp->Visible = false;
	remmp->Visible = false;
	addbp->Visible = false;
	rembp->Visible = false;
	issup->Visible = true;
	issup->BringToFront();
	depop->Visible = true;
	depop->BringToFront();

	//Headings
	mt->Visible = false;
	bt->Visible = true;
	blt->Visible = false;

	//Left Element
	bll->Visible = false;
	bl->Visible = false;
	ml->Visible = true;

	//Right Element
	br->Visible = false;
	blr->Visible = true;
	mr->Visible = false;
	//Label
	disp->Text = "ISSUE | DEPOSIT BOOKS";
	disp->Left = 90;
}
private: System::Void mr_Click(System::Object^  sender, System::EventArgs^  e) {
	addmp->Visible = true;
	addmp->BringToFront();
	remmp->Visible = true;
	remmp->BringToFront();
	addbp->Visible = false;
	rembp->Visible = false;
	issup->Visible = false;
	depop->Visible = false;
	//Headings
	mt->Visible = true;
	bt->Visible = false;
	blt->Visible = false;

	//Left Element
	bll->Visible = true;
	bl->Visible = false;
	ml->Visible = false;

	//Right Element
	br->Visible = true;
	blr->Visible = false;
	mr->Visible = false;
	//Label
	disp->Text = "MEMBERS";
	disp->Left = 189;
}
private: System::Void blr_Click(System::Object^  sender, System::EventArgs^  e) {
	addmp->Visible = false;
	remmp->Visible = false;
	addbp->Visible = true;
	addbp->BringToFront();
	rembp->Visible = true;
	rembp->BringToFront();
	issup->Visible = false;
	depop->Visible = false;

	//Headings
	mt->Visible = false;
	bt->Visible = false;
	blt->Visible = true;

	//Left Element
	bll->Visible = false;
	bl->Visible = true;
	ml->Visible = false;

	//Right Element
	br->Visible = false;
	blr->Visible = false;
	mr->Visible = true;
	
	//Label
	disp->Text = "BOOKLIST";
	disp->Left = 180;
}
private: System::Void ml_Click(System::Object^  sender, System::EventArgs^  e) {
	addmp->Visible = true;
	addmp->BringToFront();
	remmp->BringToFront();
	remmp->Visible = true;
	addbp->Visible = false;
	rembp->Visible = false;
	issup->Visible = false;
	depop->Visible = false;
	//Headings
	mt->Visible = true;
	bt->Visible = false;
	blt->Visible = false;

	//Left Element
	bll->Visible = true;
	bl->Visible = false;
	ml->Visible = false;

	//Right Element
	br->Visible = true;
	blr->Visible = false;
	mr->Visible = false;

	//Label
	disp->Text = "MEMBERS";
	disp->Left = 189;
}

private: System::Void addm_Click(System::Object^  sender, System::EventArgs^  e) {
	AddMember ^f2 = gcnew AddMember(mp);
	f2->ShowDialog();
}
private: System::Void remm_Click(System::Object^  sender, System::EventArgs^  e) {
	RemoveMember ^f3 = gcnew RemoveMember(mp);
	f3->ShowDialog();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	//AddMemebr label
	AddMember ^f2 = gcnew AddMember(mp);
	f2->ShowDialog();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	//RemoveMember Label
	RemoveMember ^f3 = gcnew RemoveMember(mp);
	f3->ShowDialog();
}
private: System::Void issu_Click(System::Object^  sender, System::EventArgs^  e) {
	IssueBook ^ib = gcnew IssueBook(mp);
	ib->ShowDialog();
}
private: System::Void addb_Click(System::Object^  sender, System::EventArgs^  e) {
	AddBook ^ab = gcnew AddBook(mp);
	ab->ShowDialog();
}
private: System::Void remb_Click(System::Object^  sender, System::EventArgs^  e) {
	RemoveBook ^f3 = gcnew RemoveBook(mp);
	f3->ShowDialog();
}


private: System::Void depo_Click(System::Object^  sender, System::EventArgs^  e) {
	DepositBook ^f3 = gcnew DepositBook(mp);
	f3->ShowDialog();
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	IssueList ^f3 = gcnew IssueList(mp);
	f3->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	MemberList ^ml = gcnew MemberList(mp);
	ml->ShowDialog();
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	BookList ^ml = gcnew BookList(mp);
	ml->ShowDialog();
}
};
}