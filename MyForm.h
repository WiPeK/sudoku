#pragma once
#include <ctime>
#include <iostream>
#include <chrono>

namespace Sudoku {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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

	private: System::Windows::Forms::MaskedTextBox^  Box0;
	private: System::Windows::Forms::MaskedTextBox^  Box9;
	private: System::Windows::Forms::MaskedTextBox^  Box18;
	private: System::Windows::Forms::MaskedTextBox^  Box36;
	private: System::Windows::Forms::MaskedTextBox^  Box45;
	private: System::Windows::Forms::MaskedTextBox^  Box54;
	private: System::Windows::Forms::MaskedTextBox^  Box63;
	private: System::Windows::Forms::MaskedTextBox^  Box72;
	private: System::Windows::Forms::MaskedTextBox^  Box73;
	private: System::Windows::Forms::MaskedTextBox^  Box64;
	private: System::Windows::Forms::MaskedTextBox^  Box55;
	private: System::Windows::Forms::MaskedTextBox^  Box46;
	private: System::Windows::Forms::MaskedTextBox^  Box37;
	private: System::Windows::Forms::MaskedTextBox^  Box19;
	private: System::Windows::Forms::MaskedTextBox^  Box10;
	private: System::Windows::Forms::MaskedTextBox^  Box1;
	private: System::Windows::Forms::MaskedTextBox^  Box74;
	private: System::Windows::Forms::MaskedTextBox^  Box65;
	private: System::Windows::Forms::MaskedTextBox^  Box56;
	private: System::Windows::Forms::MaskedTextBox^  Box47;
	private: System::Windows::Forms::MaskedTextBox^  Box38;
	private: System::Windows::Forms::MaskedTextBox^  Box20;
	private: System::Windows::Forms::MaskedTextBox^  Box11;
	private: System::Windows::Forms::MaskedTextBox^  Box2;
	private: System::Windows::Forms::MaskedTextBox^  Box75;
	private: System::Windows::Forms::MaskedTextBox^  Box66;
	private: System::Windows::Forms::MaskedTextBox^  Box57;
	private: System::Windows::Forms::MaskedTextBox^  Box48;
	private: System::Windows::Forms::MaskedTextBox^  Box39;
	private: System::Windows::Forms::MaskedTextBox^  Box21;
	private: System::Windows::Forms::MaskedTextBox^  Box12;
	private: System::Windows::Forms::MaskedTextBox^  Box3;
	private: System::Windows::Forms::MaskedTextBox^  Box76;
	private: System::Windows::Forms::MaskedTextBox^  Box67;
	private: System::Windows::Forms::MaskedTextBox^  Box58;
	private: System::Windows::Forms::MaskedTextBox^  Box49;
	private: System::Windows::Forms::MaskedTextBox^  Box40;
	private: System::Windows::Forms::MaskedTextBox^  Box22;
	private: System::Windows::Forms::MaskedTextBox^  Box13;
	private: System::Windows::Forms::MaskedTextBox^  Box4;
	private: System::Windows::Forms::MaskedTextBox^  Box77;
	private: System::Windows::Forms::MaskedTextBox^  Box68;
	private: System::Windows::Forms::MaskedTextBox^  Box59;
	private: System::Windows::Forms::MaskedTextBox^  Box50;
	private: System::Windows::Forms::MaskedTextBox^  Box41;
	private: System::Windows::Forms::MaskedTextBox^  Box23;
	private: System::Windows::Forms::MaskedTextBox^  Box14;
	private: System::Windows::Forms::MaskedTextBox^  Box5;
	private: System::Windows::Forms::MaskedTextBox^  Box78;
	private: System::Windows::Forms::MaskedTextBox^  Box69;
	private: System::Windows::Forms::MaskedTextBox^  Box60;
	private: System::Windows::Forms::MaskedTextBox^  Box51;
	private: System::Windows::Forms::MaskedTextBox^  Box42;
	private: System::Windows::Forms::MaskedTextBox^  Box24;
	private: System::Windows::Forms::MaskedTextBox^  Box15;
	private: System::Windows::Forms::MaskedTextBox^  Box6;
	private: System::Windows::Forms::MaskedTextBox^  Box79;
	private: System::Windows::Forms::MaskedTextBox^  Box70;
	private: System::Windows::Forms::MaskedTextBox^  Box61;
	private: System::Windows::Forms::MaskedTextBox^  Box52;
	private: System::Windows::Forms::MaskedTextBox^  Box43;
	private: System::Windows::Forms::MaskedTextBox^  Box25;
	private: System::Windows::Forms::MaskedTextBox^  Box16;
	private: System::Windows::Forms::MaskedTextBox^  Box7;
	private: System::Windows::Forms::MaskedTextBox^  Box80;
	private: System::Windows::Forms::MaskedTextBox^  Box71;
	private: System::Windows::Forms::MaskedTextBox^  Box62;
	private: System::Windows::Forms::MaskedTextBox^  Box53;
	private: System::Windows::Forms::MaskedTextBox^  Box44;
	private: System::Windows::Forms::MaskedTextBox^  Box26;
	private: System::Windows::Forms::MaskedTextBox^  Box17;
	private: System::Windows::Forms::MaskedTextBox^  Box8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MaskedTextBox^  Box35;
	private: System::Windows::Forms::MaskedTextBox^  Box34;
	private: System::Windows::Forms::MaskedTextBox^  Box33;
	private: System::Windows::Forms::MaskedTextBox^  Box32;
	private: System::Windows::Forms::MaskedTextBox^  Box31;
	private: System::Windows::Forms::MaskedTextBox^  Box30;
	private: System::Windows::Forms::MaskedTextBox^  Box29;
	private: System::Windows::Forms::MaskedTextBox^  Box28;
	private: System::Windows::Forms::MaskedTextBox^  Box27;
private: System::Windows::Forms::RichTextBox^  infobox;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::RichTextBox^  errorbox;


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
			this->Box0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box45 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box54 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box63 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box72 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box73 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box64 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box55 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box46 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box74 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box65 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box56 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box47 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box75 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box66 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box57 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box48 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box76 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box67 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box58 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box49 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box77 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box68 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box59 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box50 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box78 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box69 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box60 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box51 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box79 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box70 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box61 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box52 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box80 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box71 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box62 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box53 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box44 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Box35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Box27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->infobox = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->errorbox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Box0
			// 
			this->Box0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box0->Location = System::Drawing::Point(21, 84);
			this->Box0->Mask = L"0";
			this->Box0->MinimumSize = System::Drawing::Size(40, 40);
			this->Box0->Name = L"Box0";
			this->Box0->Size = System::Drawing::Size(40, 38);
			this->Box0->TabIndex = 0;
			this->Box0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box0->TextChanged += gcnew System::EventHandler(this, &MyForm::Box0_TextChanged);
			// 
			// Box9
			// 
			this->Box9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box9->Location = System::Drawing::Point(21, 130);
			this->Box9->Mask = L"0";
			this->Box9->MinimumSize = System::Drawing::Size(40, 40);
			this->Box9->Name = L"Box9";
			this->Box9->Size = System::Drawing::Size(40, 38);
			this->Box9->TabIndex = 1;
			this->Box9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box9->TextChanged += gcnew System::EventHandler(this, &MyForm::Box9_TextChanged);
			// 
			// Box18
			// 
			this->Box18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box18->Location = System::Drawing::Point(21, 176);
			this->Box18->Mask = L"0";
			this->Box18->MinimumSize = System::Drawing::Size(40, 40);
			this->Box18->Name = L"Box18";
			this->Box18->Size = System::Drawing::Size(40, 38);
			this->Box18->TabIndex = 2;
			this->Box18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box18->TextChanged += gcnew System::EventHandler(this, &MyForm::Box18_TextChanged);
			// 
			// Box36
			// 
			this->Box36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box36->Location = System::Drawing::Point(21, 268);
			this->Box36->Mask = L"0";
			this->Box36->MinimumSize = System::Drawing::Size(40, 40);
			this->Box36->Name = L"Box36";
			this->Box36->Size = System::Drawing::Size(40, 38);
			this->Box36->TabIndex = 4;
			this->Box36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box36->TextChanged += gcnew System::EventHandler(this, &MyForm::Box36_TextChanged);
			// 
			// Box45
			// 
			this->Box45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box45->Location = System::Drawing::Point(21, 314);
			this->Box45->Mask = L"0";
			this->Box45->MinimumSize = System::Drawing::Size(40, 40);
			this->Box45->Name = L"Box45";
			this->Box45->Size = System::Drawing::Size(40, 38);
			this->Box45->TabIndex = 5;
			this->Box45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box45->TextChanged += gcnew System::EventHandler(this, &MyForm::Box45_TextChanged);
			// 
			// Box54
			// 
			this->Box54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box54->Location = System::Drawing::Point(21, 360);
			this->Box54->Mask = L"0";
			this->Box54->MinimumSize = System::Drawing::Size(40, 40);
			this->Box54->Name = L"Box54";
			this->Box54->Size = System::Drawing::Size(40, 38);
			this->Box54->TabIndex = 6;
			this->Box54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box54->TextChanged += gcnew System::EventHandler(this, &MyForm::Box54_TextChanged);
			// 
			// Box63
			// 
			this->Box63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box63->Location = System::Drawing::Point(21, 403);
			this->Box63->Mask = L"0";
			this->Box63->MinimumSize = System::Drawing::Size(40, 40);
			this->Box63->Name = L"Box63";
			this->Box63->Size = System::Drawing::Size(40, 38);
			this->Box63->TabIndex = 7;
			this->Box63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box63->TextChanged += gcnew System::EventHandler(this, &MyForm::Box63_TextChanged);
			// 
			// Box72
			// 
			this->Box72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box72->Location = System::Drawing::Point(21, 447);
			this->Box72->Mask = L"0";
			this->Box72->MinimumSize = System::Drawing::Size(40, 40);
			this->Box72->Name = L"Box72";
			this->Box72->Size = System::Drawing::Size(40, 38);
			this->Box72->TabIndex = 8;
			this->Box72->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box72->TextChanged += gcnew System::EventHandler(this, &MyForm::Box72_TextChanged);
			// 
			// Box73
			// 
			this->Box73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box73->Location = System::Drawing::Point(67, 447);
			this->Box73->Mask = L"0";
			this->Box73->MinimumSize = System::Drawing::Size(40, 40);
			this->Box73->Name = L"Box73";
			this->Box73->Size = System::Drawing::Size(40, 38);
			this->Box73->TabIndex = 17;
			this->Box73->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box73->TextChanged += gcnew System::EventHandler(this, &MyForm::Box73_TextChanged);
			// 
			// Box64
			// 
			this->Box64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box64->Location = System::Drawing::Point(67, 403);
			this->Box64->Mask = L"0";
			this->Box64->MinimumSize = System::Drawing::Size(40, 40);
			this->Box64->Name = L"Box64";
			this->Box64->Size = System::Drawing::Size(40, 38);
			this->Box64->TabIndex = 16;
			this->Box64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box64->TextChanged += gcnew System::EventHandler(this, &MyForm::Box64_TextChanged);
			// 
			// Box55
			// 
			this->Box55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box55->Location = System::Drawing::Point(67, 360);
			this->Box55->Mask = L"0";
			this->Box55->MinimumSize = System::Drawing::Size(40, 40);
			this->Box55->Name = L"Box55";
			this->Box55->Size = System::Drawing::Size(40, 38);
			this->Box55->TabIndex = 15;
			this->Box55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box55->TextChanged += gcnew System::EventHandler(this, &MyForm::Box55_TextChanged);
			// 
			// Box46
			// 
			this->Box46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box46->Location = System::Drawing::Point(67, 314);
			this->Box46->Mask = L"0";
			this->Box46->MinimumSize = System::Drawing::Size(40, 40);
			this->Box46->Name = L"Box46";
			this->Box46->Size = System::Drawing::Size(40, 38);
			this->Box46->TabIndex = 14;
			this->Box46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box46->TextChanged += gcnew System::EventHandler(this, &MyForm::Box46_TextChanged);
			// 
			// Box37
			// 
			this->Box37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box37->Location = System::Drawing::Point(67, 268);
			this->Box37->Mask = L"0";
			this->Box37->MinimumSize = System::Drawing::Size(40, 40);
			this->Box37->Name = L"Box37";
			this->Box37->Size = System::Drawing::Size(40, 38);
			this->Box37->TabIndex = 13;
			this->Box37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box37->TextChanged += gcnew System::EventHandler(this, &MyForm::Box37_TextChanged);
			// 
			// Box19
			// 
			this->Box19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box19->Location = System::Drawing::Point(67, 176);
			this->Box19->Mask = L"0";
			this->Box19->MinimumSize = System::Drawing::Size(40, 40);
			this->Box19->Name = L"Box19";
			this->Box19->Size = System::Drawing::Size(40, 38);
			this->Box19->TabIndex = 11;
			this->Box19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box19->TextChanged += gcnew System::EventHandler(this, &MyForm::Box19_TextChanged);
			// 
			// Box10
			// 
			this->Box10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box10->Location = System::Drawing::Point(67, 130);
			this->Box10->Mask = L"0";
			this->Box10->MinimumSize = System::Drawing::Size(40, 40);
			this->Box10->Name = L"Box10";
			this->Box10->Size = System::Drawing::Size(40, 38);
			this->Box10->TabIndex = 10;
			this->Box10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box10->TextChanged += gcnew System::EventHandler(this, &MyForm::Box10_TextChanged);
			// 
			// Box1
			// 
			this->Box1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box1->Location = System::Drawing::Point(67, 84);
			this->Box1->Mask = L"0";
			this->Box1->MinimumSize = System::Drawing::Size(40, 40);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(40, 38);
			this->Box1->TabIndex = 9;
			this->Box1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box1->TextChanged += gcnew System::EventHandler(this, &MyForm::Box1_TextChanged);
			// 
			// Box74
			// 
			this->Box74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box74->Location = System::Drawing::Point(113, 447);
			this->Box74->Mask = L"0";
			this->Box74->MinimumSize = System::Drawing::Size(40, 40);
			this->Box74->Name = L"Box74";
			this->Box74->Size = System::Drawing::Size(40, 38);
			this->Box74->TabIndex = 26;
			this->Box74->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box74->TextChanged += gcnew System::EventHandler(this, &MyForm::Box74_TextChanged);
			// 
			// Box65
			// 
			this->Box65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box65->Location = System::Drawing::Point(113, 403);
			this->Box65->Mask = L"0";
			this->Box65->MinimumSize = System::Drawing::Size(40, 40);
			this->Box65->Name = L"Box65";
			this->Box65->Size = System::Drawing::Size(40, 38);
			this->Box65->TabIndex = 25;
			this->Box65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box65->TextChanged += gcnew System::EventHandler(this, &MyForm::Box65_TextChanged);
			// 
			// Box56
			// 
			this->Box56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box56->Location = System::Drawing::Point(113, 360);
			this->Box56->Mask = L"0";
			this->Box56->MinimumSize = System::Drawing::Size(40, 40);
			this->Box56->Name = L"Box56";
			this->Box56->Size = System::Drawing::Size(40, 38);
			this->Box56->TabIndex = 24;
			this->Box56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box56->TextChanged += gcnew System::EventHandler(this, &MyForm::Box56_TextChanged);
			// 
			// Box47
			// 
			this->Box47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box47->Location = System::Drawing::Point(113, 314);
			this->Box47->Mask = L"0";
			this->Box47->MinimumSize = System::Drawing::Size(40, 40);
			this->Box47->Name = L"Box47";
			this->Box47->Size = System::Drawing::Size(40, 38);
			this->Box47->TabIndex = 23;
			this->Box47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box47->TextChanged += gcnew System::EventHandler(this, &MyForm::Box47_TextChanged);
			// 
			// Box38
			// 
			this->Box38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box38->Location = System::Drawing::Point(113, 268);
			this->Box38->Mask = L"0";
			this->Box38->MinimumSize = System::Drawing::Size(40, 40);
			this->Box38->Name = L"Box38";
			this->Box38->Size = System::Drawing::Size(40, 38);
			this->Box38->TabIndex = 22;
			this->Box38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box38->TextChanged += gcnew System::EventHandler(this, &MyForm::Box38_TextChanged);
			// 
			// Box20
			// 
			this->Box20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box20->Location = System::Drawing::Point(113, 176);
			this->Box20->Mask = L"0";
			this->Box20->MinimumSize = System::Drawing::Size(40, 40);
			this->Box20->Name = L"Box20";
			this->Box20->Size = System::Drawing::Size(40, 38);
			this->Box20->TabIndex = 20;
			this->Box20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box20->TextChanged += gcnew System::EventHandler(this, &MyForm::Box20_TextChanged);
			// 
			// Box11
			// 
			this->Box11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box11->Location = System::Drawing::Point(113, 130);
			this->Box11->Mask = L"0";
			this->Box11->MinimumSize = System::Drawing::Size(40, 40);
			this->Box11->Name = L"Box11";
			this->Box11->Size = System::Drawing::Size(40, 38);
			this->Box11->TabIndex = 19;
			this->Box11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box11->TextChanged += gcnew System::EventHandler(this, &MyForm::Box11_TextChanged);
			// 
			// Box2
			// 
			this->Box2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box2->Location = System::Drawing::Point(113, 84);
			this->Box2->Mask = L"0";
			this->Box2->MinimumSize = System::Drawing::Size(40, 40);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(40, 38);
			this->Box2->TabIndex = 18;
			this->Box2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box2->TextChanged += gcnew System::EventHandler(this, &MyForm::Box2_TextChanged);
			// 
			// Box75
			// 
			this->Box75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box75->Location = System::Drawing::Point(159, 447);
			this->Box75->Mask = L"0";
			this->Box75->MinimumSize = System::Drawing::Size(40, 40);
			this->Box75->Name = L"Box75";
			this->Box75->Size = System::Drawing::Size(40, 38);
			this->Box75->TabIndex = 35;
			this->Box75->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box75->TextChanged += gcnew System::EventHandler(this, &MyForm::Box75_TextChanged);
			// 
			// Box66
			// 
			this->Box66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box66->Location = System::Drawing::Point(159, 403);
			this->Box66->Mask = L"0";
			this->Box66->MinimumSize = System::Drawing::Size(40, 40);
			this->Box66->Name = L"Box66";
			this->Box66->Size = System::Drawing::Size(40, 38);
			this->Box66->TabIndex = 34;
			this->Box66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box66->TextChanged += gcnew System::EventHandler(this, &MyForm::Box66_TextChanged);
			// 
			// Box57
			// 
			this->Box57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box57->Location = System::Drawing::Point(159, 360);
			this->Box57->Mask = L"0";
			this->Box57->MinimumSize = System::Drawing::Size(40, 40);
			this->Box57->Name = L"Box57";
			this->Box57->Size = System::Drawing::Size(40, 38);
			this->Box57->TabIndex = 33;
			this->Box57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box57->TextChanged += gcnew System::EventHandler(this, &MyForm::Box57_TextChanged);
			// 
			// Box48
			// 
			this->Box48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box48->Location = System::Drawing::Point(159, 314);
			this->Box48->Mask = L"0";
			this->Box48->MinimumSize = System::Drawing::Size(40, 40);
			this->Box48->Name = L"Box48";
			this->Box48->Size = System::Drawing::Size(40, 38);
			this->Box48->TabIndex = 32;
			this->Box48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box48->TextChanged += gcnew System::EventHandler(this, &MyForm::Box48_TextChanged);
			// 
			// Box39
			// 
			this->Box39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box39->Location = System::Drawing::Point(159, 268);
			this->Box39->Mask = L"0";
			this->Box39->MinimumSize = System::Drawing::Size(40, 40);
			this->Box39->Name = L"Box39";
			this->Box39->Size = System::Drawing::Size(40, 38);
			this->Box39->TabIndex = 31;
			this->Box39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box39->TextChanged += gcnew System::EventHandler(this, &MyForm::Box39_TextChanged);
			// 
			// Box21
			// 
			this->Box21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box21->Location = System::Drawing::Point(159, 176);
			this->Box21->Mask = L"0";
			this->Box21->MinimumSize = System::Drawing::Size(40, 40);
			this->Box21->Name = L"Box21";
			this->Box21->Size = System::Drawing::Size(40, 38);
			this->Box21->TabIndex = 29;
			this->Box21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box21->TextChanged += gcnew System::EventHandler(this, &MyForm::Box21_TextChanged);
			// 
			// Box12
			// 
			this->Box12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box12->Location = System::Drawing::Point(159, 130);
			this->Box12->Mask = L"0";
			this->Box12->MinimumSize = System::Drawing::Size(40, 40);
			this->Box12->Name = L"Box12";
			this->Box12->Size = System::Drawing::Size(40, 38);
			this->Box12->TabIndex = 28;
			this->Box12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box12->TextChanged += gcnew System::EventHandler(this, &MyForm::Box12_TextChanged);
			// 
			// Box3
			// 
			this->Box3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box3->Location = System::Drawing::Point(159, 84);
			this->Box3->Mask = L"0";
			this->Box3->MinimumSize = System::Drawing::Size(40, 40);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(40, 38);
			this->Box3->TabIndex = 27;
			this->Box3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box3->TextChanged += gcnew System::EventHandler(this, &MyForm::Box3_TextChanged);
			// 
			// Box76
			// 
			this->Box76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box76->Location = System::Drawing::Point(205, 447);
			this->Box76->Mask = L"0";
			this->Box76->MinimumSize = System::Drawing::Size(40, 40);
			this->Box76->Name = L"Box76";
			this->Box76->Size = System::Drawing::Size(40, 38);
			this->Box76->TabIndex = 44;
			this->Box76->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box76->TextChanged += gcnew System::EventHandler(this, &MyForm::Box76_TextChanged);
			// 
			// Box67
			// 
			this->Box67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box67->Location = System::Drawing::Point(205, 403);
			this->Box67->Mask = L"0";
			this->Box67->MinimumSize = System::Drawing::Size(40, 40);
			this->Box67->Name = L"Box67";
			this->Box67->Size = System::Drawing::Size(40, 38);
			this->Box67->TabIndex = 43;
			this->Box67->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box67->TextChanged += gcnew System::EventHandler(this, &MyForm::Box67_TextChanged);
			// 
			// Box58
			// 
			this->Box58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box58->Location = System::Drawing::Point(205, 360);
			this->Box58->Mask = L"0";
			this->Box58->MinimumSize = System::Drawing::Size(40, 40);
			this->Box58->Name = L"Box58";
			this->Box58->Size = System::Drawing::Size(40, 38);
			this->Box58->TabIndex = 42;
			this->Box58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box58->TextChanged += gcnew System::EventHandler(this, &MyForm::Box58_TextChanged);
			// 
			// Box49
			// 
			this->Box49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box49->Location = System::Drawing::Point(205, 314);
			this->Box49->Mask = L"0";
			this->Box49->MinimumSize = System::Drawing::Size(40, 40);
			this->Box49->Name = L"Box49";
			this->Box49->Size = System::Drawing::Size(40, 38);
			this->Box49->TabIndex = 41;
			this->Box49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box49->TextChanged += gcnew System::EventHandler(this, &MyForm::Box49_TextChanged);
			// 
			// Box40
			// 
			this->Box40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box40->Location = System::Drawing::Point(205, 268);
			this->Box40->Mask = L"0";
			this->Box40->MinimumSize = System::Drawing::Size(40, 40);
			this->Box40->Name = L"Box40";
			this->Box40->Size = System::Drawing::Size(40, 38);
			this->Box40->TabIndex = 40;
			this->Box40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box40->TextChanged += gcnew System::EventHandler(this, &MyForm::Box40_TextChanged);
			// 
			// Box22
			// 
			this->Box22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box22->Location = System::Drawing::Point(205, 176);
			this->Box22->Mask = L"0";
			this->Box22->MinimumSize = System::Drawing::Size(40, 40);
			this->Box22->Name = L"Box22";
			this->Box22->Size = System::Drawing::Size(40, 38);
			this->Box22->TabIndex = 38;
			this->Box22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box22->TextChanged += gcnew System::EventHandler(this, &MyForm::Box22_TextChanged);
			// 
			// Box13
			// 
			this->Box13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box13->Location = System::Drawing::Point(205, 130);
			this->Box13->Mask = L"0";
			this->Box13->MinimumSize = System::Drawing::Size(40, 40);
			this->Box13->Name = L"Box13";
			this->Box13->Size = System::Drawing::Size(40, 38);
			this->Box13->TabIndex = 37;
			this->Box13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box13->TextChanged += gcnew System::EventHandler(this, &MyForm::Box13_TextChanged);
			// 
			// Box4
			// 
			this->Box4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box4->Location = System::Drawing::Point(205, 84);
			this->Box4->Mask = L"0";
			this->Box4->MinimumSize = System::Drawing::Size(40, 40);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(40, 38);
			this->Box4->TabIndex = 36;
			this->Box4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box4->TextChanged += gcnew System::EventHandler(this, &MyForm::Box4_TextChanged);
			// 
			// Box77
			// 
			this->Box77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box77->Location = System::Drawing::Point(251, 447);
			this->Box77->Mask = L"0";
			this->Box77->MinimumSize = System::Drawing::Size(40, 40);
			this->Box77->Name = L"Box77";
			this->Box77->Size = System::Drawing::Size(40, 38);
			this->Box77->TabIndex = 53;
			this->Box77->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box77->TextChanged += gcnew System::EventHandler(this, &MyForm::Box77_TextChanged);
			// 
			// Box68
			// 
			this->Box68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box68->Location = System::Drawing::Point(251, 403);
			this->Box68->Mask = L"0";
			this->Box68->MinimumSize = System::Drawing::Size(40, 40);
			this->Box68->Name = L"Box68";
			this->Box68->Size = System::Drawing::Size(40, 38);
			this->Box68->TabIndex = 52;
			this->Box68->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box68->TextChanged += gcnew System::EventHandler(this, &MyForm::Box68_TextChanged);
			// 
			// Box59
			// 
			this->Box59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box59->Location = System::Drawing::Point(251, 360);
			this->Box59->Mask = L"0";
			this->Box59->MinimumSize = System::Drawing::Size(40, 40);
			this->Box59->Name = L"Box59";
			this->Box59->Size = System::Drawing::Size(40, 38);
			this->Box59->TabIndex = 51;
			this->Box59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box59->TextChanged += gcnew System::EventHandler(this, &MyForm::Box59_TextChanged);
			// 
			// Box50
			// 
			this->Box50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box50->Location = System::Drawing::Point(251, 314);
			this->Box50->Mask = L"0";
			this->Box50->MinimumSize = System::Drawing::Size(40, 40);
			this->Box50->Name = L"Box50";
			this->Box50->Size = System::Drawing::Size(40, 38);
			this->Box50->TabIndex = 50;
			this->Box50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box50->TextChanged += gcnew System::EventHandler(this, &MyForm::Box50_TextChanged);
			// 
			// Box41
			// 
			this->Box41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box41->Location = System::Drawing::Point(251, 268);
			this->Box41->Mask = L"0";
			this->Box41->MinimumSize = System::Drawing::Size(40, 40);
			this->Box41->Name = L"Box41";
			this->Box41->Size = System::Drawing::Size(40, 38);
			this->Box41->TabIndex = 49;
			this->Box41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box41->TextChanged += gcnew System::EventHandler(this, &MyForm::Box41_TextChanged);
			// 
			// Box23
			// 
			this->Box23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box23->Location = System::Drawing::Point(251, 176);
			this->Box23->Mask = L"0";
			this->Box23->MinimumSize = System::Drawing::Size(40, 40);
			this->Box23->Name = L"Box23";
			this->Box23->Size = System::Drawing::Size(40, 38);
			this->Box23->TabIndex = 47;
			this->Box23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box23->TextChanged += gcnew System::EventHandler(this, &MyForm::Box23_TextChanged);
			// 
			// Box14
			// 
			this->Box14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box14->Location = System::Drawing::Point(251, 130);
			this->Box14->Mask = L"0";
			this->Box14->MinimumSize = System::Drawing::Size(40, 40);
			this->Box14->Name = L"Box14";
			this->Box14->Size = System::Drawing::Size(40, 38);
			this->Box14->TabIndex = 46;
			this->Box14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box14->TextChanged += gcnew System::EventHandler(this, &MyForm::Box14_TextChanged);
			// 
			// Box5
			// 
			this->Box5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box5->Location = System::Drawing::Point(251, 84);
			this->Box5->Mask = L"0";
			this->Box5->MinimumSize = System::Drawing::Size(40, 40);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(40, 38);
			this->Box5->TabIndex = 45;
			this->Box5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box5->TextChanged += gcnew System::EventHandler(this, &MyForm::Box5_TextChanged);
			// 
			// Box78
			// 
			this->Box78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box78->Location = System::Drawing::Point(297, 447);
			this->Box78->Mask = L"0";
			this->Box78->MinimumSize = System::Drawing::Size(40, 40);
			this->Box78->Name = L"Box78";
			this->Box78->Size = System::Drawing::Size(40, 38);
			this->Box78->TabIndex = 62;
			this->Box78->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box78->TextChanged += gcnew System::EventHandler(this, &MyForm::Box78_TextChanged);
			// 
			// Box69
			// 
			this->Box69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box69->Location = System::Drawing::Point(297, 403);
			this->Box69->Mask = L"0";
			this->Box69->MinimumSize = System::Drawing::Size(40, 40);
			this->Box69->Name = L"Box69";
			this->Box69->Size = System::Drawing::Size(40, 38);
			this->Box69->TabIndex = 61;
			this->Box69->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box69->TextChanged += gcnew System::EventHandler(this, &MyForm::Box69_TextChanged);
			// 
			// Box60
			// 
			this->Box60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box60->Location = System::Drawing::Point(297, 360);
			this->Box60->Mask = L"0";
			this->Box60->MinimumSize = System::Drawing::Size(40, 40);
			this->Box60->Name = L"Box60";
			this->Box60->Size = System::Drawing::Size(40, 38);
			this->Box60->TabIndex = 60;
			this->Box60->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box60->TextChanged += gcnew System::EventHandler(this, &MyForm::Box60_TextChanged);
			// 
			// Box51
			// 
			this->Box51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box51->Location = System::Drawing::Point(297, 314);
			this->Box51->Mask = L"0";
			this->Box51->MinimumSize = System::Drawing::Size(40, 40);
			this->Box51->Name = L"Box51";
			this->Box51->Size = System::Drawing::Size(40, 38);
			this->Box51->TabIndex = 59;
			this->Box51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box51->TextChanged += gcnew System::EventHandler(this, &MyForm::Box51_TextChanged);
			// 
			// Box42
			// 
			this->Box42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box42->Location = System::Drawing::Point(297, 268);
			this->Box42->Mask = L"0";
			this->Box42->MinimumSize = System::Drawing::Size(40, 40);
			this->Box42->Name = L"Box42";
			this->Box42->Size = System::Drawing::Size(40, 38);
			this->Box42->TabIndex = 58;
			this->Box42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box42->TextChanged += gcnew System::EventHandler(this, &MyForm::Box42_TextChanged);
			// 
			// Box24
			// 
			this->Box24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box24->Location = System::Drawing::Point(297, 176);
			this->Box24->Mask = L"0";
			this->Box24->MinimumSize = System::Drawing::Size(40, 40);
			this->Box24->Name = L"Box24";
			this->Box24->Size = System::Drawing::Size(40, 38);
			this->Box24->TabIndex = 56;
			this->Box24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box24->TextChanged += gcnew System::EventHandler(this, &MyForm::Box24_TextChanged);
			// 
			// Box15
			// 
			this->Box15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box15->Location = System::Drawing::Point(297, 130);
			this->Box15->Mask = L"0";
			this->Box15->MinimumSize = System::Drawing::Size(40, 40);
			this->Box15->Name = L"Box15";
			this->Box15->Size = System::Drawing::Size(40, 38);
			this->Box15->TabIndex = 55;
			this->Box15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box15->TextChanged += gcnew System::EventHandler(this, &MyForm::Box15_TextChanged);
			// 
			// Box6
			// 
			this->Box6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box6->Location = System::Drawing::Point(297, 84);
			this->Box6->Mask = L"0";
			this->Box6->MinimumSize = System::Drawing::Size(40, 40);
			this->Box6->Name = L"Box6";
			this->Box6->Size = System::Drawing::Size(40, 38);
			this->Box6->TabIndex = 54;
			this->Box6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box6->TextChanged += gcnew System::EventHandler(this, &MyForm::Box6_TextChanged);
			// 
			// Box79
			// 
			this->Box79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box79->Location = System::Drawing::Point(343, 447);
			this->Box79->Mask = L"0";
			this->Box79->MinimumSize = System::Drawing::Size(40, 40);
			this->Box79->Name = L"Box79";
			this->Box79->Size = System::Drawing::Size(40, 38);
			this->Box79->TabIndex = 71;
			this->Box79->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box79->TextChanged += gcnew System::EventHandler(this, &MyForm::Box79_TextChanged);
			// 
			// Box70
			// 
			this->Box70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box70->Location = System::Drawing::Point(343, 403);
			this->Box70->Mask = L"0";
			this->Box70->MinimumSize = System::Drawing::Size(40, 40);
			this->Box70->Name = L"Box70";
			this->Box70->Size = System::Drawing::Size(40, 38);
			this->Box70->TabIndex = 70;
			this->Box70->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box70->TextChanged += gcnew System::EventHandler(this, &MyForm::Box70_TextChanged);
			// 
			// Box61
			// 
			this->Box61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box61->Location = System::Drawing::Point(343, 360);
			this->Box61->Mask = L"0";
			this->Box61->MinimumSize = System::Drawing::Size(40, 40);
			this->Box61->Name = L"Box61";
			this->Box61->Size = System::Drawing::Size(40, 38);
			this->Box61->TabIndex = 69;
			this->Box61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box61->TextChanged += gcnew System::EventHandler(this, &MyForm::Box61_TextChanged);
			// 
			// Box52
			// 
			this->Box52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box52->Location = System::Drawing::Point(343, 314);
			this->Box52->Mask = L"0";
			this->Box52->MinimumSize = System::Drawing::Size(40, 40);
			this->Box52->Name = L"Box52";
			this->Box52->Size = System::Drawing::Size(40, 38);
			this->Box52->TabIndex = 68;
			this->Box52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box52->TextChanged += gcnew System::EventHandler(this, &MyForm::Box52_TextChanged);
			// 
			// Box43
			// 
			this->Box43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box43->Location = System::Drawing::Point(343, 268);
			this->Box43->Mask = L"0";
			this->Box43->MinimumSize = System::Drawing::Size(40, 40);
			this->Box43->Name = L"Box43";
			this->Box43->Size = System::Drawing::Size(40, 38);
			this->Box43->TabIndex = 67;
			this->Box43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box43->TextChanged += gcnew System::EventHandler(this, &MyForm::Box43_TextChanged);
			// 
			// Box25
			// 
			this->Box25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box25->Location = System::Drawing::Point(343, 176);
			this->Box25->Mask = L"0";
			this->Box25->MinimumSize = System::Drawing::Size(40, 40);
			this->Box25->Name = L"Box25";
			this->Box25->Size = System::Drawing::Size(40, 38);
			this->Box25->TabIndex = 65;
			this->Box25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box25->TextChanged += gcnew System::EventHandler(this, &MyForm::Box25_TextChanged);
			// 
			// Box16
			// 
			this->Box16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box16->Location = System::Drawing::Point(343, 130);
			this->Box16->Mask = L"0";
			this->Box16->MinimumSize = System::Drawing::Size(40, 40);
			this->Box16->Name = L"Box16";
			this->Box16->Size = System::Drawing::Size(40, 38);
			this->Box16->TabIndex = 64;
			this->Box16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box16->TextChanged += gcnew System::EventHandler(this, &MyForm::Box16_TextChanged);
			// 
			// Box7
			// 
			this->Box7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box7->Location = System::Drawing::Point(343, 84);
			this->Box7->Mask = L"0";
			this->Box7->MinimumSize = System::Drawing::Size(40, 40);
			this->Box7->Name = L"Box7";
			this->Box7->Size = System::Drawing::Size(40, 38);
			this->Box7->TabIndex = 63;
			this->Box7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box7->TextChanged += gcnew System::EventHandler(this, &MyForm::Box7_TextChanged);
			// 
			// Box80
			// 
			this->Box80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box80->Location = System::Drawing::Point(389, 447);
			this->Box80->Mask = L"0";
			this->Box80->MinimumSize = System::Drawing::Size(40, 40);
			this->Box80->Name = L"Box80";
			this->Box80->Size = System::Drawing::Size(40, 38);
			this->Box80->TabIndex = 80;
			this->Box80->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box80->TextChanged += gcnew System::EventHandler(this, &MyForm::Box80_TextChanged);
			// 
			// Box71
			// 
			this->Box71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box71->Location = System::Drawing::Point(389, 403);
			this->Box71->Mask = L"0";
			this->Box71->MinimumSize = System::Drawing::Size(40, 40);
			this->Box71->Name = L"Box71";
			this->Box71->Size = System::Drawing::Size(40, 38);
			this->Box71->TabIndex = 79;
			this->Box71->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box71->TextChanged += gcnew System::EventHandler(this, &MyForm::Box71_TextChanged);
			// 
			// Box62
			// 
			this->Box62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box62->Location = System::Drawing::Point(389, 360);
			this->Box62->Mask = L"0";
			this->Box62->MinimumSize = System::Drawing::Size(40, 40);
			this->Box62->Name = L"Box62";
			this->Box62->Size = System::Drawing::Size(40, 38);
			this->Box62->TabIndex = 78;
			this->Box62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box62->TextChanged += gcnew System::EventHandler(this, &MyForm::Box62_TextChanged);
			// 
			// Box53
			// 
			this->Box53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box53->Location = System::Drawing::Point(389, 314);
			this->Box53->Mask = L"0";
			this->Box53->MinimumSize = System::Drawing::Size(40, 40);
			this->Box53->Name = L"Box53";
			this->Box53->Size = System::Drawing::Size(40, 38);
			this->Box53->TabIndex = 77;
			this->Box53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box53->TextChanged += gcnew System::EventHandler(this, &MyForm::Box53_TextChanged);
			// 
			// Box44
			// 
			this->Box44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box44->Location = System::Drawing::Point(389, 268);
			this->Box44->Mask = L"0";
			this->Box44->MinimumSize = System::Drawing::Size(40, 40);
			this->Box44->Name = L"Box44";
			this->Box44->Size = System::Drawing::Size(40, 38);
			this->Box44->TabIndex = 76;
			this->Box44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box44->TextChanged += gcnew System::EventHandler(this, &MyForm::Box44_TextChanged);
			// 
			// Box26
			// 
			this->Box26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box26->Location = System::Drawing::Point(389, 176);
			this->Box26->Mask = L"0";
			this->Box26->MinimumSize = System::Drawing::Size(40, 40);
			this->Box26->Name = L"Box26";
			this->Box26->Size = System::Drawing::Size(40, 38);
			this->Box26->TabIndex = 74;
			this->Box26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box26->TextChanged += gcnew System::EventHandler(this, &MyForm::Box26_TextChanged);
			// 
			// Box17
			// 
			this->Box17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box17->Location = System::Drawing::Point(389, 130);
			this->Box17->Mask = L"0";
			this->Box17->MinimumSize = System::Drawing::Size(40, 40);
			this->Box17->Name = L"Box17";
			this->Box17->Size = System::Drawing::Size(40, 38);
			this->Box17->TabIndex = 73;
			this->Box17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box17->TextChanged += gcnew System::EventHandler(this, &MyForm::Box17_TextChanged);
			// 
			// Box8
			// 
			this->Box8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box8->Location = System::Drawing::Point(389, 84);
			this->Box8->Mask = L"0";
			this->Box8->MinimumSize = System::Drawing::Size(40, 40);
			this->Box8->Name = L"Box8";
			this->Box8->Size = System::Drawing::Size(40, 38);
			this->Box8->TabIndex = 72;
			this->Box8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box8->TextChanged += gcnew System::EventHandler(this, &MyForm::Box8_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->richTextBox1->Location = System::Drawing::Point(21, 23);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(599, 55);
			this->richTextBox1->TabIndex = 81;
			this->richTextBox1->Text = L"Algorytmy i struktury danych - Sudoku";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(436, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 37);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Rozwi¹¿";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Box35
			// 
			this->Box35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box35->Location = System::Drawing::Point(389, 220);
			this->Box35->Mask = L"0";
			this->Box35->MinimumSize = System::Drawing::Size(40, 40);
			this->Box35->Name = L"Box35";
			this->Box35->Size = System::Drawing::Size(40, 38);
			this->Box35->TabIndex = 91;
			this->Box35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box35->TextChanged += gcnew System::EventHandler(this, &MyForm::Box35_TextChanged);
			// 
			// Box34
			// 
			this->Box34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box34->Location = System::Drawing::Point(343, 220);
			this->Box34->Mask = L"0";
			this->Box34->MinimumSize = System::Drawing::Size(40, 40);
			this->Box34->Name = L"Box34";
			this->Box34->Size = System::Drawing::Size(40, 38);
			this->Box34->TabIndex = 90;
			this->Box34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box34->TextChanged += gcnew System::EventHandler(this, &MyForm::Box34_TextChanged);
			// 
			// Box33
			// 
			this->Box33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box33->Location = System::Drawing::Point(297, 220);
			this->Box33->Mask = L"0";
			this->Box33->MinimumSize = System::Drawing::Size(40, 40);
			this->Box33->Name = L"Box33";
			this->Box33->Size = System::Drawing::Size(40, 38);
			this->Box33->TabIndex = 89;
			this->Box33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box33->TextChanged += gcnew System::EventHandler(this, &MyForm::Box33_TextChanged);
			// 
			// Box32
			// 
			this->Box32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box32->Location = System::Drawing::Point(251, 220);
			this->Box32->Mask = L"0";
			this->Box32->MinimumSize = System::Drawing::Size(40, 40);
			this->Box32->Name = L"Box32";
			this->Box32->Size = System::Drawing::Size(40, 38);
			this->Box32->TabIndex = 88;
			this->Box32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box32->TextChanged += gcnew System::EventHandler(this, &MyForm::Box32_TextChanged);
			// 
			// Box31
			// 
			this->Box31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box31->Location = System::Drawing::Point(205, 220);
			this->Box31->Mask = L"0";
			this->Box31->MinimumSize = System::Drawing::Size(40, 40);
			this->Box31->Name = L"Box31";
			this->Box31->Size = System::Drawing::Size(40, 38);
			this->Box31->TabIndex = 87;
			this->Box31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box31->TextChanged += gcnew System::EventHandler(this, &MyForm::Box31_TextChanged);
			// 
			// Box30
			// 
			this->Box30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box30->Location = System::Drawing::Point(159, 220);
			this->Box30->Mask = L"0";
			this->Box30->MinimumSize = System::Drawing::Size(40, 40);
			this->Box30->Name = L"Box30";
			this->Box30->Size = System::Drawing::Size(40, 38);
			this->Box30->TabIndex = 86;
			this->Box30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box30->TextChanged += gcnew System::EventHandler(this, &MyForm::Box30_TextChanged);
			// 
			// Box29
			// 
			this->Box29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box29->Location = System::Drawing::Point(113, 220);
			this->Box29->Mask = L"0";
			this->Box29->MinimumSize = System::Drawing::Size(40, 40);
			this->Box29->Name = L"Box29";
			this->Box29->Size = System::Drawing::Size(40, 38);
			this->Box29->TabIndex = 85;
			this->Box29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box29->TextChanged += gcnew System::EventHandler(this, &MyForm::Box29_TextChanged);
			// 
			// Box28
			// 
			this->Box28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box28->Location = System::Drawing::Point(67, 220);
			this->Box28->Mask = L"0";
			this->Box28->MinimumSize = System::Drawing::Size(40, 40);
			this->Box28->Name = L"Box28";
			this->Box28->Size = System::Drawing::Size(40, 38);
			this->Box28->TabIndex = 84;
			this->Box28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box28->TextChanged += gcnew System::EventHandler(this, &MyForm::Box28_TextChanged);
			// 
			// Box27
			// 
			this->Box27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Box27->Location = System::Drawing::Point(21, 220);
			this->Box27->Mask = L"0";
			this->Box27->MinimumSize = System::Drawing::Size(40, 40);
			this->Box27->Name = L"Box27";
			this->Box27->Size = System::Drawing::Size(40, 38);
			this->Box27->TabIndex = 83;
			this->Box27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Box27->TextChanged += gcnew System::EventHandler(this, &MyForm::Box27_TextChanged);
			// 
			// infobox
			// 
			this->infobox->BackColor = System::Drawing::SystemColors::Control;
			this->infobox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->infobox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->infobox->ForeColor = System::Drawing::Color::Black;
			this->infobox->Location = System::Drawing::Point(436, 403);
			this->infobox->Name = L"infobox";
			this->infobox->ReadOnly = true;
			this->infobox->Size = System::Drawing::Size(184, 82);
			this->infobox->TabIndex = 92;
			this->infobox->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(436, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 36);
			this->button2->TabIndex = 93;
			this->button2->Text = L"Zeruj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(19, 216);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(413, 2);
			this->panel1->TabIndex = 94;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(0, 217);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(413, 2);
			this->panel2->TabIndex = 95;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(21, 355);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(413, 2);
			this->panel3->TabIndex = 95;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(155, 83);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(2, 413);
			this->panel4->TabIndex = 96;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(293, 82);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(2, 413);
			this->panel5->TabIndex = 97;
			// 
			// errorbox
			// 
			this->errorbox->BackColor = System::Drawing::SystemColors::Control;
			this->errorbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->errorbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->errorbox->ForeColor = System::Drawing::Color::Black;
			this->errorbox->Location = System::Drawing::Point(440, 298);
			this->errorbox->Name = L"errorbox";
			this->errorbox->ReadOnly = true;
			this->errorbox->Size = System::Drawing::Size(184, 82);
			this->errorbox->TabIndex = 98;
			this->errorbox->Text = L"";
//			this->errorbox->TextChanged += gcnew System::EventHandler(this, &MyForm::errorbox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 492);
			this->Controls->Add(this->errorbox);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->infobox);
			this->Controls->Add(this->Box35);
			this->Controls->Add(this->Box34);
			this->Controls->Add(this->Box33);
			this->Controls->Add(this->Box32);
			this->Controls->Add(this->Box31);
			this->Controls->Add(this->Box30);
			this->Controls->Add(this->Box29);
			this->Controls->Add(this->Box28);
			this->Controls->Add(this->Box27);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Box80);
			this->Controls->Add(this->Box71);
			this->Controls->Add(this->Box62);
			this->Controls->Add(this->Box53);
			this->Controls->Add(this->Box44);
			this->Controls->Add(this->Box26);
			this->Controls->Add(this->Box17);
			this->Controls->Add(this->Box8);
			this->Controls->Add(this->Box79);
			this->Controls->Add(this->Box70);
			this->Controls->Add(this->Box61);
			this->Controls->Add(this->Box52);
			this->Controls->Add(this->Box43);
			this->Controls->Add(this->Box25);
			this->Controls->Add(this->Box16);
			this->Controls->Add(this->Box7);
			this->Controls->Add(this->Box78);
			this->Controls->Add(this->Box69);
			this->Controls->Add(this->Box60);
			this->Controls->Add(this->Box51);
			this->Controls->Add(this->Box42);
			this->Controls->Add(this->Box24);
			this->Controls->Add(this->Box15);
			this->Controls->Add(this->Box6);
			this->Controls->Add(this->Box77);
			this->Controls->Add(this->Box68);
			this->Controls->Add(this->Box59);
			this->Controls->Add(this->Box50);
			this->Controls->Add(this->Box41);
			this->Controls->Add(this->Box23);
			this->Controls->Add(this->Box14);
			this->Controls->Add(this->Box5);
			this->Controls->Add(this->Box76);
			this->Controls->Add(this->Box67);
			this->Controls->Add(this->Box58);
			this->Controls->Add(this->Box49);
			this->Controls->Add(this->Box40);
			this->Controls->Add(this->Box22);
			this->Controls->Add(this->Box13);
			this->Controls->Add(this->Box4);
			this->Controls->Add(this->Box75);
			this->Controls->Add(this->Box66);
			this->Controls->Add(this->Box57);
			this->Controls->Add(this->Box48);
			this->Controls->Add(this->Box39);
			this->Controls->Add(this->Box21);
			this->Controls->Add(this->Box12);
			this->Controls->Add(this->Box3);
			this->Controls->Add(this->Box74);
			this->Controls->Add(this->Box65);
			this->Controls->Add(this->Box56);
			this->Controls->Add(this->Box47);
			this->Controls->Add(this->Box38);
			this->Controls->Add(this->Box20);
			this->Controls->Add(this->Box11);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->Box73);
			this->Controls->Add(this->Box64);
			this->Controls->Add(this->Box55);
			this->Controls->Add(this->Box46);
			this->Controls->Add(this->Box37);
			this->Controls->Add(this->Box19);
			this->Controls->Add(this->Box10);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->Box72);
			this->Controls->Add(this->Box63);
			this->Controls->Add(this->Box54);
			this->Controls->Add(this->Box45);
			this->Controls->Add(this->Box36);
			this->Controls->Add(this->Box18);
			this->Controls->Add(this->Box9);
			this->Controls->Add(this->Box0);
			this->MaximumSize = System::Drawing::Size(648, 531);
			this->MinimumSize = System::Drawing::Size(648, 531);
			this->Name = L"MyForm";
			this->Text = L"Sudoku";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::Box80_TextChanged);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: int get_box_number(int x, int y)
		{
			int c = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if ((x == i) && (y == j)) return c;
					c++;
				}
			}
			return 0;
		}

		private: bool can_insert(int tmp[9][9], int x, int y, int value) {
			if (value != 0)
			{
				for (int i = 0; i < 9; i++)
				{
					if (i != y && (value == tmp[x][i])) return false;
					if (i != x && (value == tmp[i][y])) return false;
					if (((x / 3 * 3 + i % 3) != x && (y / 3 * 3 + i / 3) != y) && (value == tmp[x / 3 * 3 + i % 3][y / 3 * 3 + i / 3])) return false;
				}
			}
			return true;
		}

		private: bool next(int sudoku_arr[9][9], int tmp[9][9], int x, int y) {
			if (x == 8 && y == 8) 
				return true;
			else if (x == 8) 
				return this->solve(sudoku_arr, tmp, 0, y + 1);
			else 
				return this->solve(sudoku_arr, tmp, x + 1, y);
		}

		private: bool solve(int sudoku_arr[9][9], int tmp[9][9], int x, int y) {
			if (sudoku_arr[x][y] == 0) {
				for (int i = 1; i <= 9; i++) {
					if (this->can_insert(tmp, x, y, i)) {
						tmp[x][y] = i;
						if (this->next(sudoku_arr, tmp, x, y)) 
							return true;
					}
				} 
				tmp[x][y] = 0; 
				return false;
			} 
			return this->next(sudoku_arr, tmp, x, y);
		}

		private: bool check_array(int sudoku[9][9])
		{
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (sudoku[i][j] != 0)
					{
						if (this->can_insert(sudoku, i, j, sudoku[i][j]) == false)
							return false;
						else
							return true;

					}
				}
			}
			return false;
		}

		private: Void boxes_to_array(int tab[9][9])
		{
			int c = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if ((this->Controls["Box" + c.ToString()]->Text == ""))
						tab[i][j] = System::Convert::ToInt32(0);
					else
						tab[i][j] = System::Convert::ToInt32(this->Controls["Box" + c.ToString()]->Text);
					c++;
				}
			}
		}

		private: Void array_to_boxes(int tmp[9][9], int sudoku[9][9])
		{
			int c = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					this->Controls["Box" + c.ToString()]->Text = tmp[i][j].ToString();
					if (sudoku[i][j] != 0)
						this->Controls["Box" + c.ToString()]->ForeColor = Color::Green;
					c++;
				}
			}
		}

		private: bool is_empty_sudoku(int sudoku[9][9])
		{
			int res = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (sudoku[i][j] == 0) res++;
				}
			}
			if (res == 81) return true;
			return false;
		}

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			clock_t start = clock();

			int sudoku_arr[9][9];
			int tmp[9][9];
			this->boxes_to_array(sudoku_arr);
			if (this->is_empty_sudoku(sudoku_arr))
				sudoku_arr[0][0] = 1; 
			if (this->check_array(sudoku_arr))
			{
				for (int i = 0; i < 9; i++)
					for (int j = 0; j < 9; j++)
						tmp[i][j] = sudoku_arr[i][j];
				if (this->solve(sudoku_arr, tmp, 0, 0))
				{
					this->array_to_boxes(tmp, sudoku_arr);
					clock_t end = clock();
					this->infobox->Text = "Czas rozwi¹zania: \n" + (end - start).ToString() + " milisekund";
				}
			}
			else
				this->errorbox->Text = "Brak rozwi¹zania";
		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int c = 0;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				this->Controls["Box" + c.ToString()]->Text = "";
				this->Controls["Box" + c.ToString()]->ForeColor = Color::Black;
				c++;
			}
		}
		this->errorbox->Text = " ";
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: bool box_validation(int val, int x, int y)
	{
		for (int i = 0; i < 9; i++)
		{
			if ((i != y) && (this->Controls["Box" + this->get_box_number(x, i).ToString()]->Text != "") && (val == System::Convert::ToInt32(this->Controls["Box" + this->get_box_number(x, i).ToString()]->Text))) return false;
		}
		for (int j = 0; j < 9; j++)
		{
			if ((j != x) && (this->Controls["Box" + this->get_box_number(j, y).ToString()]->Text != "") && (val == System::Convert::ToInt32(this->Controls["Box" + this->get_box_number(j, y).ToString()]->Text))) return false;
			if (((x / 3 * 3 + j % 3) != x && (y / 3 * 3 + j / 3) != y) && ("" != this->Controls["Box" + this->get_box_number(x / 3 * 3 + j % 3, y / 3 * 3 + j / 3).ToString()]->Text) && (val == System::Convert::ToInt32(this->Controls["Box" + this->get_box_number(x / 3 * 3 + j % 3, y / 3 * 3 + j / 3).ToString()]->Text))) return false;
		}
		return true;
	}

	private: void manage_box(int i, int x, int y)
	{
		if ((this->Controls["Box" + i.ToString()]->Text != "") && this->box_validation(System::Convert::ToInt32(this->Controls["Box" + i.ToString()]->Text), x, y))
			this->Controls["Box" + i.ToString()]->ForeColor = System::Drawing::SystemColors::MenuHighlight;
		else
		{
			if (this->Controls["Box" + i.ToString()]->Text == "")
				this->Controls["Box" + i.ToString()]->ForeColor = Color::Black;
			else
				this->Controls["Box" + i.ToString()]->ForeColor = Color::Red;
		}
	}

	private: void Box0_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(0, 0, 0);	
	}

	private: void Box1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(1, 0, 1);
	}

	private: void Box2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(2, 0, 2);
	}

	private: void Box3_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(3, 0, 3);
	}

	private: void Box4_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(4, 0, 4);
	}

	private: void Box5_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(5, 0, 5);
	}

	private: void Box6_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(6, 0, 6);
	}

	private: void Box7_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(7, 0, 7);
	}

	private: void Box8_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(8, 0, 8);
	}

	private: void Box9_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(9, 1, 0);
	}

	private: void Box10_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(10, 1, 1);
	}
	
	private: void Box11_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(11, 1, 2);
	}

	private: void Box12_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(12, 1, 3);
	}

	private: void Box13_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(13, 1, 4);
	}

	private: void Box14_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(14, 1, 5);
	}

	private: void Box15_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(15, 1, 6);
	}

	private: void Box16_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(16, 1, 7);
	}

	private: void Box17_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(17, 1, 8);
	}

	private: void Box18_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(18, 2, 0);
	}

	private: void Box19_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(19, 2, 1);
	}

	private: void Box20_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(20, 2, 2);
	}

	private: void Box21_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(21, 2, 3);
	}

	private: void Box22_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(22, 2, 4);
	}
	
	private: void Box23_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(23, 2, 5);
	}

	private: void Box24_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(24, 2, 6);
	}

	private: void Box25_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(25, 2, 7);
	}

	private: void Box26_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(26, 2, 8);
	}

	private: void Box27_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(27, 3, 0);
	}

	private: void Box28_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(28, 3, 1);
	}

	private: void Box29_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(29, 3, 2);
	}

	private: void Box30_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(30, 3, 3);
	}

	private: void Box31_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(31, 3, 4);
	}

	private: void Box32_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(32, 3, 5);
	}

	private: void Box33_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(33, 3, 6);
	}

	private: void Box34_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(34, 3, 7);
	}

	private: void Box35_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(35, 3, 8);
	}

	private: void Box36_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(36, 4, 0);
	}

	private: void Box37_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(37, 4, 1);
	}

	private: void Box38_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(38, 4, 2);
	}

	private: void Box39_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(39, 4, 3);
	}

	private: void Box40_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(40, 4, 4);
	}

	private: void Box41_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(41, 4, 5);
	}

	private: void Box42_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(42, 4, 6);
	}

	private: void Box43_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(43, 4, 7);
	}

	private: void Box44_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(44, 4, 8);
	}

	private: void Box45_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(45, 5, 0);
	}

	private: void Box46_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(46, 5, 1);
	}

	private: void Box47_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(47, 5, 2);
	}

	private: void Box48_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(48, 5, 3);
	}

	private: void Box49_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(49, 5, 4);
	}

	private: void Box50_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(50, 5, 5);
	}

	private: void Box51_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(51, 5, 6);
	}

	private: void Box52_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(52, 5, 7);
	}

	private: void Box53_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(53, 5, 8);
	}

	private: void Box54_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(54, 6, 0);
	}

	private: void Box55_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(55, 6, 1);
	}

	private: void Box56_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(56, 6, 2);
	}

	private: void Box57_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(57, 6, 3);
	}

	private: void Box58_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(58, 6, 4);
	}

	private: void Box59_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(59, 6, 5);
	}

	private: void Box60_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(60, 6, 6);
	}

	private: void Box61_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(61, 6, 7);
	}

	private: void Box62_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(62, 6, 8);
	}

	private: void Box63_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(63, 7, 0);
	}

	private: void Box64_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(64, 7, 1);
	}

	private: void Box65_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(65, 7, 2);
	}

	private: void Box66_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(66, 7, 3);
	}

	private: void Box67_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(67, 7, 4);
	}

	private: void Box68_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(68, 7, 5);
	}

	private: void Box69_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(69, 7, 6);
	}

	private: void Box70_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(70, 7, 7);
	}

	private: void Box71_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(71, 7, 8);
	}

	private: void Box72_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(72, 8, 0);
	}

	private: void Box73_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(73, 8, 1);
	}

	private: void Box74_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(74, 8, 2);
	}

	private: void Box75_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(75, 8, 3);
	}

	private: void Box76_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(76, 8, 4);
	}

	private: void Box77_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(77, 8, 5);
	}

	private: void Box78_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(78, 8, 6);
	}

	private: void Box79_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(79, 8, 7);
	}

	private: void Box80_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->manage_box(80, 8, 8);
	}


};
}





