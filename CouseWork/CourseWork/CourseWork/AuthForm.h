#pragma once
#include <string.h>//connecting the string.h library to work with strings
#include <fstream>//connecting the fstream library to read files
#include "MainForm.h"//connecting the window form MainForm.h
#include "RegForm.h"//connecting the window form RegForm.h

namespace CourseWork
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	public ref class AuthForm : public System::Windows::Forms::Form
	{
	public:
		AuthForm(void)
		{
			InitializeComponent();
		}

	protected:
		~AuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ bYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rUToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(106, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AuthForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->settingsToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(384, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backgroundToolStripMenuItem,
					this->languageToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// backgroundToolStripMenuItem
			// 
			this->backgroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->blueToolStripMenuItem,
					this->greenToolStripMenuItem, this->redToolStripMenuItem, this->defaultToolStripMenuItem
			});
			this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			this->backgroundToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->backgroundToolStripMenuItem->Text = L"Background";
			// 
			// blueToolStripMenuItem
			// 
			this->blueToolStripMenuItem->Name = L"blueToolStripMenuItem";
			this->blueToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->blueToolStripMenuItem->Text = L"Blue";
			this->blueToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::blueToolStripMenuItem_Click);
			// 
			// greenToolStripMenuItem
			// 
			this->greenToolStripMenuItem->Name = L"greenToolStripMenuItem";
			this->greenToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->greenToolStripMenuItem->Text = L"Green";
			this->greenToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::greenToolStripMenuItem_Click);
			// 
			// redToolStripMenuItem
			// 
			this->redToolStripMenuItem->Name = L"redToolStripMenuItem";
			this->redToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->redToolStripMenuItem->Text = L"Red";
			this->redToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::redToolStripMenuItem_Click);
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::defaultToolStripMenuItem_Click);
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
			this->bYToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::bYToolStripMenuItem_Click);
			// 
			// eNToolStripMenuItem
			// 
			this->eNToolStripMenuItem->Name = L"eNToolStripMenuItem";
			this->eNToolStripMenuItem->Size = System::Drawing::Size(89, 22);
			this->eNToolStripMenuItem->Text = L"EN";
			this->eNToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::eNToolStripMenuItem_Click);
			// 
			// rUToolStripMenuItem
			// 
			this->rUToolStripMenuItem->Name = L"rUToolStripMenuItem";
			this->rUToolStripMenuItem->Size = System::Drawing::Size(89, 22);
			this->rUToolStripMenuItem->Text = L"RU";
			this->rUToolStripMenuItem->Click += gcnew System::EventHandler(this, &AuthForm::rUToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(103, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(106, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AuthForm::button2_Click);
			// 
			// AuthForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 279);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AuthForm";
			this->Text = L"Authentication";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int Language = 2;//declaring and initializing a global variable of type int to change the language in the program
	int Color = 0;//declaring and initializing a global variable of type int to change the color in the program
	private: System::Void blueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//click handler for blueToolStripMenuItem , in which the background color changes to blue
	{
		this->BackColor = Color::Blue;//set the background color of THIS window form to "Blue"
		this->label1->ForeColor=Color::White;//assign the color of the Label1 "White"
		this->label2->ForeColor = Color::White;//assign the color of the Label2 "White"
		Color = 1;//assigning a value to Color
	}
	private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//click handler for greenToolStripMenuItem , in which the background color changes to green
	{
		this->BackColor = Color::Green;//set the background color of THIS window form to "Green"
		this->label1->ForeColor = Color::White;//assign the color of the Label1 "White"
		this->label2->ForeColor = Color::White;//assign the color of the Label2 "White"
		Color = 2;//assigning a value to Color
	}
	private: System::Void redToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//click handler for redToolStripMenuItem , in which the background color changes to red
	{
		this->BackColor = Color::Red;//set the background color of THIS window form to "Red"
		this->label1->ForeColor = Color::White;//assign the color of the Label1 "White"
		this->label2->ForeColor = Color::White;//assign the color of the Label2 "White"
		Color = 3;//assigning a value to Color
	}
	private: System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//click handler for  defaultToolStripMenuItem , in which the background color is changed standard color
	{
		this->BackColor = SystemColors::ButtonFace;//set the background color of THIS window form to the system color "Button grey"
		this->label1->ForeColor = Color::Black;//assign the color of the Label1 "Black"
		this->label2->ForeColor = Color::Black;//assign the color of the Label2 "Black"
		Color = 0;//assigning a value to Color
	}
	private: System::Void bYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //���������� ������� �� bYToolStripMenuItem , � ������� ���������� ������� ����� �� ����������� 
	{
		this->settingsToolStripMenuItem->Text = L"�����������";//��������� ������� ���� settingsToolStripMenuItem �� ����������� �����
		this->languageToolStripMenuItem->Text = L"����";//��������� ������� ���� languageToolStripMenuItem �� ����������� �����
		this->rUToolStripMenuItem->Text = L"���";//��������� ������� ���� rUToolStripMenuItem �� ����������� �����
		this->bYToolStripMenuItem->Text = L"���";//��������� �������  ���� bYToolStripMenuItem �� ����������� �����
		this->eNToolStripMenuItem->Text = L"����";//��������� �������  ���� eNToolStripMenuItem �� ����������� �����
		this->backgroundToolStripMenuItem->Text = L"����i ���";//��������� ������� ���� backgroundToolStripMenuItem �� ����������� �����
		this->greenToolStripMenuItem->Text = L"�����";//��������� ������� ���� greenToolStripMenuItem �� ����������� �����
		this->blueToolStripMenuItem->Text = L"�i�i";//��������� ������� ���� blueToolStripMenuItem �� ����������� �����
		this->redToolStripMenuItem->Text = L"�������";//��������� ������� ���� redToolStripMenuItem �� ����������� �����
		this->defaultToolStripMenuItem->Text = L"����������";//��������� ������� ���� defaultToolStripMenuItem �� ����������� �����
		this->label1->Text = "���i�";//��������� ������� ������� label1 �� ����������� �����
		this->label2->Text = "������";//��������� ������� ������� label2 �� ����������� �����
		this->button1->Text = "��������i��";//��������� ������� ������� �� ������ button1 �� ����������� �����
		this->button2->Text = "�����i���������";//��������� ������� ������� �� ������ button2 �� ����������� �����
		Language = 1;//���������� �������� � Language
	}
	private: System::Void eNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)// ���������� ������� �� eNToolStripMenuItem, � ������� ���������� ������� ����� �� ���������
	{
		this->settingsToolStripMenuItem->Text = L"Settings";//��������� ������� ���� settingsToolStripMenuItem �� ��������� �����
		this->languageToolStripMenuItem->Text = L"Language";//��������� ������� ���� languageToolStripMenuItem �� ��������� �����
		this->rUToolStripMenuItem->Text = L"RU";//��������� ������� ���� rUToolStripMenuItem �� ��������� �����
		this->bYToolStripMenuItem->Text = L"BY";//��������� �������  ���� bYToolStripMenuItem �� ��������� �����
		this->eNToolStripMenuItem->Text = L"EN";//��������� �������  ���� eNToolStripMenuItem �� ��������� �����
		this->backgroundToolStripMenuItem->Text = L"Background";//��������� ������� ���� backgroundToolStripMenuItem �� ��������� �����
		this->greenToolStripMenuItem->Text = L"Green";//��������� ������� ���� greenToolStripMenuItem �� ��������� �����
		this->blueToolStripMenuItem->Text = L"Blue";//��������� ������� ���� blueToolStripMenuItem �� ��������� �����
		this->redToolStripMenuItem->Text = L"Red";//��������� ������� ���� redToolStripMenuItem �� ��������� �����
		this->defaultToolStripMenuItem->Text = L"Default";//��������� ������� ���� defaultToolStripMenuItem �� ��������� �����
		this->label1->Text = "Login";//��������� ������� ������� label1 �� ��������� �����
		this->label2->Text = "Password";//��������� ������� ������� label2 �� ��������� �����
		this->button1->Text = "Confirm";//��������� ������� ������� �� ������ button1 �� ��������� �����
		this->button2->Text = "Register";//��������� ������� ������� �� ������ button2 �� ��������� �����
		Language = 2;//���������� �������� � Language
	}
	private: System::Void rUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)// ���������� ������� �� rUToolStripMenuItem, � ������� ���������� ������� ����� �� �������
	{
		this->settingsToolStripMenuItem->Text = L"���������";//��������� ������� ���� settingsToolStripMenuItem �� ������� �����
		this->languageToolStripMenuItem->Text = L"����";//��������� ������� ���� languageToolStripMenuItem �� ������� �����
		this->rUToolStripMenuItem->Text = L"���";//��������� ������� ���� rUToolStripMenuItem �� ������� �����
		this->bYToolStripMenuItem->Text = L"���";//��������� �������  ���� bYToolStripMenuItem �� ������� �����
		this->eNToolStripMenuItem->Text = L"����";//��������� �������  ���� eNToolStripMenuItem �� ������� �����
		this->backgroundToolStripMenuItem->Text = L"������ ���";//��������� ������� ���� backgroundToolStripMenuItem �� ������� �����
		this->greenToolStripMenuItem->Text = L"�������";//��������� ������� ���� greenToolStripMenuItem �� ������� �����
		this->blueToolStripMenuItem->Text = L"�����";//��������� ������� ���� blueToolStripMenuItem �� ������� �����
		this->redToolStripMenuItem->Text = L"�������";//��������� ������� ���� redToolStripMenuItem �� ������� �����
		this->defaultToolStripMenuItem->Text = L"�����������";//��������� ������� ���� defaultToolStripMenuItem �� ������� �����
		this->label1->Text = "�����";//��������� ������� ������� label1 �� ������� �����
		this->label2->Text = "������";//��������� ������� ������� label2 �� ������� �����
		this->button1->Text = "�����������";//��������� ������� ������� �� ������ button1 �� ������� �����
		this->button2->Text = "������������������";//��������� ������� ������� �� ������ button2 �� ������� �����
		Language = 3;//���������� �������� � Language
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button1, � ������� �������� ������������ ������������
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			int pass = 0;//���������� � ������������� ���������� ���� int
			StreamReader^ sr = gcnew System::IO::StreamReader("Data.txt");//�������� ������ sr ��� ������ Data.txt 
			String^ Login = this->textBox1->Text;//���������� � ������������� ���������� ���� String �������� �� textBox1
			String^ Password = this->textBox2->Text;//���������� � ������������� ���������� ���� String �������� �� textBox2
			String^ FullPass = gcnew String(Login + "#" + Password);//������������� � ���������������� FullPass ����� ���������� Login � Password
			while (!sr->EndOfStream)//��������� ���� ���� �� ����� ��������� ����� ������ sw
			{
				String^ Text = sr->ReadLine();//������������� � ���������������� Text ����� ������ ������ �� ������ ��������� Data.txt
				if (Text == FullPass)// ���� Text = Fullpass
				{
					pass++;//���������� �������� pass �� 1
					break;//���������� ����
				}
			}
			if (pass == 1)//���� pass = 1 
			{
				MainForm^ form = gcnew MainForm(Language, Color);//������� ����� ������� ����� ���� ������ MainForm ������������� � ��������������� �����������
				AuthForm::Hide();//������ AuthForm
				form->Show();//�������� ����� MainForm
			}
			else//�����
			{
				if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
				{
					MessageBox::Show("�������� ������i���� ���i� �i ������. \n��������� ������!", "�������");//�������� ��������� � �������� ������
				}
				if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
				{
					MessageBox::Show("Invalid logs or password entered. \nTry again!", "Error");//�������� ��������� � �������� ������
				}
				if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
				{
					MessageBox::Show("������ �������� ����� ��� ������. \n��������� �������!", "������");//�������� ��������� � �������� ������
				}
			}
		}
		catch (System::IO::FileNotFoundException ^ e)//����� ������ ���� FileNotFoundException
		{
	
			if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
			{
				MessageBox::Show("���� ������� ������, ��������������!", "�������");//�������� ��������� � �������� ������
			}
			if (Language == 2)//���� Language = 2 => MessageBox �� ��������� �����
			{
				MessageBox::Show("Password database is empty, register!", "Error");//�������� ��������� � �������� ������
			}
			if (Language == 3)//���� Language = 3 => MessageBox �� ������� �����
			{
				MessageBox::Show("���� ������� �����, �����������������!", "������");//�������� ��������� � �������� ������
			}
			std::ofstream error("Data.txt");//�������� txt ����� � ������ Data.txt
			error.close();//�������� ������ error
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//���������� ������� �� button2, � ������� �������� ����������� ������������
		RegForm^ form = gcnew RegForm(Language, Color);//������� ����� ������� ����� ���� ������ RegForm ������������� � �������������� �����������
		form->Show();//�������� ����� RegForm
	}
};
}
