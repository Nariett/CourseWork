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
	private: System::Void bYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//bYToolStripMenuItem click handler, in which the language is changed to Belarusian
	{
		this->settingsToolStripMenuItem->Text = L"Наладжванне";//filling in the menu text settingsToolStripMenuItem in Belarusian
		this->languageToolStripMenuItem->Text = L"Мова";//filling in the menu text languageToolStripMenuItem in Belarusian
		this->rUToolStripMenuItem->Text = L"РУС";//filling in the menu text rUToolStripMenuItem in Belarusian
		this->bYToolStripMenuItem->Text = L"БЕЛ";//filling in the menu text bYToolStripMenuItem in Belarusian
		this->eNToolStripMenuItem->Text = L"АНГЛ";//filling in the menu text eNToolStripMenuItem in Belarusian
		this->backgroundToolStripMenuItem->Text = L"Заднi фон";//filling in the menu text backgroundToolStripMenuItem in Belarusian
		this->greenToolStripMenuItem->Text = L"Зялёны";//filling in the menu text greenToolStripMenuItem in Belarusian
		this->blueToolStripMenuItem->Text = L"Сiнi";//filling in the menu text blueToolStripMenuItem in Belarusian
		this->redToolStripMenuItem->Text = L"Чырвоны";//filling in the menu text redToolStripMenuItem in Belarusian
		this->defaultToolStripMenuItem->Text = L"Стандартны";//filling in the menu text defaultToolStripMenuItem in Belarusian
		this->label1->Text = "Лагiн";//filling in the text of the inscription label1 in Belarusian
		this->label2->Text = "Пароль";//filling in the text of the inscription label2 in Belarusian
		this->button1->Text = "Пацвердзiць";//filling in the text of the button bitton1 in Belarusian
		this->button2->Text = "Зарэгiстравацца";////filling in the text of the button bitton2 in Belarusian
		Language = 1;//assigning values ​​in Language
	}
	private: System::Void eNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)// eNToolStripMenuItem click handler, in which the language is changed to English
	{
		this->settingsToolStripMenuItem->Text = L"Settings";//filling in the menu text settingsToolStripMenuItem in English
		this->languageToolStripMenuItem->Text = L"Language";//filling in the menu text languageToolStripMenuItem in English
		this->rUToolStripMenuItem->Text = L"RU";//filling in the menu text rUToolStripMenuItem in English
		this->bYToolStripMenuItem->Text = L"BY";//filling in the menu text bYToolStripMenuItem in English
		this->eNToolStripMenuItem->Text = L"EN";//filling in the menu text eNToolStripMenuItem in English
		this->backgroundToolStripMenuItem->Text = L"Background";//filling in the menu text backgroundToolStripMenuItem in English
		this->greenToolStripMenuItem->Text = L"Green";//filling in the menu text greenToolStripMenuItem in English
		this->blueToolStripMenuItem->Text = L"Blue";//filling in the menu text blueToolStripMenuItem in English
		this->redToolStripMenuItem->Text = L"Red";//filling in the menu text redToolStripMenuItem in English
		this->defaultToolStripMenuItem->Text = L"Default";//filling in the menu text defaultToolStripMenuItem in English
		this->label1->Text = "Login";//filling in the text of the inscription label1 in English
		this->label2->Text = "Password";//filling in the text of the inscription label2 in English
		this->button1->Text = "Confirm";//filling in the text of the button bitton1 in English
		this->button2->Text = "Register";//filling in the text of the button bitton2 in English
		Language = 2;//assigning values ​​in Language
	}
	private: System::Void rUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//handler for clicking on rUToolStripMenuItem, in which the language changes to Russian
	{
		this->settingsToolStripMenuItem->Text = L"Настройки";//filling in the menu text settingsToolStripMenuItem in Russian
		this->languageToolStripMenuItem->Text = L"Язык";//filling in the menu text languageToolStripMenuItem in Russian
		this->rUToolStripMenuItem->Text = L"РУС";//filling in the menu text rUToolStripMenuItem in Russian
		this->bYToolStripMenuItem->Text = L"БЕЛ";//filling in the menu text bYToolStripMenuItem in Russian
		this->eNToolStripMenuItem->Text = L"АНГЛ";//filling in the menu text eNToolStripMenuItem in Russian
		this->backgroundToolStripMenuItem->Text = L"Задний фон";//filling in the menu text backgroundToolStripMenuItem in Russian
		this->greenToolStripMenuItem->Text = L"Зеленый";//filling in the menu text greenToolStripMenuItem in Russian
		this->blueToolStripMenuItem->Text = L"Синий";//filling in the menu text blueToolStripMenuItem in Russian
		this->redToolStripMenuItem->Text = L"Красный";//filling in the menu text redToolStripMenuItem in Russian
		this->defaultToolStripMenuItem->Text = L"Стандартный";//filling in the menu text defaultToolStripMenuItem in Russian
		this->label1->Text = "Логин";//filling in the text of the inscription label1 in Russian
		this->label2->Text = "Пароль";//filling in the text of the inscription label2 in Russian
		this->button1->Text = "Подтвердить";//filling in the text of the button bitton1 in Russian
		this->button2->Text = "Зарегистрироваться";//filling in the text of the button bitton1 in Russian
		Language = 3;//assigning values ​​in Language
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//button1 click handler, in which the user is authenticated
	{
		try//beginning of code area where errors are tracked
		{
			int pass = 0;//declaration and initialization of a variable of type int
			StreamReader^ sr = gcnew System::IO::StreamReader("Data.txt");//create a stream sr for reading Data.txt
			String^ Login = this->textBox1->Text;//declaration and initialization of a variable of type String of value from textBox1
			String^ Password = this->textBox2->Text;//declaration and initialization of a variable of type String of value from textBox2
			String^ FullPass = gcnew String(Login + "#" + Password);//declares and initializes FullPass by connecting Login and Password
			while (!sr->EndOfStream)//loop until the end of the stream is reached sw
			{
				String^ Text = sr->ReadLine();//declares and initializes Text by writing the text from the document string Data.txt
				if (Text == FullPass)// if Text = Fullpass
				{
					pass++;//increase pass value by 1
					break;//stop the loop
				}
			}
			if (pass == 1)
			{
				MainForm^ form = gcnew MainForm(Language, Color);//create a new window form of the MainForm class type with a constructor with integer parameters
				AuthForm::Hide();//hide AuthForm
				form->Show();//show MainForm
			}
			else
			{
				if (Language == 1)//if Language = 1 => MessageBox in Belarusian
				{
					MessageBox::Show("Уведзены няправiльны лагiн цi пароль. \nПаутарыце спробу!", "Памылка");//show message with error description
				}
				if (Language == 2)//if Language = 2 => MessageBox in English
				{
					MessageBox::Show("Invalid logs or password entered. \nTry again!", "Error");//show message with error description
				}
				if (Language == 3)//если Language = 3 => MessageBox in Russian
				{
					MessageBox::Show("Введен неверный логин или пароль. \nПовторите попытку!", "Ошибка");//show message with error description
				}
			}
		}
		catch (System::IO::FileNotFoundException ^ e)//catching an error of type FileNotFoundException
		{
	
			if (Language == 1)//if Language = 1 => MessageBox in Belarusian
			{
				MessageBox::Show("База пароляў пустая, зарэгіструйцеся!", "Памылка");//show message with error description
			}
			if (Language == 2)//if Language = 2 => MessageBox in English
			{
				MessageBox::Show("Password database is empty, register!", "Error");//show message with error description
			}
			if (Language == 3)//если Language = 3 => MessageBox in Russian
			{
				MessageBox::Show("База паролей пуста, зарегистрируйтесь!", "Ошибка");//show message with error description
			}
			std::ofstream error("Data.txt");//create a txt file named Data.txt
			error.close();//closing the stream error
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//click handler for button2, in which the user registers
	{
		RegForm^ form = gcnew RegForm(Language, Color);//create a new window form of the RegForm class type with a constructor with integer parameters
		form->Show();//show RegForm
	}
};
}
