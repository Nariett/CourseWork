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
	/// Сводка для HelpForm
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
		/// Освободить все используемые ресурсы.
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
		int Color = 0;//declaring and initializing a global variable of type int to change the color in the program
		int Language = 0;//declaring and initializing a global variable of type int to change the language in the program
	private: System::Void HelpForm_Load(System::Object^ sender, System::EventArgs^ e)//windows form event handler method
	{
		if (Color == 0)//if Color = 0 => set background color to "button grey"
		{
			this->BackColor = SystemColors::ButtonFace;//set the background color of this windows form to "button grey"
		}
		if (Color == 1)//if Color = 1 => set background color to blue
		{
			this->BackColor = Color::Blue;//set the background color of this windows form to blue 
		}
		if (Color == 2)//if Color = 2 => set background color to green
		{
			this->BackColor = Color::Green;//set the background color of this windows form to green
		}
		if (Color == 3)//if Color = 3 => set background color to red
		{
			this->BackColor = Color::Red;//set the background color of this windows form to red 
		}
		if (Language == 1)//if Language = 1 => MessageBox in Belarusian
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpBy.txt");//create stream sr for reading HelpBy.txt 
			richTextBox1->Text = read->ReadToEnd();//add all text from HelpBy.txt to richTextBox1 
			read->Close();//close stream read
		}
		if (Language == 2)//if Language = 2 => MessageBox in English
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpEn.txt");;//create stream sr for reading HelpBy.txt 
			richTextBox1->Text = read->ReadToEnd();//add all text from HelpBy.txt to richTextBox1 
			read->Close();//close stream read
		}
		if (Language == 3)//если Language = 3 => MessageBox in Russian
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpRu.txt");;//create stream sr for reading HelpBy.txt
			richTextBox1->Text = read->ReadToEnd();//add all text from HelpBy.txt to richTextBox1 
			read->Close();//close stream read
		}

	}
	};
}
