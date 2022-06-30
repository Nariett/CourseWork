#pragma once
#include <stdexcept>//подключение библиотеки stdexcept для работы с исключениями
#include <string.h>//подключение библиотеки string.h для работы с строками
#include <fstream>//подключение библиотеки fstream дляx чтения файлов
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для RegForm
	/// </summary>
	public ref class RegForm : public System::Windows::Forms::Form
	{
	public:
		RegForm(int x, int y)//коструктор принимающий несколько целочисленных параметров
		{
			InitializeComponent();//метод InitializeComponent()
			this->Color = y;//инициализируем глобальную переменную LLanguage
			this->Language = x;//инициализируем глобальную переменную Color
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(74, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// RegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 205);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"RegForm";
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &RegForm::RegForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int Color = 0;//декларация и инициализация глобальной переменной типа int для смены языка в программе
	int Language = 0;//декларация и инициализация глобальной переменной типа int для смены цвета фона в программе
	String^ Message;//декларация глобальной строки
	String^ Message2;// декларация глобальной строки
	String^ range_high;//декларация глобальной строки
	String^ range_low;//декларация глобальной строки
	String^ range_same;//декларация глобальной строки
	String^ error;//декларация глобальной строки
	String^ symbol;//декларация глобальной строки
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//обработчик нажатия на button1, в котором проходит регистрация пользовтеля в приложении
	{
		try//начало области кода, в которой отслеживаются ошибки
		{
			String^ Login = textBox1->Text;//декларация и инициализация строки значениями из TextBox1 которые ввел пользователь
			String^ Password = textBox2->Text;//декларация и инициализация строки значениями из TextBox2 которые ввел пользователь
			if (Login->Length > 15 | Password->Length > 15)//проверка Login и Password если те больше 15 символов
			{
				throw std::overflow_error("");//вызов исключения underflow_error
			}
			if (Login->Length < 3 | Password->Length < 3)//проверка Login и Password если те меньше 3 символов
			{
				throw std::underflow_error("");//вызов исключения underflow_error
			}
			for (int i = 0; i < Login->Length; i++)//проверка Login если в нем содержаться запрещенные символы
			{
				if (Login[i] == '$' | Login[i] == '&' | Login[i] == '#')//сравнения ячеек строки с символами
				{
					throw 1;//вызов исключения int
					break;//выход из цикла
				}
			}
			for (int i = 0; i < Password->Length; i++)//проверка Password если в нем содержаться запрещенные символы
			{
				if (Password[i] == '$' | Password[i] == '&' | Password[i] == '#')//сравнения ячеек строки с символами
				{
					throw 1;//вызов исключения int
					break;//выход из цикла
				}
			}
			if (Login == Password)//проверка если Login == Password 
			{
				throw 0.1;//вызов исключения
			}
			int lattice = 0;//декларация и инициализация переменной типа int
			bool pass;//декларация переменной типа bool
			StreamReader^ check = gcnew System::IO::StreamReader("Data.txt");//создние потока для чтения check из файла Data.txt
			{
				while(!check ->EndOfStream)//если поток не дошел до конца, то выполнят условие 
				{
					String^ Text = check->ReadLine();//декларация и инициализация строковой переменной с заполнение строкой которую читает программа 
					if (Text == nullptr)//если строка Text пустая
					{
						check->Close();//закрытие потока check
						break;//выход из цикла 
					}
					for (int i = 0; i < Text->Length; i++)//создание цикла для чтения посимвольная строки Text
					{
						if (Text[i] == '#')//сравнение ячейки Text с индексом i если они равна #
						{
							String^ Log;//декларация строки строковой переменно Log
							lattice = i;//располжение # в строке
							for (int j = 0; j < lattice; j++)//в цикле заполняем строку Log значениями из Text
							{
								Log += Text[j];//Заполнение строки 
							}
							if (Log == Login)//сравнение Log(Логина из строки в файле) с Login(Логин который ввел пользователь
							{
								pass = true;//присвоение переменной значения true
								break;//выход из цикла
							}
						}
					}
				}
			}
			check->Close();//закрытие потока check
			if (pass == true)//если text == true то логин занят
			{
				if (Language == 1)//если Language = 1 => MessageBox на белорусском языке
				{
					MessageBox::Show("Дадзены лагiн ужо заняты.", "Памылка");//показать сообщение с описание ошибки
				}
				if (Language == 2)//если Language = 1 => MessageBox на англиском языке
				{
					MessageBox::Show("This login is already occupied.", "Error");//показать сообщение с описание ошибки
				}
				if (Language == 3)//если Language = 1 => MessageBox на русском языке
				{
					MessageBox::Show("Данный логин уже занят.", "Ошибка");//показать сообщение с описание ошибки
				}
			}
			else//иначе
			{
				StreamWriter^ write = File::AppendText("Data.txt");//создание txt файла, если его не нашла программа 
				write->WriteLine(Login + "#" + Password);//занесение логина и пароля с разделяющим знаком #
				MessageBox::Show(Message, Message2);//сообщение о том что файл занесен
				write->Close();//закрытие потока write
				RegForm::Close();//закрытие формы RegForm
			}
		}
		catch (System::IO::FileNotFoundException^ e)//отлов ошибки типа FileNotFoundException
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
		catch (int)//отлов ошибки типа int
		{
			MessageBox::Show(symbol, Message2);//показать сообщение с описание ошибки
		}
		catch (std::overflow_error e)//отлов ошибки типа overflow_error
		{
			MessageBox::Show(range_high, Message2);//показать сообщение с описание ошибки
		}
		catch (std::underflow_error e)//отлов ошибки типа underflow_error
		{
			MessageBox::Show(range_low, Message2);//показать сообщение с описание ошибки
		}
		catch (double) //отлов ошибки типа double
		{
			MessageBox::Show(range_same, error);//показать сообщение с описание ошибки
		}
	}
	private: System::Void RegForm_Load(System::Object^ sender, System::EventArgs^ e)//метот-обработчик события загрузки оконной формы
	{
		if (Language == 1)//если Language = 1 => установка белорусского языка
		{
			symbol = "Уведзены забароненыя сімвалы";//заполение текстом строки на белорусском языке
			error = "Памылка";//заполение текстом строки на белорусском языке
			range_same = "Лагiн i пароль падобныя. Паутарыце спробу.";//заполение текстом строки на белорусском языке
			Message = "Рэгистрация пройдзена";//заполение текстом строки на белорусском языке
			Message2 = "Рэгистрация";//заполение текстом строки на белорусском языке
			range_high = "Лагiн або пароль больш за 15 сiмвалау";//заполение текстом строки на белорусском языке
			range_low = "Лагiн або пароль менш за 15 сiмвалау";//заполение текстом строки на белорусском языке
			this->button1->Text = "Зарэгистравацца";//заполение текстом кнопки button1 на белорусском языке
			this->label1->Text = "Лагiн";//заполение текстом надписи label1 на белорусском языке
			this->label2->Text = "Пароль";//заполение текстом надписи label2 на белорусском языке
		}
		if (Language == 2)//если Language = 2 => установка англиского языка
		{
			symbol = "Forbidden characters entered";//заполениетекстом строки на англиском языке
			error = "Error";//заполениетекстом строки на англиском языке
			range_same = "Login and password are similar. Try again.";//заполение текстом строки на англиском языке
			Message = "Registration Complited";//заполение текстом строки на англиском языке
			Message2 = "Registration";//заполение текстом строки на англиском языке
			range_high = "Login or password  more that 15 character.";//заполение текстом строки на англиском языке
			range_low = "Login or password less that 3 character.";//заполение текстом строки на англиском языке
			this->button1->Text = "Register";//заполение текстом кнопки button1 на англиском языке
			this->label1->Text = "Login";//заполение текстом надписи label1 на англиском языке
			this->label2->Text = "Password";//заполение текстом надписи label2 на англиском языке
		}
		if (Language == 3)//если Language = 3 => установка русского языка
		{
			symbol = "Введены запрещенные символы";//заполение текстом строки на русском языке
			error = "Ошибка";//заполение текстом строки на русском языке
			range_same = "Логин и пароль схожи. Повторите попытку.";//заполение текстом строки на русском языке
			Message = "Регистрация пройдена";//заполение текстом строки на русском языке
			Message2 = "Регистрация";//заполение текстом строки на русском языке
			range_high = "Логин или пароль больше 15 символов";//заполение текстом строки на русском языке
			range_low = "Логин или пароль меньше 3 символов";//заполение текстом строки на русском языке
			this->button1->Text = "Зарегистрироваться";//заполение текстом кнопки button1 на русском языке
			this->label1->Text = "Логин";//заполение текстом надписи label1 на русском языке
			this->label2->Text = "Пароль";//заполение текстом надписи label2 на русском языке
		}
		if (Color == 0)//если  Color = 0 => установка фонового цвета "Кнопочный серый"
		{
			this->BackColor = SystemColors::ButtonFace;//назначить фоновым цветом ЭТОЙ оконной формы ситемный цвет "кнопочный серый" 
			this->label1->ForeColor = Color::Black;//назначить цвет надписи Label1 "Черный цвет"
			this->label2->ForeColor = Color::Black;//назначить цвет надписи Label2 "Черный цвет"

		}
		if (Color == 1) //если  Color = 1 => установка фонового цвета "Синий"
		{
			this->BackColor = Color::Blue;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Синий"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		}
		if (Color == 2) //если  Color = 2 => установка фонового цвета "Зеленый"
		{
			this->BackColor = Color::Green;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Зеленый"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		}
		if (Color == 3) //если  Color = 3 => установка фонового цвета "Красный"
		{
			this->BackColor = Color::Red;//назначить фоновым цветом ЭТОЙ оконной формы цвет "Красный"
			this->label1->ForeColor = Color::White;//назначить цвет надписи Label1 "Белый"
			this->label2->ForeColor = Color::White;//назначить цвет надписи Label2 "Белый"
		}
	}
};
}
