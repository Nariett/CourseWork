#pragma once
#include <string.h>//����������� ���������� string.h ��� ������ � ��������
#include <fstream>//����������� ���������� fstream ���x ������ ������
#include <stdexcept>//����������� ���������� stdexcept ��� ������ � ������������
#include "HelpForm.h"//����������� ������� ����� HelpForm.h
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(int x, int y)//���������� ����������� ��������� ������������� ����������
		{
			InitializeComponent();//����� InitializeComponent()
			this->Color = y;//�������������� ���������� ���������� Color
			this->Language = x;//�������������� ���������� ���������� Color
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
		void DeleteTNR(String^& x)//������� ��� �������� �� ������ \t \n \r
		{
			bool point = false;//���������� � ������������� ���������� ���� bool
			int poi = 0;//���������� � ������������� ���������� ���� int
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if ((Text[i] == '\t') | (Text[i] == '\n') | (Text[i] == '\r'))//���� � ������ ������ ������� '\t', '\n', '\r'
				{
					if (i > 2)//���� i > 2
					{
						if (point != true)//���� point �� ����� true
						{
							poi = i;//���������� poi �������� i
							if (Text[i - 1] != '.')
							{
								�orrectedText += ". ";//���������� �������� ". " � CorrectedText
								point = true;//���������� point �������� true
							}
							else//�����
							{
								�orrectedText += " ";//���������� �������� " " � CorrectedText
							}
						}
					}
					continue;//������� �� �������� ��������� � �����
				}
				�orrectedText += Text[i];//���������� �������� �� Text[i] � CorrectedText
				if (i - poi > 2)//���� i-poi > 2
				{
					point = false;//���������� point �������� false
				}
				if (Length == i)//���� Length = i
				{
					�orrectedText += ".";//���������� �������� "." � CorrectedText
				}
			}
			DelSpace(x = �orrectedText);//����� ������� DelSpace
		}
		void DelSpace(String^& x)//������� ��� �������� ������� �������� ������ � ������
		{
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (i != Length - 1)//���� i �� ����� Length - 1 
				{
					if (Text[i] == ' ' & Text[i + 1] == ' ')//���� � ������ ������ ������� '  '
					{
						continue;//������� �� �������� ��������� � �����
					}
				}
				if (i + 1 == Length)//���� i + 1 ����� Length 
				{
					if (Text[i] == ' ')//���� �������� �� Text[i] ����� ' '
					{
						continue;//������� �� �������� ��������� � �����
					}
				}
				�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
				if (i + 1 == Length)//���� i+1 = Lenght
				{
					if (Text[i] != '.' & Text[i] != ' ')//���� � ������ �� ������ ������� '.' � ' '
					{
						�orrectedText += ".";//���������� ������� "." � �orrectedText
					}
				}
			}
			DeleteMark (x = �orrectedText);//����� ������� DeleteMark
		}
		void DeleteMark(String^& x)//������� ��� �������� ������ �������� � ������ ����� ��� '-',';','"','\','!','?','.'
		{
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (Text[i] == '.' | Text[i] == '?' | Text[i] == '!')//���� � ������ ����������� ������ ������� '.','?','!'
				{
					�orrectedText += ".";//���������� ������� "." � �orrectedText
				}
				else//�����
				{
					if (Text[i] == '-' | Text[i] == ';' | Text[i] == ':' | Text[i] == '"' | Text[i] == '\'')//���� � ������ ����������� ������ ������� '-',';',':','"','\''
					{
						continue;//������� �� �������� ��������� � �����
					}
					else//�����
					{
						�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
					}
				}
			}
			DeleteDoublePoint(x = �orrectedText);//����� ������� DeleteDoublePoint
		}
		void DeleteDoublePoint(String^& x)//������� ��� �������� ������� ����� ������� ����� � ������
		{
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (i != 0)//���� i �� ����� 0
				{
					if (Text[i] == '.' & Text[i - 1] == '.')
					{
						continue;//������� �� �������� ��������� � �����
					}
					else//�����
					{
						�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
					}
				}
				else//�����
				{
					�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
				}
			}
			DeleteFirstPoint(x = �orrectedText);//����� ������� DeleteFirstPoint
		}
		void DeleteFirstPoint(String^& x)//������� ��� �������� ����� ���� ������ ���������� � �����
		{
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (i == 0)//���� i = 0
				{
					if (Text[i] == '.' & Text[i+1] == ' ')//���� � ������ ������� ������� '. '
					{
						continue;//������� �� �������� ��������� � �����
					}
				}
				else//�����
				{
					�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
				}
			}
			x = �orrectedText;//���������� �������� CorrectedText � ������ x
		}
		void DeleteDoubleSentences(String^& x)//������� ��� �������� ������� �������� � ������
		{
			String^ Text = gcnew String(x);//���������� � ������������� ���������� ���� String
			String^ �orrectedText;//���������� ���������� ���� String
			int Length = Text->Length;//���������� � ������������� ���������� ���� int � ������� ����� ������ Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (i != Length - 1 & i != 0)//���� i �� ����� Lenght-1 � i �� ����� 0
				{
					if ((Text[i] == ' ' & Text[i + 1] == '.') | (Text[i - 1] == ' ' & Text[i] == '.'))//���� � ������ ��������� ������ ��������
					{
						i++;//���������� �������� i �� 1
						continue;//������� �� �������� ��������� � �����
					}
					else//�����
					{
						�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
					}
				}
				else//�����
				{
					�orrectedText += Text[i];//���������� ������� Text[i] � �orrectedText
				}

			}
			x = �orrectedText;//���������� �������� CorrectedText � ������ x

		}
		int Language = 0;//���������� � ������������� ���������� ���������� ���� int ��� ����� ����� � ���������
		int Color = 0;//���������� � ������������� ���������� ���������� ���� int ��� ����� ����� ���� � ���������
		int LengthText = 0;//���������� � ������������� ���������� ���������� ���� int
		int LengthText2 = 0;//���������� � ������������� ���������� ���������� ���� int
		int pass = 1;//���������� � ������������� ���������� ���������� ���� int
		String^ URLF;//���������� ���������� ���������� ���� String
		String^ Range;//���������� ���������� ���������� ���� Stirng
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)//�����-���������� ������� �������� ������� �����
	{
		if (Language == 1)//���� Language = 1 => ��������� ������������ �����
		{
			this->label1->Text = "����� 1";//��������� ������� ������� label1 �� ����������� �����
			this->label2->Text = "����� 2";//��������� ������� ������� label2 �� ����������� �����
			this->label4->Text = "�����";//��������� ������� ������� label2 �� ����������� �����
			this->button1->Text = "���������";//��������� ������� ������ button1 �� ����������� �����
			this->button2->Text = "�����i�� ����";//��������� ������� ������ button2 �� ����������� �����
			this->button3->Text = "�����i�� ����";//��������� ������� ������ button3 �� ����������� �����
			this->button4->Text = "�����";//��������� ������� ������ button4 �� ����������� �����
			this->button5->Text = "�������";//��������� ������� ������ button5 �� ����������� �����
			this->fileToolStripMenuItem->Text = "����";//��������� ������� ���� fileToolStripMenuItem �� ����������� �����
			this->openFileToolStripMenuItem->Text = "�������";//��������� ������� ���� openFileToolStripMenuItem �� ����������� �����
			this->saveToolStripMenuItem->Text = "��������";//��������� ������� ���� saveToolStripMenuItem �� ����������� �����
			this->settingsToolStripMenuItem->Text = "������������";//��������� ������� ���� settingsToolStripMenuItem �� ����������� �����
			this->backGroundToolStripMenuItem->Text = "����i ���";//��������� ������� ���� backGroundToolStripMenuItem �� ����������� �����
			this->languageToolStripMenuItem->Text = "����";//��������� ������� ���� languageToolStripMenuItem �� ����������� �����
			this->rUToolStripMenuItem->Text = "���";//��������� ������� ���� rUToolStripMenuItem �� ����������� �����
			this->bYToolStripMenuItem->Text = "���";//��������� ������� ���� bYToolStripMenuItem �� ����������� �����
			this->eNToolStripMenuItem->Text = "����";//��������� ������� ���� eNToolStripMenuItem �� ����������� �����
			this->greenToolStripMenuItem->Text = "�����";//��������� ������� ���� greenToolStripMenuItem �� ����������� �����
			this->blueToolStripMenuItem->Text = "�i�i";//��������� ������� ���� blueToolStripMenuItem �� ����������� �����
			this->redToolStripMenuItem->Text = "�������";//��������� ������� ���� redToolStripMenuItem �� ����������� �����
			this->defaultToolStripMenuItem->Text = "����������";//��������� ������� ���� defaultToolStripMenuItem �� ����������� �����
			this->createFileToolStripMenuItem->Text = "�������� ����";//��������� ������� ���� createFileToolStripMenuItem �� ����������� �����
			this->fontToolStripMenuItem->Text = "�����";//��������� ������� ���� fontToolStripMenuItem �� ����������� �����
			this->helpToolStripMenuItem->Text = "��������";//��������� ������� ���� helpToolStripMenuItem �� ����������� �����
		}
		if (Language == 2)//���� Language = 2 => ��������� ���������� �����
		{
			this->label1->Text = "Text 1";//��������� ������� ������� label1 �� ��������� �����
			this->label2->Text = "Text 2";//��������� ������� ������� label2 �� ��������� �����
			this->label4->Text = "Files";//��������� ������� ������� label4 �� ��������� �����
			this->button1->Text = "Compare";//��������� ������� ������ button1 �� ��������� �����
			this->button2->Text = "Paste here";//��������� ������� ������ button2 �� ��������� �����
			this->button3->Text = "Paste here";//��������� ������� ������ button3 �� ��������� �����
			this->button4->Text = "Search";//��������� ������� ������ button4 �� ��������� �����
			this->button5->Text = "Replace";//��������� ������� ������ button5 �� ��������� �����
			this->backGroundToolStripMenuItem->Text = "Backgroud";//��������� ������� ���� backGroundToolStripMenuItem �� ����������� �����
			this->fileToolStripMenuItem->Text = L"File";//��������� ������� ���� fileToolStripMenuItem �� ��������� �����
			this->openFileToolStripMenuItem->Text = L"Open";//��������� ������� ���� openFileToolStripMenuItem �� ��������� �����
			this->saveToolStripMenuItem->Text = "Save";//��������� ������� ���� saveToolStripMenuItem �� ��������� �����
			this->settingsToolStripMenuItem->Text = "Settings";//��������� ������� ���� settingsToolStripMenuItem �� ��������� �����
			this->rUToolStripMenuItem->Text ="RU";//��������� ������� ���� rUToolStripMenuItem �� ��������� �����
			this->bYToolStripMenuItem->Text = "BY";//��������� ������� ���� bYToolStripMenuItem �� ��������� �����
			this->eNToolStripMenuItem->Text = "EN";//��������� ������� ���� eNToolStripMenuItem �� ��������� �����
			this->greenToolStripMenuItem->Text = "Green";//��������� ������� ���� greenToolStripMenuItem �� ��������� �����
			this->blueToolStripMenuItem->Text = "Blue";//��������� ������� ���� blueToolStripMenuItem �� ��������� �����
			this->redToolStripMenuItem->Text = "Red";//��������� ������� ���� redToolStripMenuItem �� ��������� �����
			this->defaultToolStripMenuItem->Text = "Default";//��������� ������� ���� defaultToolStripMenuItem �� ��������� �����
			this->createFileToolStripMenuItem->Text = "Create file";//��������� ������� ���� createFileToolStripMenuItem �� ��������� �����
			this->languageToolStripMenuItem->Text = "Language";//��������� ������� ���� languageToolStripMenuItem �� ��������� �����
			this->fontToolStripMenuItem->Text = "Font";//��������� ������� ���� fontToolStripMenuItem �� ��������� �����
			this->helpToolStripMenuItem->Text = "Help";//��������� ������� ���� helpToolStripMenuItem �� ��������� �����
		}
		if (Language == 3)//���� Language = 3 => ��������� �������� �����
		{
			this->label1->Text = "T���� 1";//��������� ������� ������� label1 �� ������� �����
			this->label2->Text = "����� 2";//��������� ������� ������� label2 �� ������� �����
			this->label4->Text = "�����";//��������� ������� ������� label4 �� ������� �����
			this->button1->Text = "��������";//��������� ������� ������ button1 �� ������� �����
			this->button2->Text = "�������� ����";//��������� ������� ������ button2 �� ������� �����
			this->button3->Text = "�������� ����";//��������� ������� ������ button3 �� ������� �����
			this->button4->Text = "�����";//��������� ������� ������ button4 �� ������� �����
			this->button5->Text = "��������";//��������� ������� ������ button5 �� ������� �����
			this->fileToolStripMenuItem->Text = L"����";//��������� ������� ���� fileToolStripMenuItem �� ��������� �����
			this->openFileToolStripMenuItem->Text = L"�������";//��������� ������� ���� openFileToolStripMenuItem �� ��������� �����
			this->saveToolStripMenuItem->Text = "���������";//��������� ������� ���� saveToolStripMenuItem �� ��������� �����
			this->backGroundToolStripMenuItem->Text = "������ ���";//��������� ������� ���� backGroundToolStripMenuItem �� ��������� �����
			this->settingsToolStripMenuItem->Text = "���������";//��������� ������� ���� settingsToolStripMenuItem �� ��������� �����
			this->rUToolStripMenuItem->Text = L"���";//��������� ������� ���� rUToolStripMenuItem �� ��������� �����
			this->bYToolStripMenuItem->Text = L"���";//��������� ������� ���� bYToolStripMenuItem �� ��������� �����
			this->eNToolStripMenuItem->Text = L"����";//��������� ������� ���� eNToolStripMenuItem �� ��������� �����
			this->greenToolStripMenuItem->Text = L"�������";//��������� ������� ���� greenToolStripMenuItem �� ��������� �����
			this->blueToolStripMenuItem->Text = L"�����";//��������� ������� ���� blueToolStripMenuItem �� ��������� �����
			this->redToolStripMenuItem->Text = L"�������";//��������� ������� ���� redToolStripMenuItem �� ��������� �����
			this->defaultToolStripMenuItem->Text = L"�����������";//��������� ������� ���� defaultToolStripMenuItem �� ��������� �����
			this->createFileToolStripMenuItem->Text = "������� ����";//��������� ������� ���� createFileToolStripMenuItem �� ��������� �����
			this->languageToolStripMenuItem->Text = "����";//��������� ������� ���� languageToolStripMenuItem �� ��������� �����
			this->fontToolStripMenuItem->Text = "�����";//��������� ������� ���� fontToolStripMenuItem �� ��������� �����
			this->helpToolStripMenuItem->Text = "������";//��������� ������� ���� helpToolStripMenuItem �� ��������� �����
		}
		if (Color == 0)//���� Color = 0 => ��������� �������� ����� "��������� �����"
		{
			this->BackColor = SystemColors::ButtonFace;//��������� ������� ������ ���� ������� ����� �������� ���� "��������� �����" 
			this->label1->ForeColor = Color::Black;//��������� ���� ������� Label1 "������ ����"
			this->label2->ForeColor = Color::Black;//��������� ���� ������� Label2 "������ ����"
			this->label4->ForeColor = Color::Black;//��������� ���� ������� Label4 "������ ����"
		}
		if (Color == 1)//���� Color = 1 => ��������� �������� ����� "�����"
		{
			this->BackColor = Color::Blue;//��������� ������� ������ ���� ������� ����� ���� "�����"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
			this->label4->ForeColor = Color::White;//��������� ���� ������� Label4 "�����"
		}
		if (Color == 2)//���� Color = 2 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Green;//��������� ������� ������ ���� ������� ����� ���� "�������"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
			this->label4->ForeColor = Color::White;//��������� ���� ������� Label4 "�����"
		}
		if (Color == 3)//���� Color = 3 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Red;//��������� ������� ������ ���� ������� ����� ���� "�������"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
			this->label4->ForeColor = Color::White;//��������� ���� ������� Label4 "�����"
		}
	}
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� saveToolStripMenuItem, � ������� ���������� �������� ������ � fileListBox1
	{
		fileListBox1->Pattern = "*.txt";//��������� ����� ������ � fileListBox1
		folderBrowserDialog1->ShowDialog();//������� ���� ��������� �����
		fileListBox1->FileName = folderBrowserDialog1->SelectedPath;//����������� ������ ������ �� ����� ��������� � folderBrowserDialog1
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� saveToolStripMenuItem, � ������� ���������� ���������� ������ �� richTextBox1 � ����
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			String^ Text = this->richTextBox1->Text;//���������� � ������������� ���������� ���� String ������� �� richTextBox1
			if (Text->Length == 0)//���� ������ ������
			{
				throw 1;//����� ���������� ���� int
			}
			openFileDialog1->Filter = "Text Files|*.txt";//���������� ������ � openFileDialog1
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamWriter^ sw = gcnew StreamWriter(openFileDialog1->FileName);//�������� ������ ��� ������ ���������� � ��������� ����� 
				String^ SaveText;//���������� ���������� ���� String
				String^ proposal;//���������� ���������� ���� String
				int Length = 0;//���������� � ������������� ���������� ���� String
				Length = Text->Length;//���������� lenght �������� ����� ������ Text
				for (int i = 0; i < Length; i++)//����� ������� � ������ 
				{
					if (Text[i] == '_')//������� ������
					{
						SaveText += "\n\t";//��������� �������� �� ����� ������ � �������������
					}
					else//�����
					{
						if (Text[i] == '&')//������������� ������
						{
							SaveText += "\n\t- ";//��������� �������� �� ����� ������, ������������� � ������� "-"
						}
						else//�����
						{
							SaveText += Text[i];//���������� ������� Text[i] � SaveText
						}
					}
				}
				sw->WriteLine(SaveText);//������ ������ � Data.txt
				sw->Close();//�������� ������ sw
				if (Language == 1)//���� Language = 1 => MessageBox  ����������� �����
				{
					MessageBox::Show("���� �������� � : " + openFileDialog1->FileName, "��������");//�������� ��������� � �����������
				}
				if (Language == 2)//���� Language = 1 => MessageBox ��������� �����
				{
					MessageBox::Show("File save in : " + openFileDialog1->FileName, "Save");//�������� ��������� � �����������
				}
				if (Language == 3)//���� Language = 1 => MessageBox ������� �����
				{
					MessageBox::Show("���� ���������� � " +openFileDialog1->FileName, "���������");//�������� ��������� � �����������
				}
			}
		}
		catch (int)//����� ������ ���� int
		{
			if (Language == 1)//���� Language = 1 => MessageBox  ����������� �����
			{
				MessageBox::Show("��������� ���� ������, �����i�� ���-�������", "�������");//�������� ��������� � �����������
			}
			if (Language == 2)//���� Language = 1 => MessageBox ��������� �����
			{
				MessageBox::Show("Text field is empty, enter something", "Error");//�������� ��������� � �����������
			}
			if (Language == 3)//���� Language = 1 => MessageBox ������� �����
			{
				MessageBox::Show("��������� ���� ������, ������� ���-������", "������");//�������� ��������� � �����������
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button1, � ������� ���������� ���������� �������� ��������� ������ �� richTextBox1 � richTextBox2
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			String^ Sourse = richTextBox1->Text;//���������� � ������������� ������� �� richTextBox1 ���������� ���� String 
			String^ paste = richTextBox2->Text;//���������� � ������������� ������� �� richTextBox2 ���������� ���� String 
			if (Sourse->Length == 0 | paste->Length == 0)//���� ������ ������ 
			{
				throw 1;//����� ���������� ���� int
			}
			DeleteTNR(Sourse);//����� ������� DeleteTNR ��� ������ Sourse
			DeleteTNR(paste);//����� ������� DeleteTNR ��� ������ paste
			DelSpace(Sourse);//����� ������� DelSpace ��� ������ Sourse
			DelSpace(paste);//����� ������� DelSpace ��� ������ paste
			DeleteDoubleSentences(Sourse);//����� ������� DeleteDoubleSentences ��� ������ Sourse
			DeleteDoubleSentences(paste);//����� ������� DeleteDoubleSentences ��� ������ paste
			double type;//���������� ���������� ���� double
			int fp = 0;//���������� � �������������� ���������� ���� int
			int fp2 = 0;//���������� � �������������� ���������� ���� int
			int sentence = 0;//���������� � �������������� ���������� ���� int
			int sp, sp2;//���������� ���������� ���� int
			int sim = 0;//���������� � �������������� ���������� ���� int
			int Length = Sourse->Length;//���������� ���������� � ���������� ����� ������ Sourse
			int Length2 = paste->Length;//���������� ���������� � ���������� ����� ������ paste
			for (int i = 0; i <= Length; i++)//���� ��� ���������� ��������� � ������ 
			{
				if (i == Length)//���� i = Lenght
				{
					break;//����� �� �����
				}
				if (Sourse[i] == '.' | Sourse[i] == '?' | Sourse[i] == '!')//���� � ������ ����������� ������ ������� '.','?','!'
				{
					sentence++;//���������� �������� �����������
					sp = i + 1;//���������� �������� ������� ������, ������� ���������� �� ������������ ����� � ������
					String^ sent;//���������� ���������� ���� String 
					for (int j = fp; j < sp; j++)//���� ��� ������ ����������� � ������
					{
						sent += Sourse[j];//���������� ������� Sourse[j] � sent
					}
					for (int w = 0; w < Length2; w++)//���� ��� ���������� ��������� � ������ 
					{
						if (paste[w] == '.' | paste[w] == '?' | paste[w] == '!')//���� � ������ ������� ������� '.','?','!'
						{
							sp2 = w + 1;//���������� �������� ������� ������, ������� ���������� �� ������������ ����� � ������
							String^ sent2;//���������� ���������� ���� String 
							for (int e = fp2; e < sp2; e++)//���� ��� ������ ����������� � ������
							{
								sent2 += paste[e];//���������� ������� paste[e] � sent2
							}
							sent = sent->ToLower();//���������� �������� ������ sent 
							sent2 = sent2->ToLower();//���������� �������� ������ sent 2
							if (sent == sent2)//���� sent = sent
							{
								sim += 1;//���������� �������� ������� �����������
							}
							fp2 = sp2 + 1;//���������� �������� ���������� fp2 �������� sp2 + 1
						}
					}
					fp = sp + 1;//���������� �������� ���������� fp �������� sp + 1
					fp2 = 0;//��������� ����������
				}
			}
			if (sentence == 0)//���� ���-�� ����������� ����� 0
			{
				throw 0.1;//����� ���������� ���� double
			}
			double x = double(sim) / double(sentence) * 100;//���������� �������� �������� ������� x = sim/sentence*100
			if (x > 100)//���� x > 100
			{
				x = 100;//���������� �������� ���������� x
			}
			if (x > 50)//���� x < 50
			{
				this->label3->ForeColor = Color::Red;//��������� ����� ������ �� ������� � label3 
				this->label3->Text = x.ToString() + "%";//���������� ���������
			}
			else//�����
			{
				this->label3->ForeColor = Color::Green;//��������� ����� ������ �� ������� � label3 
				this->label3->Text = x.ToString() + "%";//��������� ����� ������ � label3 
			}
		}
		catch (int)//����� ������ ���� int
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("��������� ���� ������, �����i�� ���-�������","�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("Text field is empty, enter something", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� �������� �����
			{
				MessageBox::Show("��������� ���� ������, ������� ���-������","������");//�������� ��������� � �������� ������
			}
		}
		catch (double)//����� ������ ���� double
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("��������� ���� �� ��� ����� ���������", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("Text field does not have a whole sentence", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� �������� �����
			{
				MessageBox::Show("��������� ���� �� ����� ������ �����������", "������");//�������� ��������� � �������� ������
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button2, � ������� ���������� ������� ������ �� txt ����� � richTextBox1
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			StreamReader^ read = gcnew StreamReader(URLF);//�������� ������ read ��� ������ ��� �����, ���� �������� ���������� � ����� URLF
			richTextBox1->Text = read->ReadToEnd();//���������� �������� � richTextBox2 �� �����
			String^ Text = richTextBox1->Text;//���������� � ������������� ���������� ���� String ������� �� richTextBox1
			String^ Sentensens;//���������� ���������� ���� String
			read->Close();//�������� ������ read
			int counter = 0;//���������� � ������������� ���������� ���� int
			int counterText = 0;//���������� � ������������� ���������� ���� int
			int f = 0;//���������� � ������������� ���������� ���� int
			int l = 0;//���������� � ������������� ���������� ���� int
			int Length = Text->Length;//���������� � ������������� ���������� ���� int ��������� ����� Text
			for (int i = 0; i < Length; i++)//���� ��� ���������� ��������� � ������
			{
				if (Text[i] == '.')//���� �������� �� Text[i] ����� '.'
				{
					counter++;//���������� �������� �� 1
					l = i;//���������� �������� �� i � l
					if (counter == 1)//���� ������� ����� 1
					{
						for (int w = 0; w < l + 1; w++)//���� ��� ���������� ������
						{
							Sentensens += Text[w];//���������� ������� Text[w] � Sentensens
						}
					}
				}
			}
			LengthText = Length;//���������� �������� Length � LengthText
		}
		catch (System::ArgumentNullException^ e)//����� ������ ���� ArgumentNullException
		{
			if (Language == 1)//�������� ��������� � �������� ������
			{
				MessageBox::Show("�� �� ������i ���� ��� ��������", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("You have not selected file to open", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� �������� �����
			{
				MessageBox::Show("�� �� ������� ���� ��� ��������", "������");//�������� ��������� � �������� ������
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button3, � ������� ���������� ������� ������ �� txt ����� � richTextBox1 
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			StreamReader^ read = gcnew StreamReader(URLF);//�������� ������ read ��� ������ ��� �����, ���� �������� ���������� � ����� URLF
			richTextBox2->Text = read->ReadToEnd();//���������� �������� � richTextBox2 �� �����
			read->Close();//�������� ������ read
			String^ Text = richTextBox2->Text;//���������� � ������������� ���������� ���� String ������� �� richTextBox2
		}
		catch (System::ArgumentNullException^ e)//����� ������ ���� ArgumentNullException
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("�� �� ������i ���� ��� ��������", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("You have not selected file to open", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� �������� �����
			{
				MessageBox::Show("�� �� ������� ���� ��� ��������", "������");//�������� ��������� � �������� ������
			}
		}
	}
	private: System::Void blueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� blueToolStripMenuItem , � ������� ���������� ������� ����� ������� ���� �� ����� ����
	{
		this->BackColor = Color::Blue;//��������� ������� ������ ���� ������� ����� ���� "�����"
		this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
		this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		Color = 1;//���������� �������� � Color 
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� greenToolStripMenuItem , � ������� ���������� ������� ����� ������� ���� �� ������� ���� 
	{
		this->BackColor = Color::Green;//��������� ������� ������ ���� ������� ����� ���� "�������"
		this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
		this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		Color = 2;//���������� �������� � Color 
	}
	private: System::Void redToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� redToolStripMenuItem , � ������� ���������� ������� ����� ������� ���� �� ������� ���� 
	{
		this->BackColor = Color::Red;//��������� ������� ������ ���� ������� ����� ���� "�������"
		this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
		this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		Color = 3;//���������� �������� � Color 
	}
	private: System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� defaultToolStripMenuItem , � ������� ���������� ������� ����� ������� ���� ����������� ����
	{
		this->BackColor = SystemColors::ButtonFace;//��������� ������� ������ ���� ������� ����� �������� ���� "��������� �����" 
		this->label1->ForeColor = Color::Black;//��������� ���� ������� Label1 "������ ����"
		this->label2->ForeColor = Color::Black;//��������� ���� ������� Label2 "������ ����"
		Color = 0;//���������� �������� � Color 
	}
	private: System::Void bYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //���������� ������� �� bYToolStripMenuItem , � ������� ���������� ������� ����� �� ����������� 
	{
		Language = 1;//���������� �������� � Language
		this->label1->Text = "����� 1";//��������� ������� ������� label1 �� ����������� �����
		this->label2->Text = "����� 2";//��������� ������� ������� label2 �� ����������� �����
		this->label4->Text = "�����";//��������� ������� ������� label2 �� ����������� �����
		this->button1->Text = "���������";//��������� ������� ������ button1 �� ����������� �����
		this->button2->Text = "�����i�� ����";//��������� ������� ������ button2 �� ����������� �����
		this->button3->Text = "�����i�� ����";//��������� ������� ������ button3 �� ����������� �����
		this->button4->Text = "�����";//��������� ������� ������ button4 �� ����������� �����
		this->button5->Text = "�������";//��������� ������� ������ button5 �� ����������� �����
		this->fileToolStripMenuItem->Text = "����";//��������� ������� ���� fileToolStripMenuItem �� ����������� �����
		this->openFileToolStripMenuItem->Text = "�������";//��������� ������� ���� openFileToolStripMenuItem �� ����������� �����
		this->saveToolStripMenuItem->Text = "��������";//��������� ������� ���� saveToolStripMenuItem �� ����������� �����
		this->settingsToolStripMenuItem->Text = "������������";//��������� ������� ���� settingsToolStripMenuItem �� ����������� �����
		this->backGroundToolStripMenuItem->Text = "����i ���";//��������� ������� ���� backGroundToolStripMenuItem �� ����������� �����
		this->languageToolStripMenuItem->Text = "����";//��������� ������� ���� languageToolStripMenuItem �� ����������� �����
		this->rUToolStripMenuItem->Text = "���";//��������� ������� ���� rUToolStripMenuItem �� ����������� �����
		this->bYToolStripMenuItem->Text = "���";//��������� ������� ���� bYToolStripMenuItem �� ����������� �����
		this->eNToolStripMenuItem->Text = "����";//��������� ������� ���� eNToolStripMenuItem �� ����������� �����
		this->greenToolStripMenuItem->Text = "�����";//��������� ������� ���� greenToolStripMenuItem �� ����������� �����
		this->blueToolStripMenuItem->Text = "�i�i";//��������� ������� ���� blueToolStripMenuItem �� ����������� �����
		this->redToolStripMenuItem->Text = "�������";//��������� ������� ���� redToolStripMenuItem �� ����������� �����
		this->defaultToolStripMenuItem->Text = "����������";//��������� ������� ���� defaultToolStripMenuItem �� ����������� �����
		this->createFileToolStripMenuItem->Text = "�������� ����";//��������� ������� ���� createFileToolStripMenuItem �� ����������� �����
		this->fontToolStripMenuItem->Text = "�����";//��������� ������� ���� fontToolStripMenuItem �� ����������� �����
		this->helpToolStripMenuItem->Text = "��������";//��������� ������� ���� helpToolStripMenuItem �� ����������� �����
	}
	private: System::Void eNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // ���������� ������� �� eNToolStripMenuItem, � ������� ���������� ������� ����� �� ���������
	{
		Language = 2;//���������� �������� � Language
		this->label1->Text = "Text 1";//��������� ������� ������� label1 �� ��������� �����
		this->label2->Text = "Text 2";//��������� ������� ������� label2 �� ��������� �����
		this->label4->Text = "Files";//��������� ������� ������� label4 �� ��������� �����
		this->button1->Text = "Compare";//��������� ������� ������ button1 �� ��������� �����
		this->button2->Text = "Paste here";//��������� ������� ������ button2 �� ��������� �����
		this->button3->Text = "Paste here";//��������� ������� ������ button3 �� ��������� �����
		this->button4->Text = "Search";//��������� ������� ������ button4 �� ��������� �����
		this->button5->Text = "Replace";//��������� ������� ������ button5 �� ��������� �����
		this->backGroundToolStripMenuItem->Text = "Backgroud";//��������� ������� ���� backGroundToolStripMenuItem �� ����������� �����
		this->fileToolStripMenuItem->Text = L"File";//��������� ������� ���� fileToolStripMenuItem �� ��������� �����
		this->openFileToolStripMenuItem->Text = L"Open";//��������� ������� ���� openFileToolStripMenuItem �� ��������� �����
		this->saveToolStripMenuItem->Text = "Save";//��������� ������� ���� saveToolStripMenuItem �� ��������� �����
		this->settingsToolStripMenuItem->Text = "Settings";//��������� ������� ���� settingsToolStripMenuItem �� ��������� �����
		this->rUToolStripMenuItem->Text = "RU";//��������� ������� ���� rUToolStripMenuItem �� ��������� �����
		this->bYToolStripMenuItem->Text = "BY";//��������� ������� ���� bYToolStripMenuItem �� ��������� �����
		this->eNToolStripMenuItem->Text = "EN";//��������� ������� ���� eNToolStripMenuItem �� ��������� �����
		this->greenToolStripMenuItem->Text = "Green";//��������� ������� ���� greenToolStripMenuItem �� ��������� �����
		this->blueToolStripMenuItem->Text = "Blue";//��������� ������� ���� blueToolStripMenuItem �� ��������� �����
		this->redToolStripMenuItem->Text = "Red";//��������� ������� ���� redToolStripMenuItem �� ��������� �����
		this->defaultToolStripMenuItem->Text = "Default";//��������� ������� ���� defaultToolStripMenuItem �� ��������� �����
		this->createFileToolStripMenuItem->Text = "Create file";//��������� ������� ���� createFileToolStripMenuItem �� ��������� �����
		this->languageToolStripMenuItem->Text = "Language";//��������� ������� ���� languageToolStripMenuItem �� ��������� �����
		this->fontToolStripMenuItem->Text = "Font";//��������� ������� ���� fontToolStripMenuItem �� ��������� �����
		this->helpToolStripMenuItem->Text = "Help";//��������� ������� ���� helpToolStripMenuItem �� ��������� �����
	}
	private: System::Void rUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)  // ���������� ������� �� rUToolStripMenuItem, � ������� ���������� ������� ����� �� �������
	{
		Language = 3;//���������� �������� � Language
		this->label1->Text = "T���� 1";//��������� ������� ������� label1 �� ������� �����
		this->label2->Text = "����� 2";//��������� ������� ������� label2 �� ������� �����
		this->label4->Text = "�����";//��������� ������� ������� label4 �� ������� �����
		this->button1->Text = "��������";//��������� ������� ������ button1 �� ������� �����
		this->button2->Text = "�������� ����";//��������� ������� ������ button2 �� ������� �����
		this->button3->Text = "�������� ����";//��������� ������� ������ button3 �� ������� �����
		this->button4->Text = "�����";//��������� ������� ������ button4 �� ������� �����
		this->button5->Text = "��������";//��������� ������� ������ button5 �� ������� �����
		this->fileToolStripMenuItem->Text = L"����";//��������� ������� ���� fileToolStripMenuItem �� ��������� �����
		this->openFileToolStripMenuItem->Text = L"�������";//��������� ������� ���� openFileToolStripMenuItem �� ��������� �����
		this->saveToolStripMenuItem->Text = "���������";//��������� ������� ���� saveToolStripMenuItem �� ��������� �����
		this->backGroundToolStripMenuItem->Text = "������ ���";//��������� ������� ���� backGroundToolStripMenuItem �� ��������� �����
		this->settingsToolStripMenuItem->Text = "���������";//��������� ������� ���� settingsToolStripMenuItem �� ��������� �����
		this->rUToolStripMenuItem->Text = L"���";//��������� ������� ���� rUToolStripMenuItem �� ��������� �����
		this->bYToolStripMenuItem->Text = L"���";//��������� ������� ���� bYToolStripMenuItem �� ��������� �����
		this->eNToolStripMenuItem->Text = L"����";//��������� ������� ���� eNToolStripMenuItem �� ��������� �����
		this->greenToolStripMenuItem->Text = L"�������";//��������� ������� ���� greenToolStripMenuItem �� ��������� �����
		this->blueToolStripMenuItem->Text = L"�����";//��������� ������� ���� blueToolStripMenuItem �� ��������� �����
		this->redToolStripMenuItem->Text = L"�������";//��������� ������� ���� redToolStripMenuItem �� ��������� �����
		this->defaultToolStripMenuItem->Text = L"�����������";//��������� ������� ���� defaultToolStripMenuItem �� ��������� �����
		this->createFileToolStripMenuItem->Text = "������� ����";//��������� ������� ���� createFileToolStripMenuItem �� ��������� �����
		this->languageToolStripMenuItem->Text = "����";//��������� ������� ���� languageToolStripMenuItem �� ��������� �����
		this->fontToolStripMenuItem->Text = "�����";//��������� ������� ���� fontToolStripMenuItem �� ��������� �����
		this->helpToolStripMenuItem->Text = "������";//��������� ������� ���� helpToolStripMenuItem �� ��������� �����
	}
	private: System::Void fileListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� fileListBox1, � ������� ���������� ����� ����� ��� ��������
	{
		String^ URL = folderBrowserDialog1->SelectedPath + "\\" + fileListBox1->SelectedItem->ToString();//���������� � ������������� ���������� String ������� �����
		URLF = gcnew String(URL);//������������� ���������� ���������� URLF 
		if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
		{
			MessageBox::Show("�� ������i ���� " + URLF, "����");//�������� ��������� � ��������� ���������� �����
		}
		if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
		{
			MessageBox::Show("You selected file " + URLF, "File");//�������� ��������� � �������� ���������� �����
		}
		if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
		{
			MessageBox::Show("�� ������� ���� " + URLF, "����");//�������� ��������� � �������� ���������� �����
		}
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)//���������� ������� �� ������ �������� ����������
	{
		Application::Exit();//�������� ����������
	}
	private: System::Void createFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //���������� ������� �� createFileToolStripMenuItem, � ������� ���������� �������� txt ����� 
	{
		saveFileDialog1->Filter = "Text Files|*.txt";//��������� ����� ������
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)//����� ������������ ����� �� ����������
		{
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);//�������� ������ ������ sw
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("�� �������i ���� ���� � " + saveFileDialog1->FileName, "�������� ����");//�������� ��������� � ��������� ����
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("You create new file in " + saveFileDialog1->FileName, "Create file");//�������� ��������� � ��������� ����
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
			{
				MessageBox::Show("�� ������� ����� ���� � " + saveFileDialog1->FileName, "������ ����");//�������� ��������� � ��������� ����
			}
			sw->Write("");//������ ������� � ��������� ��������
			sw->Close();//�������� ������ sw
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //���������� ������� �� button4, � ������� ���������� ����� ���� � ������
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			if (textBox1->Text == "")//���� textBox1 ����
			{
				throw 1;//����� ����������
			}
			int index = 0;//���������� � ������������� ���������� ���� int
			String^ temp = richTextBox1->Text;//���������� ���������� ���� String 
			richTextBox1->Text = "";//�������� richTextBox1
			richTextBox1->Text = temp;//���������� ���������� ���� String
			while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))//���� index ������ ����� richTextBox2
			{
				richTextBox1->Find(textBox1->Text, index, richTextBox1->Text->Length, RichTextBoxFinds::None);//������������� ������ Find
				richTextBox1->SelectionBackColor = Color::Red;//��������� ����� ������� ���� � �������� �����
				index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1;//���������� ���������� ���� int
			}
			int index2 = 0;//���������� � ������������� ���������� ���� int
			String^ temp2 = richTextBox2->Text;//���������� ���������� ���� String 
			richTextBox2->Text = "";//�������� richTextBox1
			richTextBox2->Text = temp2;//���������� ���������� ���� String
			while (index2 < richTextBox2->Text->LastIndexOf(textBox1->Text))//���� index2 ������ ����� richTextBox2
			{
				richTextBox2->Find(textBox1->Text, index2, richTextBox2->Text->Length, RichTextBoxFinds::None);//������������� ������ Find
				richTextBox2->SelectionBackColor = Color::Red;//��������� ����� ������� ���� � �������� �����
				index2 = richTextBox2->Text->IndexOf(textBox1->Text, index2) + 1;//���������� ���������� ���� int
			}
		}
		catch (int)//����� ������ ���� int 
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("����� ����", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("String is empty", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
			{
				MessageBox::Show("������ ������", "������");//�������� ��������� � �������� ������
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button5, � ������� ���������� ������ ����� � ������
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			if (textBox1->Text == "" || textBox2->Text == "")//��������� ���� textBox ����
			{
				throw 1;//����� ����������
			}
			String^ Find = textBox1->Text;//���������� � ������������� ���������� ���� String ������� �� textBox1
			String^ Rep = textBox2->Text;//���������� � ������������� ���������� ���� String ������� �� textBox2
			if ((Find->Length) * 2 == Rep->Length)//�������� �� ������ �����
			{
				String^ Part1;//���������� ���������� ���� String
				String^ Part2;//���������� ���������� ���� String
				for (int i = 0; i < Rep->Length / 2; i++)//���� ��� ������ �������� � Part1
				{
					Part1 += Rep[i];//���������� ������� �� Rep[i] � Part1
				}
				for (int i = Rep->Length / 2; i < Rep->Length; i++)//���� ��� ������ �������� � Part2
				{
					Part2 += Rep[i];//���������� ������� �� Rep[i] � Part2
				}
				if (Part1 == Part2)//���� Part1 = Part2
				{
					throw std::logic_error("");//����� ���������� underflow_error
				}
			}
			int index = 0;//���������� � ������������� ���������� ���� int
			String^ temp = richTextBox1->Text;//���������� ���������� ���� String 
			richTextBox1->Text = "";//�������� richTextBox1
			richTextBox1->Text = temp;//���������� ���������� ���� String
			while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))//���� index ������ ����� richTextBox2
			{
				richTextBox1->Find(textBox1->Text, index, richTextBox1->Text->Length, RichTextBoxFinds::None);//������������� ������ Find
				richTextBox1->SelectionBackColor = Color::Red;//��������� ����� ������� ���� � �������� �����
				index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1;//���������� ���������� ���� int
				richTextBox1->Focus();//��������� ������ �����
				richTextBox1->SelectedText = textBox2->Text;//������ ������ �� textBox2 � richTextBox1
			}
		}
		catch (int)//����� ������ ���� int 
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("����� ����", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("String is empty", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
			{
				MessageBox::Show("������ ������", "������");//�������� ��������� � �������� ������
			}
		}
		catch (std::logic_error e)//����� ������ ���� logic_error
		{
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("�������� �������", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("Error detected", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
			{
				MessageBox::Show("���������� ������", "������");//�������� ��������� � �������� ������
			}
		}
	}
	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� fontToolStripMenuItem, � ������� ���������� ����� ������ ������ 
	{
		FontDialog^ fd = gcnew FontDialog;//���������� ���� FondDialog
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK)//�������� ���� � ������� ������
		{
			richTextBox1->Font = fd->Font;//������������� ������ �� richTextBox1
			richTextBox2->Font = fd->Font;//������������� ������ �� richTextBox2
		}
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//���������� �������� ������� �����
	{
		HelpForm^ form = gcnew HelpForm(Language, Color);;//������� ����� ������� ����� ���� ������ MainForm ������������� � ;//������� ����� ������� ����� ���� ������ MainForm ������������� � ������������ ��������������������
		form->Show();//�������� �����
	}
};
}
