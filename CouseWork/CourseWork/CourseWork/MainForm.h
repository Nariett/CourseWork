#pragma once
#include <string.h>//подключение библиотеки string.h для работы с строками
#include <fstream>//подключение библиотеки fstream дляx чтения файлов
#include <stdexcept>//подключение библиотеки stdexcept для работы с исключениями
#include "HelpForm.h"//подключение оконной формы HelpForm.h
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(int x, int y)//коструктор принимающий несколько целочисленных параметров
		{
			InitializeComponent();//метод InitializeComponent()
			this->Color = y;//инициализируем глобальную переменную Color
			this->Language = x;//инициализируем глобальную переменную Color
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backGroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rUToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ createFileToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backGroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(12, 43);
			this->fileListBox1->Name = L"fileListBox1";
			this->fileListBox1->Pattern = L"*.*";
			this->fileListBox1->Size = System::Drawing::Size(120, 446);
			this->fileListBox1->TabIndex = 0;
			this->fileListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::fileListBox1_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->createFileToolStripMenuItem, this->saveToolStripMenuItem, this->settingsToolStripMenuItem, this->fontToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(785, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openFileToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->openFileToolStripMenuItem->Text = L"OpenFile";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openFileToolStripMenuItem_Click);
			// 
			// createFileToolStripMenuItem
			// 
			this->createFileToolStripMenuItem->Name = L"createFileToolStripMenuItem";
			this->createFileToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->createFileToolStripMenuItem->Text = L"Create File";
			this->createFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::createFileToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backGroundToolStripMenuItem,
					this->languageToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// backGroundToolStripMenuItem
			// 
			this->backGroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->blueToolStripMenuItem,
					this->greenToolStripMenuItem, this->redToolStripMenuItem, this->defaultToolStripMenuItem
			});
			this->backGroundToolStripMenuItem->Name = L"backGroundToolStripMenuItem";
			this->backGroundToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->backGroundToolStripMenuItem->Text = L"Background";
			// 
			// blueToolStripMenuItem
			// 
			this->blueToolStripMenuItem->Name = L"blueToolStripMenuItem";
			this->blueToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->blueToolStripMenuItem->Text = L"Blue";
			this->blueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::blueToolStripMenuItem_Click);
			// 
			// greenToolStripMenuItem
			// 
			this->greenToolStripMenuItem->Name = L"greenToolStripMenuItem";
			this->greenToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->greenToolStripMenuItem->Text = L"Green";
			this->greenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::greenToolStripMenuItem_Click);
			// 
			// redToolStripMenuItem
			// 
			this->redToolStripMenuItem->Name = L"redToolStripMenuItem";
			this->redToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->redToolStripMenuItem->Text = L"Red";
			this->redToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::redToolStripMenuItem_Click);
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::defaultToolStripMenuItem_Click);
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->bYToolStripMenuItem,
					this->eNToolStripMenuItem, this->rUToolStripMenuItem
			});
			this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
			this->languageToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// bYToolStripMenuItem
			// 
			this->bYToolStripMenuItem->Name = L"bYToolStripMenuItem";
			this->bYToolStripMenuItem->Size = System::Drawing::Size(89, 22);
			this->bYToolStripMenuItem->Text = L"BY";
			this->bYToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::bYToolStripMenuItem_Click);
			// 
			// eNToolStripMenuItem
			// 
			this->eNToolStripMenuItem->Name = L"eNToolStripMenuItem";
			this->eNToolStripMenuItem->Size = System::Drawing::Size(89, 22);
			this->eNToolStripMenuItem->Text = L"EN";
			this->eNToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::eNToolStripMenuItem_Click);
			// 
			// rUToolStripMenuItem
			// 
			this->rUToolStripMenuItem->Name = L"rUToolStripMenuItem";
			this->rUToolStripMenuItem->Size = System::Drawing::Size(89, 22);
			this->rUToolStripMenuItem->Text = L"RU";
			this->rUToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::rUToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fontToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::helpToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(238, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Text 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(509, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Text 2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Compare";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(227, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Paste here";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(487, 498);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Paste here";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 521);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 9;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(658, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(141, 43);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(253, 446);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(400, 43);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(253, 446);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(660, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(658, 100);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Replace";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(658, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Files";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 551);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fileListBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Main";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void DeleteTNR(String^& x)//функция для удаления из строки \t \n \r
		{
			bool point = false;//декларация и инициализация переменной типа bool
			int poi = 0;//декларация и инициализация переменной типа int
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if ((Text[i] == '\t') | (Text[i] == '\n') | (Text[i] == '\r'))//если в данной строке найдено '\t', '\n', '\r'
				{
					if (i > 2)//если i > 2
					{
						if (point != true)//если point не равен true
						{
							poi = i;//присвоение poi значения i
							if (Text[i - 1] != '.')
							{
								СorrectedText += ". ";//добавление значения ". " в CorrectedText
								point = true;//присвоение point значения true
							}
							else//иначе
							{
								СorrectedText += " ";//добавление значения " " в CorrectedText
							}
						}
					}
					continue;//переход на следющую итеррация в цикле
				}
				СorrectedText += Text[i];//добавление значения из Text[i] в CorrectedText
				if (i - poi > 2)//если i-poi > 2
				{
					point = false;//присвоение point значения false
				}
				if (Length == i)//если Length = i
				{
					СorrectedText += ".";//добавление значения "." в CorrectedText
				}
			}
			DelSpace(x = СorrectedText);//вызов функции DelSpace
		}
		void DelSpace(String^& x)//функция для удаления двойных пробелов подряд в строке
		{
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (i != Length - 1)//если i не равен Length - 1 
				{
					if (Text[i] == ' ' & Text[i + 1] == ' ')//если в строке надены символы '  '
					{
						continue;//переход на следющую итеррация в цикле
					}
				}
				if (i + 1 == Length)//если i + 1 равен Length 
				{
					if (Text[i] == ' ')//если значение из Text[i] равно ' '
					{
						continue;//переход на следющую итеррация в цикле
					}
				}
				СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
				if (i + 1 == Length)//если i+1 = Lenght
				{
					if (Text[i] != '.' & Text[i] != ' ')//если в строке не надены символы '.' и ' '
					{
						СorrectedText += ".";//добавление символа "." в СorrectedText
					}
				}
			}
			DeleteMark (x = СorrectedText);//вызов функции DeleteMark
		}
		void DeleteMark(String^& x)//функция для удаления знаков препиная в строке таких как '-',';','"','\','!','?','.'
		{
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (Text[i] == '.' | Text[i] == '?' | Text[i] == '!')//если в строке обнаруженны данные символы '.','?','!'
				{
					СorrectedText += ".";//добавление символа "." в СorrectedText
				}
				else//иначе
				{
					if (Text[i] == '-' | Text[i] == ';' | Text[i] == ':' | Text[i] == '"' | Text[i] == '\'')//если в строке обнаруженны данные символы '-',';',':','"','\''
					{
						continue;//переход на следющую итеррация в цикле
					}
					else//иначе
					{
						СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
					}
				}
			}
			DeleteDoublePoint(x = СorrectedText);//вызов функции DeleteDoublePoint
		}
		void DeleteDoublePoint(String^& x)//функция для удаления двойных точек стоящих рядом в строке
		{
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (i != 0)//если i не равен 0
				{
					if (Text[i] == '.' & Text[i - 1] == '.')
					{
						continue;//переход на следющую итеррация в цикле
					}
					else//иначе
					{
						СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
					}
				}
				else//иначе
				{
					СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
				}
			}
			DeleteFirstPoint(x = СorrectedText);//вызов функции DeleteFirstPoint
		}
		void DeleteFirstPoint(String^& x)//функция для удаления точки если строка начинается с точки
		{
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (i == 0)//если i = 0
				{
					if (Text[i] == '.' & Text[i+1] == ' ')//если в строке найдены символы '. '
					{
						continue;//переход на следющую итеррация в цикле
					}
				}
				else//иначе
				{
					СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
				}
			}
			x = СorrectedText;//присвоение значения CorrectedText в строку x
		}
		void DeleteDoubleSentences(String^& x)//функция для удаления двойных пробелов в строке
		{
			String^ Text = gcnew String(x);//декларация и инициализация переменной типа String
			String^ СorrectedText;//декларация переменной типа String
			int Length = Text->Length;//декларация и инициализация переменной типа int с записью длины строки Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (i != Length - 1 & i != 0)//если i не равен Lenght-1 и i не равен 0
				{
					if ((Text[i] == ' ' & Text[i + 1] == '.') | (Text[i - 1] == ' ' & Text[i] == '.'))//если в строке обнарежны связки символов
					{
						i++;//увеличение значения i на 1
						continue;//переход на следющую итеррация в цикле
					}
					else//иначе
					{
						СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
					}
				}
				else//иначе
				{
					СorrectedText += Text[i];//добавление символа Text[i] в СorrectedText
				}

			}
			x = СorrectedText;//присвоение значения CorrectedText в строку x

		}
		int Language = 0;//декларация и инициализация глобальной переменной типа int для смены языка в программе
		int Color = 0;//декларация и инициализация глобальной переменной типа int для смены цвета фона в программе
		int LengthText = 0;//декларация и инициализация глобальной переменной типа int
		int LengthText2 = 0;//декларация и инициализация глобальной переменной типа int
		int pass = 1;//декларация и инициализация глобальной переменной типа int
		String^ URLF;//декларация глобальной переменной типа String
		String^ Range;//декларация глобальной переменной типа Stirng
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)//метот-обработчик события загрузки оконной формы
	{
		if (Language == 1)//если Language = 1 => установка белорусского языка
		{
			this->label1->Text = "Тэкст 1";//заполение текстом надписи label1 на белорусском языке
			this->label2->Text = "Тэкст 2";//заполение текстом надписи label2 на белорусском языке
			this->label4->Text = "Файлы";//заполение текстом надписи label2 на белорусском языке
			this->button1->Text = "Параунаць";//заполение текстом кнопки button1 на белорусском языке
			this->button2->Text = "Уставiць сюды";//заполение текстом кнопки button2 на белорусском языке
			this->button3->Text = "Уставiць сюды";//заполение текстом кнопки button3 на белорусском языке
			this->button4->Text = "Пошук";//заполение текстом кнопки button4 на белорусском языке
			this->button5->Text = "Замяніць";//заполение текстом кнопки button5 на белорусском языке
			this->fileToolStripMenuItem->Text = "Файл";//заполение текстом меню fileToolStripMenuItem на белорусском языке
			this->openFileToolStripMenuItem->Text = "Аткрыць";//заполение текстом меню openFileToolStripMenuItem на белорусском языке
			this->saveToolStripMenuItem->Text = "Захаваць";//заполение текстом меню saveToolStripMenuItem на белорусском языке
			this->settingsToolStripMenuItem->Text = "Наладжваньне";//заполение текстом меню settingsToolStripMenuItem на белорусском языке
			this->backGroundToolStripMenuItem->Text = "Заднi фон";//заполение текстом меню backGroundToolStripMenuItem на белорусском языке
			this->languageToolStripMenuItem->Text = "Мова";//заполение текстом меню languageToolStripMenuItem на белорусском языке
			this->rUToolStripMenuItem->Text = "РУС";//заполение текстом меню rUToolStripMenuItem на белорусском языке
			this->bYToolStripMenuItem->Text = "БЕЛ";//заполение текстом меню bYToolStripMenuItem на белорусском языке
			this->eNToolStripMenuItem->Text = "АНГЛ";//заполение текстом меню eNToolStripMenuItem на белорусском языке
			this->greenToolStripMenuItem->Text = "Зялёны";//заполение текстом меню greenToolStripMenuItem на белорусском языке
			this->blueToolStripMenuItem->Text = "Сiнi";//заполение текстом меню blueToolStripMenuItem на белорусском языке
			this->redToolStripMenuItem->Text = "Чырвоны";//заполение текстом меню redToolStripMenuItem на белорусском языке
			this->defaultToolStripMenuItem->Text = "Стандартны";//заполение текстом меню defaultToolStripMenuItem на белорусском языке
			this->createFileToolStripMenuItem->Text = "Стварьць файл";//заполение текстом меню createFileToolStripMenuItem на белорусском языке
			this->fontToolStripMenuItem->Text = "Шрыфт";//заполение текстом меню fontToolStripMenuItem на белорусском языке
			this->helpToolStripMenuItem->Text = "Дапамога";//заполение текстом меню helpToolStripMenuItem на белорусском языке
		}
		if (Language == 2)//если Language = 2 => установка англиского языка
		{
			this->label1->Text = "Text 1";//заполение текстом надписи label1 на англиском языке
			this->label2->Text = "Text 2";//заполение текстом надписи label2 на англиском языке
			this->label4->Text = "Files";//заполение текстом надписи label4 на англиском языке
			this->button1->Text = "Compare";//заполение текстом кнопки button1 на англиском языке
			this->button2->Text = "Paste here";//заполение текстом кнопки button2 на англиском языке
			this->button3->Text = "Paste here";//заполение текстом кнопки button3 на англиском языке
			this->button4->Text = "Search";//заполение текстом кнопки button4 на англиском языке
			this->button5->Text = "Replace";//заполение текстом кнопки button5 на англиском языке
			this->backGroundToolStripMenuItem->Text = "Backgroud";//заполение текстом меню backGroundToolStripMenuItem на белорусском языке
			this->fileToolStripMenuItem->Text = L"File";//заполение текстом меню fileToolStripMenuItem на англиском языке
			this->openFileToolStripMenuItem->Text = L"Open";//заполение текстом меню openFileToolStripMenuItem на англиском языке
			this->saveToolStripMenuItem->Text = "Save";//заполение текстом меню saveToolStripMenuItem на англиском языке
			this->settingsToolStripMenuItem->Text = "Settings";//заполение текстом меню settingsToolStripMenuItem на англиском языке
			this->rUToolStripMenuItem->Text ="RU";//заполение текстом меню rUToolStripMenuItem на англиском языке
			this->bYToolStripMenuItem->Text = "BY";//заполение текстом меню bYToolStripMenuItem на англиском языке
			this->eNToolStripMenuItem->Text = "EN";//заполение текстом меню eNToolStripMenuItem на англиском языке
			this->greenToolStripMenuItem->Text = "Green";//заполение текстом меню greenToolStripMenuItem на англиском языке
			this->blueToolStripMenuItem->Text = "Blue";//заполение текстом меню blueToolStripMenuItem на англиском языке
			this->redToolStripMenuItem->Text = "Red";//заполение текстом меню redToolStripMenuItem на англиском языке
			this->defaultToolStripMenuItem->Text = "Default";//заполение текстом меню defaultToolStripMenuItem на англиском языке
			this->createFileToolStripMenuItem->Text = "Create file";//заполение текстом меню createFileToolStripMenuItem на англиском языке
			this->languageToolStripMenuItem->Text = "Language";//заполение текстом меню languageToolStripMenuItem на англиском языке
			this->fontToolStripMenuItem->Text = "Font";//заполение текстом меню fontToolStripMenuItem на англиском языке
			this->helpToolStripMenuItem->Text = "Help";//заполение текстом меню helpToolStripMenuItem на англиском языке
		}
		if (Language == 3)//если Language = 3 => установка русского языка
		{
			this->label1->Text = "Tекст 1";//заполение текстом надписи label1 на русском языке
			this->label2->Text = "Текст 2";//заполение текстом надписи label2 на русском языке
			this->label4->Text = "Файлы";//заполение текстом надписи label4 на русском языке
			this->button1->Text = "Сравнить";//заполение текстом кнопки button1 на русском языке
			this->button2->Text = "Вставить сюда";//заполение текстом кнопки button2 на русском языке
			this->button3->Text = "Вставить сюда";//заполение текстом кнопки button3 на русском языке
			this->button4->Text = "Поиск";//заполение текстом кнопки button4 на русском языке
			this->button5->Text = "Заменить";//заполение текстом кнопки button5 на русском языке
			this->fileToolStripMenuItem->Text = L"Файл";//заполение текстом меню fileToolStripMenuItem на англиском языке
			this->openFileToolStripMenuItem->Text = L"Открыть";//заполение текстом меню openFileToolStripMenuItem на англиском языке
			this->saveToolStripMenuItem->Text = "Сохранить";//заполение текстом меню saveToolStripMenuItem на англиском языке
			this->backGroundToolStripMenuItem->Text = "Задний фон";//заполение текстом меню backGroundToolStripMenuItem на англиском языке
			this->settingsToolStripMenuItem->Text = "Настройки";//заполение текстом меню settingsToolStripMenuItem на англиском языке
			this->rUToolStripMenuItem->Text = L"РУС";//заполение текстом меню rUToolStripMenuItem на англиском языке
			this->bYToolStripMenuItem->Text = L"БЕЛ";//заполение текстом меню bYToolStripMenuItem на англиском языке
			this->eNToolStripMenuItem->Text = L"АНГЛ";//заполение текстом меню eNToolStripMenuItem на англиском языке
			this->greenToolStripMenuItem->Text = L"Зеленый";//заполение текстом меню greenToolStripMenuItem на англиском языке
			this->blueToolStripMenuItem->Text = L"Синий";//заполение текстом меню blueToolStripMenuItem на англиском языке
			this->redToolStripMenuItem->Text = L"Красный";//заполение текстом меню redToolStripMenuItem на англиском языке
			this->defaultToolStripMenuItem->Text = L"Стандартный";//заполение текстом меню defaultToolStripMenuItem на англиском языке
			this->createFileToolStripMenuItem->Text = "Создать файл";//заполение текстом меню createFileToolStripMenuItem на англиском языке
			this->languageToolStripMenuItem->Text = "Язык";//заполение текстом меню languageToolStripMenuItem на англиском языке
			this->fontToolStripMenuItem->Text = "Шрифт";//заполение текстом меню fontToolStripMenuItem на англиском языке
			this->helpToolStripMenuItem->Text = "Помощь";//заполение текстом меню helpToolStripMenuItem на англиском языке
		}
		if (Color == 0)//если Color = 0 => установка фонового цвета "Кнопочный серый"
		{
			this->BackColor = SystemColors::ButtonFace;//назначить фоновым цветом ЭТОЙ оконной формы ситемный цвет "кнопочный серый" 
			this->label1->ForeColor = Color::Black;//назначить цвет надписи Label1 "Черный цвет"
			this->label2->ForeColor = Color::Black;//назначить цвет надписи Label2 "Черный цвет"
			this->label4->ForeColor = Color::Black;//назначить цвет надписи Label4 "Черный цвет"
		}
		if (Color == 1)//если Color = 1 => установка фонового цвета "Синий"
		{
			this->BackColor = Color::Blue;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Синий"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
			this->label4->ForeColor = Color::White;//назначить цвет надписи Label4 "Белый"
		}
		if (Color == 2)//если Color = 2 => установка фонового цвета "Зеленый"
		{
			this->BackColor = Color::Green;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Зеленый"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
			this->label4->ForeColor = Color::White;//назначить цвет надписи Label4 "Белый"
		}
		if (Color == 3)//если Color = 3 => установка фонового цвета "Красный"
		{
			this->BackColor = Color::Red;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Красный"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
			this->label4->ForeColor = Color::White;//назначить цвет надписи Label4 "Белый"
		}
	}
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на saveToolStripMenuItem, в котором происходит загрузка файлов в fileListBox1
	{
		fileListBox1->Pattern = "*.txt";//фильтация типов файлов в fileListBox1
		folderBrowserDialog1->ShowDialog();//открыть окно просмотра папок
		fileListBox1->FileName = folderBrowserDialog1->SelectedPath;//отображение файлов только из папки выбраноой в folderBrowserDialog1
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на saveToolStripMenuItem, в котором происходит сохранение текста из richTextBox1 в файл
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			String^ Text = this->richTextBox1->Text;//декларация и инициализация переменной типа String текстом из richTextBox1
			if (Text->Length == 0)//если строка пустая
			{
				throw 1;//вызов исключения типа int
			}
			openFileDialog1->Filter = "Text Files|*.txt";//фильтрация файлов в openFileDialog1
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamWriter^ sw = gcnew StreamWriter(openFileDialog1->FileName);//создание потока для записи информации в выбранное место 
				String^ SaveText;//декларация переменной типа String
				String^ proposal;//декларация переменной типа String
				int Length = 0;//декларация и инициализация переменной типа String
				Length = Text->Length;//присвоение lenght значения длина строки Text
				for (int i = 0; i < Length; i++)//поиск символа в строке 
				{
					if (Text[i] == '_')//красная строка
					{
						SaveText += "\n\t";//добаление перехода на новую строку и табулирования
					}
					else//иначе
					{
						if (Text[i] == '&')//маркированный список
						{
							SaveText += "\n\t- ";//добаление перехода на новую строку, табулирования и символа "-"
						}
						else//иначе
						{
							SaveText += Text[i];//добавление символа Text[i] в SaveText
						}
					}
				}
				sw->WriteLine(SaveText);//запись строки в Data.txt
				sw->Close();//закрытие потока sw
				if (Language == 1)//если Language = 1 => MessageBox  белорусском языке
				{
					MessageBox::Show("Файл захаваны в : " + openFileDialog1->FileName, "Захаваны");//показать сообщение с информацией
				}
				if (Language == 2)//если Language = 1 => MessageBox англиском языка
				{
					MessageBox::Show("File save in : " + openFileDialog1->FileName, "Save");//показать сообщение с информацией
				}
				if (Language == 3)//если Language = 1 => MessageBox русском языка
				{
					MessageBox::Show("Файл сохраненен в " +openFileDialog1->FileName, "Сохранено");//показать сообщение с информацией
				}
			}
		}
		catch (int)//отлов ошибки типа int
		{
			if (Language == 1)//если Language = 1 => MessageBox  белорусском языке
			{
				MessageBox::Show("Текстовое поле пустое, увядзiце што-небудзь", "Памылка");//показать сообщение с информацией
			}
			if (Language == 2)//если Language = 1 => MessageBox англиском языка
			{
				MessageBox::Show("Text field is empty, enter something", "Error");//показать сообщение с информацией
			}
			if (Language == 3)//если Language = 1 => MessageBox русском языка
			{
				MessageBox::Show("Тектвовое поле пустое, введите что-нибудь", "Ошибка");//показать сообщение с информацией
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button1, в котором происходит выполнение процесса сравнения текста из richTextBox1 и richTextBox2
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			String^ Sourse = richTextBox1->Text;//декларация и инициализация текстом из richTextBox1 переменной типа String 
			String^ paste = richTextBox2->Text;//декларация и инициализация текстом из richTextBox2 переменной типа String 
			if (Sourse->Length == 0 | paste->Length == 0)//если строки пустые 
			{
				throw 1;//вызов исключения типа int
			}
			DeleteTNR(Sourse);//вызов функции DeleteTNR для строки Sourse
			DeleteTNR(paste);//вызов функции DeleteTNR для строки paste
			DelSpace(Sourse);//вызов функции DelSpace для строки Sourse
			DelSpace(paste);//вызов функции DelSpace для строки paste
			DeleteDoubleSentences(Sourse);//вызов функции DeleteDoubleSentences для строки Sourse
			DeleteDoubleSentences(paste);//вызов функции DeleteDoubleSentences для строки paste
			double type;//декларация переменной типа double
			int fp = 0;//декларация с инициализацией переменной типа int
			int fp2 = 0;//декларация с инициализацией переменной типа int
			int sentence = 0;//декларация с инициализацией переменной типа int
			int sp, sp2;//декларация переменной типа int
			int sim = 0;//декларация с инициализацией переменной типа int
			int Length = Sourse->Length;//декларация переменной с присвоение длины строки Sourse
			int Length2 = paste->Length;//декларация переменной с присвоение длины строки paste
			for (int i = 0; i <= Length; i++)//цикл для нахождения симоволов в строке 
			{
				if (i == Length)//если i = Lenght
				{
					break;//выход из цикла
				}
				if (Sourse[i] == '.' | Sourse[i] == '?' | Sourse[i] == '!')//если в строке встретились данные символы '.','?','!'
				{
					sentence++;//увеличение счетчика предложений
					sp = i + 1;//переменная значение которой индекс, которой укакзывает на расположение точки в строке
					String^ sent;//декларация переменной типа String 
					for (int j = fp; j < sp; j++)//цикл для записи предложения в строку
					{
						sent += Sourse[j];//добавление символа Sourse[j] в sent
					}
					for (int w = 0; w < Length2; w++)//цикл для нахождения симоволов в строке 
					{
						if (paste[w] == '.' | paste[w] == '?' | paste[w] == '!')//если в строке найдены символы '.','?','!'
						{
							sp2 = w + 1;//переменная значение которой индекс, которой укакзывает на расположение точки в строке
							String^ sent2;//декларация переменной типа String 
							for (int e = fp2; e < sp2; e++)//цикл для записи предложения в строку
							{
								sent2 += paste[e];//добавление символа paste[e] в sent2
							}
							sent = sent->ToLower();//уменьшение регистра строки sent 
							sent2 = sent2->ToLower();//уменьшение регистра строки sent 2
							if (sent == sent2)//если sent = sent
							{
								sim += 1;//увеличение счетчика похожих предложений
							}
							fp2 = sp2 + 1;//присвоение значений переменной fp2 значений sp2 + 1
						}
					}
					fp = sp + 1;//присвоение значений переменной fp значений sp + 1
					fp2 = 0;//обнуление переменной
				}
			}
			if (sentence == 0)//если кол-во предложений равно 0
			{
				throw 0.1;//вызов исключения типа double
			}
			double x = double(sim) / double(sentence) * 100;//вычисление процента сходства текстов x = sim/sentence*100
			if (x > 100)//если x > 100
			{
				x = 100;//присвоение значений переменной x
			}
			if (x > 50)//если x < 50
			{
				this->label3->ForeColor = Color::Red;//изменение цвета шрифта на красный в label3 
				this->label3->Text = x.ToString() + "%";//присвоение значенией
			}
			else//иначе
			{
				this->label3->ForeColor = Color::Green;//изменение цвета шрифта на зеленый в label3 
				this->label3->Text = x.ToString() + "%";//изменение цвета шрифта в label3 
			}
		}
		catch (int)//отлов ошибки типа int
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Текстовое поле пустое, увядзiце што-небудзь","Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("Text field is empty, enter something", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на руссоком языке
			{
				MessageBox::Show("Тектвовое поле пустое, введите что-нибудь","Ошибка");//показать сообщение с описание ошибки
			}
		}
		catch (double)//отлов ошибки типа double
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Тэкставае поле не мае цэлай прапановы", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("Text field does not have a whole sentence", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на руссоком языке
			{
				MessageBox::Show("Текстовое поле не имеет целого предложения", "Ошибка");//показать сообщение с описание ошибки
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button2, в котором происходит перенос текста из txt файла в richTextBox1
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			StreamReader^ read = gcnew StreamReader(URLF);//создание потока read для чтения для файла, путь которого расположен в сроке URLF
			richTextBox1->Text = read->ReadToEnd();//присвоение значений в richTextBox2 из файла
			String^ Text = richTextBox1->Text;//декларация и инициализация переменной типа String текстом из richTextBox1
			String^ Sentensens;//декларация переменной типа String
			read->Close();//закрытие потока read
			int counter = 0;//декларация и инициализация переменной типа int
			int counterText = 0;//декларация и инициализация переменной типа int
			int f = 0;//декларация и инициализация переменной типа int
			int l = 0;//декларация и инициализация переменной типа int
			int Length = Text->Length;//декларация и инициализация переменной типа int значением длины Text
			for (int i = 0; i < Length; i++)//цикл для нахождения симоволов в строке
			{
				if (Text[i] == '.')//если значение из Text[i] равен '.'
				{
					counter++;//увеличение счетчика на 1
					l = i;//присвоение значений из i в l
					if (counter == 1)//если счетчик равен 1
					{
						for (int w = 0; w < l + 1; w++)//цикл для заполнения строки
						{
							Sentensens += Text[w];//добавление символа Text[w] в Sentensens
						}
					}
				}
			}
			LengthText = Length;//присвоение значений Length в LengthText
		}
		catch (System::ArgumentNullException^ e)//отлов ошибки типа ArgumentNullException
		{
			if (Language == 1)//показать сообщение с описание ошибки
			{
				MessageBox::Show("Вы не выбралi файл для адкрыцця", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("You have not selected file to open", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на руссоком языке
			{
				MessageBox::Show("Вы не выбрали файл для открытия", "Ошибка");//показать сообщение с описание ошибки
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button3, в котором происходит перенос текста из txt файла в richTextBox1 
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			StreamReader^ read = gcnew StreamReader(URLF);//создание потока read для чтения для файла, путь которого расположен в сроке URLF
			richTextBox2->Text = read->ReadToEnd();//присвоение значений в richTextBox2 из файла
			read->Close();//закрытие потока read
			String^ Text = richTextBox2->Text;//декларация и инициализация переменной типа String текстом из richTextBox2
		}
		catch (System::ArgumentNullException^ e)//отлов ошибки типа ArgumentNullException
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Вы не выбралi файл для адкрыцця", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("You have not selected file to open", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на руссоком языке
			{
				MessageBox::Show("Вы не выбрали файл для открытия", "Ошибка");//показать сообщение с описание ошибки
			}
		}
	}
	private: System::Void blueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на blueToolStripMenuItem , в котором происходит измение цвета заднего фона на синий цвет
	{
		this->BackColor = Color::Blue;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Синий"
		this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
		this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		Color = 1;//присвоение значений в Color 
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на greenToolStripMenuItem , в котором происходит измение цвета заднего фона на зеленый цвет 
	{
		this->BackColor = Color::Green;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Зеленый"
		this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
		this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		Color = 2;//присвоение значений в Color 
	}
	private: System::Void redToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на redToolStripMenuItem , в котором происходит измение цвета заднего фона на красный цвет 
	{
		this->BackColor = Color::Red;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Красный"
		this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
		this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		Color = 3;//присвоение значений в Color 
	}
	private: System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на defaultToolStripMenuItem , в котором происходит измение цвета заднего фона стандартный цвет
	{
		this->BackColor = SystemColors::ButtonFace;//назначить фоновым цветом ЭТОЙ оконной формы ситемный цвет "кнопочный серый" 
		this->label1->ForeColor = Color::Black;//назначить цвет надписи Label1 "Черный цвет"
		this->label2->ForeColor = Color::Black;//назначить цвет надписи Label2 "Черный цвет"
		Color = 0;//присвоение значений в Color 
	}
	private: System::Void bYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //обработчик нажатия на bYToolStripMenuItem , в котором происходит измение языка на белорусский 
	{
		Language = 1;//присвоение значений в Language
		this->label1->Text = "Тэкст 1";//заполение текстом надписи label1 на белорусском языке
		this->label2->Text = "Тэкст 2";//заполение текстом надписи label2 на белорусском языке
		this->label4->Text = "Файлы";//заполение текстом надписи label2 на белорусском языке
		this->button1->Text = "Параунаць";//заполение текстом кнопки button1 на белорусском языке
		this->button2->Text = "Уставiць сюды";//заполение текстом кнопки button2 на белорусском языке
		this->button3->Text = "Уставiць сюды";//заполение текстом кнопки button3 на белорусском языке
		this->button4->Text = "Пошук";//заполение текстом кнопки button4 на белорусском языке
		this->button5->Text = "Замяніць";//заполение текстом кнопки button5 на белорусском языке
		this->fileToolStripMenuItem->Text = "Файл";//заполение текстом меню fileToolStripMenuItem на белорусском языке
		this->openFileToolStripMenuItem->Text = "Аткрыць";//заполение текстом меню openFileToolStripMenuItem на белорусском языке
		this->saveToolStripMenuItem->Text = "Захаваць";//заполение текстом меню saveToolStripMenuItem на белорусском языке
		this->settingsToolStripMenuItem->Text = "Наладжваньне";//заполение текстом меню settingsToolStripMenuItem на белорусском языке
		this->backGroundToolStripMenuItem->Text = "Заднi фон";//заполение текстом меню backGroundToolStripMenuItem на белорусском языке
		this->languageToolStripMenuItem->Text = "Мова";//заполение текстом меню languageToolStripMenuItem на белорусском языке
		this->rUToolStripMenuItem->Text = "РУС";//заполение текстом меню rUToolStripMenuItem на белорусском языке
		this->bYToolStripMenuItem->Text = "БЕЛ";//заполение текстом меню bYToolStripMenuItem на белорусском языке
		this->eNToolStripMenuItem->Text = "АНГЛ";//заполение текстом меню eNToolStripMenuItem на белорусском языке
		this->greenToolStripMenuItem->Text = "Зялёны";//заполение текстом меню greenToolStripMenuItem на белорусском языке
		this->blueToolStripMenuItem->Text = "Сiнi";//заполение текстом меню blueToolStripMenuItem на белорусском языке
		this->redToolStripMenuItem->Text = "Чырвоны";//заполение текстом меню redToolStripMenuItem на белорусском языке
		this->defaultToolStripMenuItem->Text = "Стандартны";//заполение текстом меню defaultToolStripMenuItem на белорусском языке
		this->createFileToolStripMenuItem->Text = "Стварьць файл";//заполение текстом меню createFileToolStripMenuItem на белорусском языке
		this->fontToolStripMenuItem->Text = "Шрыфт";//заполение текстом меню fontToolStripMenuItem на белорусском языке
		this->helpToolStripMenuItem->Text = "Дапамога";//заполение текстом меню helpToolStripMenuItem на белорусском языке
	}
	private: System::Void eNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // обработчик нажатия на eNToolStripMenuItem, в котором происходит измение языка на англиский
	{
		Language = 2;//присвоение значений в Language
		this->label1->Text = "Text 1";//заполение текстом надписи label1 на англиском языке
		this->label2->Text = "Text 2";//заполение текстом надписи label2 на англиском языке
		this->label4->Text = "Files";//заполение текстом надписи label4 на англиском языке
		this->button1->Text = "Compare";//заполение текстом кнопки button1 на англиском языке
		this->button2->Text = "Paste here";//заполение текстом кнопки button2 на англиском языке
		this->button3->Text = "Paste here";//заполение текстом кнопки button3 на англиском языке
		this->button4->Text = "Search";//заполение текстом кнопки button4 на англиском языке
		this->button5->Text = "Replace";//заполение текстом кнопки button5 на англиском языке
		this->backGroundToolStripMenuItem->Text = "Backgroud";//заполение текстом меню backGroundToolStripMenuItem на белорусском языке
		this->fileToolStripMenuItem->Text = L"File";//заполение текстом меню fileToolStripMenuItem на англиском языке
		this->openFileToolStripMenuItem->Text = L"Open";//заполение текстом меню openFileToolStripMenuItem на англиском языке
		this->saveToolStripMenuItem->Text = "Save";//заполение текстом меню saveToolStripMenuItem на англиском языке
		this->settingsToolStripMenuItem->Text = "Settings";//заполение текстом меню settingsToolStripMenuItem на англиском языке
		this->rUToolStripMenuItem->Text = "RU";//заполение текстом меню rUToolStripMenuItem на англиском языке
		this->bYToolStripMenuItem->Text = "BY";//заполение текстом меню bYToolStripMenuItem на англиском языке
		this->eNToolStripMenuItem->Text = "EN";//заполение текстом меню eNToolStripMenuItem на англиском языке
		this->greenToolStripMenuItem->Text = "Green";//заполение текстом меню greenToolStripMenuItem на англиском языке
		this->blueToolStripMenuItem->Text = "Blue";//заполение текстом меню blueToolStripMenuItem на англиском языке
		this->redToolStripMenuItem->Text = "Red";//заполение текстом меню redToolStripMenuItem на англиском языке
		this->defaultToolStripMenuItem->Text = "Default";//заполение текстом меню defaultToolStripMenuItem на англиском языке
		this->createFileToolStripMenuItem->Text = "Create file";//заполение текстом меню createFileToolStripMenuItem на англиском языке
		this->languageToolStripMenuItem->Text = "Language";//заполение текстом меню languageToolStripMenuItem на англиском языке
		this->fontToolStripMenuItem->Text = "Font";//заполение текстом меню fontToolStripMenuItem на англиском языке
		this->helpToolStripMenuItem->Text = "Help";//заполение текстом меню helpToolStripMenuItem на англиском языке
	}
	private: System::Void rUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)  // обработчик нажатия на rUToolStripMenuItem, в котором происходит измение языка на русский
	{
		Language = 3;//присвоение значений в Language
		this->label1->Text = "Tекст 1";//заполение текстом надписи label1 на русском языке
		this->label2->Text = "Текст 2";//заполение текстом надписи label2 на русском языке
		this->label4->Text = "Файлы";//заполение текстом надписи label4 на русском языке
		this->button1->Text = "Сравнить";//заполение текстом кнопки button1 на русском языке
		this->button2->Text = "Вставить сюда";//заполение текстом кнопки button2 на русском языке
		this->button3->Text = "Вставить сюда";//заполение текстом кнопки button3 на русском языке
		this->button4->Text = "Поиск";//заполение текстом кнопки button4 на русском языке
		this->button5->Text = "Заменить";//заполение текстом кнопки button5 на русском языке
		this->fileToolStripMenuItem->Text = L"Файл";//заполение текстом меню fileToolStripMenuItem на англиском языке
		this->openFileToolStripMenuItem->Text = L"Открыть";//заполение текстом меню openFileToolStripMenuItem на англиском языке
		this->saveToolStripMenuItem->Text = "Сохранить";//заполение текстом меню saveToolStripMenuItem на англиском языке
		this->backGroundToolStripMenuItem->Text = "Задний фон";//заполение текстом меню backGroundToolStripMenuItem на англиском языке
		this->settingsToolStripMenuItem->Text = "Настройки";//заполение текстом меню settingsToolStripMenuItem на англиском языке
		this->rUToolStripMenuItem->Text = L"РУС";//заполение текстом меню rUToolStripMenuItem на англиском языке
		this->bYToolStripMenuItem->Text = L"БЕЛ";//заполение текстом меню bYToolStripMenuItem на англиском языке
		this->eNToolStripMenuItem->Text = L"АНГЛ";//заполение текстом меню eNToolStripMenuItem на англиском языке
		this->greenToolStripMenuItem->Text = L"Зеленый";//заполение текстом меню greenToolStripMenuItem на англиском языке
		this->blueToolStripMenuItem->Text = L"Синий";//заполение текстом меню blueToolStripMenuItem на англиском языке
		this->redToolStripMenuItem->Text = L"Красный";//заполение текстом меню redToolStripMenuItem на англиском языке
		this->defaultToolStripMenuItem->Text = L"Стандартный";//заполение текстом меню defaultToolStripMenuItem на англиском языке
		this->createFileToolStripMenuItem->Text = "Создать файл";//заполение текстом меню createFileToolStripMenuItem на англиском языке
		this->languageToolStripMenuItem->Text = "Язык";//заполение текстом меню languageToolStripMenuItem на англиском языке
		this->fontToolStripMenuItem->Text = "Шрифт";//заполение текстом меню fontToolStripMenuItem на англиском языке
		this->helpToolStripMenuItem->Text = "Помощь";//заполение текстом меню helpToolStripMenuItem на англиском языке
	}
	private: System::Void fileListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на fileListBox1, в котором происходит выбор файла для открытия
	{
		String^ URL = folderBrowserDialog1->SelectedPath + "\\" + fileListBox1->SelectedItem->ToString();//декларация и инициализация переменной String адресом файла
		URLF = gcnew String(URL);//инициализация глобальной переменной URLF 
		if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
		{
			MessageBox::Show("Вы выбралi файл " + URLF, "Файл");//показать сообщение с описанием выбраноого файла
		}
		if (Language == 2)//если Language = 2 => MessageBox на англиском языке
		{
			MessageBox::Show("You selected file " + URLF, "File");//показать сообщение с описание выбраноого файла
		}
		if (Language == 3)//если Language = 3 => MessageBox на русском языке
		{
			MessageBox::Show("Вы выбрали файл " + URLF, "Файл");//показать сообщение с описание выбраноого файла
		}
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)//обработчик нажатия на кнопку закрытия приложения
	{
		Application::Exit();//закрытие приложения
	}
	private: System::Void createFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //обработчик нажатия на createFileToolStripMenuItem, в котором происходит создание txt файла 
	{
		saveFileDialog1->Filter = "Text Files|*.txt";//фильтация типов файлов
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)//выбор расположения файла на устройстве
		{
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);//создание потока записи sw
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Вы ставрылi новы фаЙл у " + saveFileDialog1->FileName, "Створаны файл");//показать сообщение с описанием пути
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("You create new file in " + saveFileDialog1->FileName, "Create file");//показать сообщение с описанием пути
			}
			if (Language == 3)//если Language = 3 => MessageBox на русском языке
			{
				MessageBox::Show("Вы создали новый файл в " + saveFileDialog1->FileName, "Создан файл");//показать сообщение с описанием пути
			}
			sw->Write("");//запись пробела в текстовый документ
			sw->Close();//закрытие потока sw
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //обработчик нажатия на button4, в котором происходит поиск слов в тексте
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			if (textBox1->Text == "")//если textBox1 пуст
			{
				throw 1;//вызов исключения
			}
			int index = 0;//декларация и инициализация переменной типа int
			String^ temp = richTextBox1->Text;//декларация переменной типа String 
			richTextBox1->Text = "";//очищение richTextBox1
			richTextBox1->Text = temp;//декларация переменной типа String
			while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))//пока index меньше длины richTextBox2
			{
				richTextBox1->Find(textBox1->Text, index, richTextBox1->Text->Length, RichTextBoxFinds::None);//использование метода Find
				richTextBox1->SelectionBackColor = Color::Red;//изменение цвета заднего фона в найденом слове
				index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1;//декларация переменной типа int
			}
			int index2 = 0;//декларация и инициализация переменной типа int
			String^ temp2 = richTextBox2->Text;//декларация переменной типа String 
			richTextBox2->Text = "";//очищение richTextBox1
			richTextBox2->Text = temp2;//декларация переменной типа String
			while (index2 < richTextBox2->Text->LastIndexOf(textBox1->Text))//пока index2 меньше длины richTextBox2
			{
				richTextBox2->Find(textBox1->Text, index2, richTextBox2->Text->Length, RichTextBoxFinds::None);//использование метода Find
				richTextBox2->SelectionBackColor = Color::Red;//изменение цвета заднего фона в найденом слове
				index2 = richTextBox2->Text->IndexOf(textBox1->Text, index2) + 1;//декларация переменной типа int
			}
		}
		catch (int)//отлов ошибки типа int 
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Радок пуст", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("String is empty", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на русском языке
			{
				MessageBox::Show("Строка пустая", "Ошибка");//показать сообщение с описание ошибки
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button5, в котором происходит замена слова в тексте
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			if (textBox1->Text == "" || textBox2->Text == "")//провекрка если textBox пуст
			{
				throw 1;//вызов исключения
			}
			String^ Find = textBox1->Text;//декларация и инициализация переменной типа String текстом из textBox1
			String^ Rep = textBox2->Text;//декларация и инициализация переменной типа String текстом из textBox2
			if ((Find->Length) * 2 == Rep->Length)//проверка на размер слова
			{
				String^ Part1;//декларация переменной типа String
				String^ Part2;//декларация переменной типа String
				for (int i = 0; i < Rep->Length / 2; i++)//цикл для записи значений в Part1
				{
					Part1 += Rep[i];//добавление символа из Rep[i] в Part1
				}
				for (int i = Rep->Length / 2; i < Rep->Length; i++)//цикл для записи значений в Part2
				{
					Part2 += Rep[i];//добавление символа из Rep[i] в Part2
				}
				if (Part1 == Part2)//если Part1 = Part2
				{
					throw std::logic_error("");//вызов исключения underflow_error
				}
			}
			int index = 0;//декларация и инициализация переменной типа int
			String^ temp = richTextBox1->Text;//декларация переменной типа String 
			richTextBox1->Text = "";//очищение richTextBox1
			richTextBox1->Text = temp;//декларация переменной типа String
			while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))//пока index меньше длины richTextBox2
			{
				richTextBox1->Find(textBox1->Text, index, richTextBox1->Text->Length, RichTextBoxFinds::None);//использование метода Find
				richTextBox1->SelectionBackColor = Color::Red;//изменение цвета заднего фона в найденом слове
				index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1;//декларация переменной типа int
				richTextBox1->Focus();//установка фокуса ввода
				richTextBox1->SelectedText = textBox2->Text;//запись текста из textBox2 в richTextBox1
			}
		}
		catch (int)//отлов ошибки типа int 
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Радок пуст", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("String is empty", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на русском языке
			{
				MessageBox::Show("Строка пустая", "Ошибка");//показать сообщение с описание ошибки
			}
		}
		catch (std::logic_error e)//отлов ошибки типа logic_error
		{
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("Выяўлена памылка", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("Error detected", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на русском языке
			{
				MessageBox::Show("Обнаружена ошибка", "Ошибка");//показать сообщение с описание ошибки
			}
		}
	}
	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на fontToolStripMenuItem, в котором происходит выбор шрифта текста 
	{
		FontDialog^ fd = gcnew FontDialog;//декларация окна FondDialog
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)//окртытие окна с выбором шрифта
		{
			richTextBox1->Font = fd->Font;//использование шрифта на richTextBox1
			richTextBox2->Font = fd->Font;//использование шрифта на richTextBox2
		}
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//обработчик создания оконной формы
	{
		HelpForm^ form = gcnew HelpForm(Language, Color);;//создать новую оконную форму типа класса MainForm конструктором с ;//создать новую оконную форму типа класса MainForm конструктором с вещественным параметромпараметром
		form->Show();//показать форму
	}
};
}
