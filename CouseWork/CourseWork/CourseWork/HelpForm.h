#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(int x, int y)//коструктор принимающий несколько целочисленных параметров
		{
			InitializeComponent();//коструктор принимающий несколько целочисленных параметров
			this->Language = x;//инициализируем глобальную переменную Language
			this->Color = y;//инициализируем глобальную переменную Color
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(13, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(757, 493);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 518);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"HelpForm";
			this->Text = L"Help";
			this->Load += gcnew System::EventHandler(this, &HelpForm::HelpForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		int Color = 0;//декланируетс€ и инициализируетс€ глобальна€ переменна€ типа int дл€ смены цвета в программе
		int Language = 0;//декланируетс€ и инициализируетс€ глобальна€ переменна€ типа int дл€ смены €зыка в программе
	private: System::Void HelpForm_Load(System::Object^ sender, System::EventArgs^ e)//метот-обработчик событи€ загрузки оконной формы
	{
		if (Color == 0)//если Color = 0 => установка фонового цвета " нопочный серый"
		{
			this->BackColor = SystemColors::ButtonFace;//назначить фоновым цветом Ё“ќ… оконной формы ситемный цвет "кнопочный серый" 
		}
		if (Color == 1)//если Color = 1 => установка фонового цвета "—иний"
		{
			this->BackColor = Color::Blue;;//назначить фоновым цветом Ё“ќ… оконной формы цвет "—иний"
		}
		if (Color == 2)//если Color = 2 => установка фонового цвета "«еленый"
		{
			this->BackColor = Color::Green;//назначить фоновым цветом Ё“ќ… оконной формы цвет "«еленый"
		}
		if (Color == 3)//если Color = 3 => установка фонового цвета " расный"
		{
			this->BackColor = Color::Red;//назначить фоновым цветом Ё“ќ… оконной формы цвет " расный"
		}
		if (Language == 1)//если Language = 1 => установка белорусского €зыка
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpBy.txt");//создвние потока sr дл€ чтение HelpBy.txt 
			richTextBox1->Text = read->ReadToEnd();//добавить в richTextBox1 весь текст из HelpBy.txt
			read->Close();//закртыть поток read
		}
		if (Language == 2)//если Language = 2 => установка англиского €зыка
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpEn.txt");//создвние потока sr дл€ чтение HelpEn.txt 
			richTextBox1->Text = read->ReadToEnd();//добавить в richTextBox1 весь текст из HelpBy.txt
			read->Close();//закртыть поток read
		}
		if (Language == 3)//если Language = 3 => установка русского €зыка
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpRu.txt");//создвние потока sr дл€ чтение HelpRu.txt 
			richTextBox1->Text = read->ReadToEnd();//добавить в richTextBox1 весь текст из HelpBy.txt
			read->Close();//закртыть поток read
		}

	}
	};
}
