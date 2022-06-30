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
	/// ������ ��� HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(int x, int y)//���������� ����������� ��������� ������������� ����������
		{
			InitializeComponent();//���������� ����������� ��������� ������������� ����������
			this->Language = x;//�������������� ���������� ���������� Language
			this->Color = y;//�������������� ���������� ���������� Color
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		int Color = 0;//������������� � ���������������� ���������� ���������� ���� int ��� ����� ����� � ���������
		int Language = 0;//������������� � ���������������� ���������� ���������� ���� int ��� ����� ����� � ���������
	private: System::Void HelpForm_Load(System::Object^ sender, System::EventArgs^ e)//�����-���������� ������� �������� ������� �����
	{
		if (Color == 0)//���� Color = 0 => ��������� �������� ����� "��������� �����"
		{
			this->BackColor = SystemColors::ButtonFace;//��������� ������� ������ ���� ������� ����� �������� ���� "��������� �����" 
		}
		if (Color == 1)//���� Color = 1 => ��������� �������� ����� "�����"
		{
			this->BackColor = Color::Blue;;//��������� ������� ������ ���� ������� ����� ���� "�����"
		}
		if (Color == 2)//���� Color = 2 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Green;//��������� ������� ������ ���� ������� ����� ���� "�������"
		}
		if (Color == 3)//���� Color = 3 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Red;//��������� ������� ������ ���� ������� ����� ���� "�������"
		}
		if (Language == 1)//���� Language = 1 => ��������� ������������ �����
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpBy.txt");//�������� ������ sr ��� ������ HelpBy.txt 
			richTextBox1->Text = read->ReadToEnd();//�������� � richTextBox1 ���� ����� �� HelpBy.txt
			read->Close();//�������� ����� read
		}
		if (Language == 2)//���� Language = 2 => ��������� ���������� �����
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpEn.txt");//�������� ������ sr ��� ������ HelpEn.txt 
			richTextBox1->Text = read->ReadToEnd();//�������� � richTextBox1 ���� ����� �� HelpBy.txt
			read->Close();//�������� ����� read
		}
		if (Language == 3)//���� Language = 3 => ��������� �������� �����
		{
			StreamReader^ read = gcnew System::IO::StreamReader("HelpRu.txt");//�������� ������ sr ��� ������ HelpRu.txt 
			richTextBox1->Text = read->ReadToEnd();//�������� � richTextBox1 ���� ����� �� HelpBy.txt
			read->Close();//�������� ����� read
		}

	}
	};
}
