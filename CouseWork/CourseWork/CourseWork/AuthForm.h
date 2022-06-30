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
	private: System::Void bYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //обработчик нажатия на bYToolStripMenuItem , в котором происходит измение языка на белорусский 
	{
		this->settingsToolStripMenuItem->Text = L"Наладжванне";//заполение текстом меню settingsToolStripMenuItem на белорусском языке
		this->languageToolStripMenuItem->Text = L"Мова";//заполение текстом меню languageToolStripMenuItem на белорусском языке
		this->rUToolStripMenuItem->Text = L"РУС";//заполение текстом меню rUToolStripMenuItem на белорусском языке
		this->bYToolStripMenuItem->Text = L"БЕЛ";//заполение текстом  меню bYToolStripMenuItem на белорусском языке
		this->eNToolStripMenuItem->Text = L"АНГЛ";//заполение текстом  меню eNToolStripMenuItem на белорусском языке
		this->backgroundToolStripMenuItem->Text = L"Заднi фон";//заполение текстом меню backgroundToolStripMenuItem на белорусском языке
		this->greenToolStripMenuItem->Text = L"Зялёны";//заполение текстом меню greenToolStripMenuItem на белорусском языке
		this->blueToolStripMenuItem->Text = L"Сiнi";//заполение текстом меню blueToolStripMenuItem на белорусском языке
		this->redToolStripMenuItem->Text = L"Чырвоны";//заполение текстом меню redToolStripMenuItem на белорусском языке
		this->defaultToolStripMenuItem->Text = L"Стандартны";//заполение текстом меню defaultToolStripMenuItem на белорусском языке
		this->label1->Text = "Лагiн";//заполение текстом надписи label1 на белорусском языке
		this->label2->Text = "Пароль";//заполение текстом надписи label2 на белорусском языке
		this->button1->Text = "Пацвердзiць";//заполение текстом надписи на кнопке button1 на белорусском языке
		this->button2->Text = "Зарэгiстравацца";//заполение текстом надписи на кнопке button2 на белорусском языке
		Language = 1;//присвоение значений в Language
	}
	private: System::Void eNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)// обработчик нажатия на eNToolStripMenuItem, в котором происходит измение языка на англиский
	{
		this->settingsToolStripMenuItem->Text = L"Settings";//заполение текстом меню settingsToolStripMenuItem на англиском языке
		this->languageToolStripMenuItem->Text = L"Language";//заполение текстом меню languageToolStripMenuItem на англиском языке
		this->rUToolStripMenuItem->Text = L"RU";//заполение текстом меню rUToolStripMenuItem на англиском языке
		this->bYToolStripMenuItem->Text = L"BY";//заполение текстом  меню bYToolStripMenuItem на англиском языке
		this->eNToolStripMenuItem->Text = L"EN";//заполение текстом  меню eNToolStripMenuItem на англиском языке
		this->backgroundToolStripMenuItem->Text = L"Background";//заполение текстом меню backgroundToolStripMenuItem на англиском языке
		this->greenToolStripMenuItem->Text = L"Green";//заполение текстом меню greenToolStripMenuItem на англиском языке
		this->blueToolStripMenuItem->Text = L"Blue";//заполение текстом меню blueToolStripMenuItem на англиском языке
		this->redToolStripMenuItem->Text = L"Red";//заполение текстом меню redToolStripMenuItem на англиском языке
		this->defaultToolStripMenuItem->Text = L"Default";//заполение текстом меню defaultToolStripMenuItem на англиском языке
		this->label1->Text = "Login";//заполение текстом надписи label1 на англиском языке
		this->label2->Text = "Password";//заполение текстом надписи label2 на англиском языке
		this->button1->Text = "Confirm";//заполение текстом надписи на кнопке button1 на англиском языке
		this->button2->Text = "Register";//заполение текстом надписи на кнопке button2 на англиском языке
		Language = 2;//присвоение значений в Language
	}
	private: System::Void rUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)// обработчик нажатия на rUToolStripMenuItem, в котором происходит измение языка на русский
	{
		this->settingsToolStripMenuItem->Text = L"Настройки";//заполение текстом меню settingsToolStripMenuItem на русском языке
		this->languageToolStripMenuItem->Text = L"Язык";//заполение текстом меню languageToolStripMenuItem на русском языке
		this->rUToolStripMenuItem->Text = L"РУС";//заполение текстом меню rUToolStripMenuItem на русском языке
		this->bYToolStripMenuItem->Text = L"БЕЛ";//заполение текстом  меню bYToolStripMenuItem на русском языке
		this->eNToolStripMenuItem->Text = L"АНГЛ";//заполение текстом  меню eNToolStripMenuItem на русском языке
		this->backgroundToolStripMenuItem->Text = L"Задний фон";//заполение текстом меню backgroundToolStripMenuItem на русском языке
		this->greenToolStripMenuItem->Text = L"Зеленый";//заполение текстом меню greenToolStripMenuItem на русском языке
		this->blueToolStripMenuItem->Text = L"Синий";//заполение текстом меню blueToolStripMenuItem на русском языке
		this->redToolStripMenuItem->Text = L"Красный";//заполение текстом меню redToolStripMenuItem на русском языке
		this->defaultToolStripMenuItem->Text = L"Стандартный";//заполение текстом меню defaultToolStripMenuItem на русском языке
		this->label1->Text = "Логин";//заполение текстом надписи label1 на русском языке
		this->label2->Text = "Пароль";//заполение текстом надписи label2 на русском языке
		this->button1->Text = "Подтвердить";//заполение текстом надписи на кнопке button1 на русском языке
		this->button2->Text = "Зарегистрироваться";//заполение текстом надписи на кнопке button2 на русском языке
		Language = 3;//присвоение значений в Language
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button1, в котором проходит аунтификация пользователя
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			int pass = 0;//дикларация и инициализация переменной типа int
			StreamReader^ sr = gcnew System::IO::StreamReader("Data.txt");//создвние потока sr для чтение Data.txt 
			String^ Login = this->textBox1->Text;//дикларация и инициализация переменной типа String значения из textBox1
			String^ Password = this->textBox2->Text;//дикларация и инициализация переменной типа String значения из textBox2
			String^ FullPass = gcnew String(Login + "#" + Password);//декланируется и инициализируется FullPass путем соединения Login и Password
			while (!sr->EndOfStream)//выполнять цикл пока не будет достигнут конец потока sw
			{
				String^ Text = sr->ReadLine();//декланируется и инициализируется Text путем записи текста из строки документа Data.txt
				if (Text == FullPass)// если Text = Fullpass
				{
					pass++;//увеличение значения pass на 1
					break;//прекратить цикл
				}
			}
			if (pass == 1)//если pass = 1 
			{
				MainForm^ form = gcnew MainForm(Language, Color);//создать новую оконную форму типа класса MainForm конструктором с целочисленнными параметрами
				AuthForm::Hide();//скрыть AuthForm
				form->Show();//показать форму MainForm
			}
			else//иначе
			{
				if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
				{
					MessageBox::Show("Уведзены няправiльны лагiн цi пароль. \nПаутарыце спробу!", "Памылка");//показать сообщение с описание ошибки
				}
				if (Language == 2)//если Language = 2 => MessageBox на англиском языке
				{
					MessageBox::Show("Invalid logs or password entered. \nTry again!", "Error");//показать сообщение с описание ошибки
				}
				if (Language == 3)//если Language = 3 => MessageBox на русском языке
				{
					MessageBox::Show("Введен неверный логин или пароль. \nПовторите попытку!", "Ошибка");//показать сообщение с описание ошибки
				}
			}
		}
		catch (System::IO::FileNotFoundException ^ e)//отлов ошибки типа FileNotFoundException
		{
	
			if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
			{
				MessageBox::Show("База пароляў пустая, зарэгіструйцеся!", "Памылка");//показать сообщение с описание ошибки
			}
			if (Language == 2)//если Language = 2 => MessageBox на англиском языке
			{
				MessageBox::Show("Password database is empty, register!", "Error");//показать сообщение с описание ошибки
			}
			if (Language == 3)//если Language = 3 => MessageBox на русском языке
			{
				MessageBox::Show("База паролей пуста, зарегистрируйтесь!", "Ошибка");//показать сообщение с описание ошибки
			}
			std::ofstream error("Data.txt");//создание txt файла с именем Data.txt
			error.close();//закрытие потока error
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//обработчик нажатия на button2, в котором проходит регистрация пользователя
		RegForm^ form = gcnew RegForm(Language, Color);//создать новую оконную форму типа класса RegForm конструктором с целочисленными параметрами
		form->Show();//показать форму RegForm
	}
};
}
