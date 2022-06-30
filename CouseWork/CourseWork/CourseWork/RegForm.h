#pragma once
#include <stdexcept>//����������� ���������� stdexcept ��� ������ � ������������
#include <string.h>//����������� ���������� string.h ��� ������ � ��������
#include <fstream>//����������� ���������� fstream ���x ������ ������
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� RegForm
	/// </summary>
	public ref class RegForm : public System::Windows::Forms::Form
	{
	public:
		RegForm(int x, int y)//���������� ����������� ��������� ������������� ����������
		{
			InitializeComponent();//����� InitializeComponent()
			this->Color = y;//�������������� ���������� ���������� LLanguage
			this->Language = x;//�������������� ���������� ���������� Color
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	int Color = 0;//���������� � ������������� ���������� ���������� ���� int ��� ����� ����� � ���������
	int Language = 0;//���������� � ������������� ���������� ���������� ���� int ��� ����� ����� ���� � ���������
	String^ Message;//���������� ���������� ������
	String^ Message2;// ���������� ���������� ������
	String^ range_high;//���������� ���������� ������
	String^ range_low;//���������� ���������� ������
	String^ range_same;//���������� ���������� ������
	String^ error;//���������� ���������� ������
	String^ symbol;//���������� ���������� ������
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//���������� ������� �� button1, � ������� �������� ����������� ����������� � ����������
	{
		try//������ ������� ����, � ������� ������������� ������
		{
			String^ Login = textBox1->Text;//���������� � ������������� ������ ���������� �� TextBox1 ������� ���� ������������
			String^ Password = textBox2->Text;//���������� � ������������� ������ ���������� �� TextBox2 ������� ���� ������������
			if (Login->Length > 15 | Password->Length > 15)//�������� Login � Password ���� �� ������ 15 ��������
			{
				throw std::overflow_error("");//����� ���������� underflow_error
			}
			if (Login->Length < 3 | Password->Length < 3)//�������� Login � Password ���� �� ������ 3 ��������
			{
				throw std::underflow_error("");//����� ���������� underflow_error
			}
			for (int i = 0; i < Login->Length; i++)//�������� Login ���� � ��� ����������� ����������� �������
			{
				if (Login[i] == '$' | Login[i] == '&' | Login[i] == '#')//��������� ����� ������ � ���������
				{
					throw 1;//����� ���������� int
					break;//����� �� �����
				}
			}
			for (int i = 0; i < Password->Length; i++)//�������� Password ���� � ��� ����������� ����������� �������
			{
				if (Password[i] == '$' | Password[i] == '&' | Password[i] == '#')//��������� ����� ������ � ���������
				{
					throw 1;//����� ���������� int
					break;//����� �� �����
				}
			}
			if (Login == Password)//�������� ���� Login == Password 
			{
				throw 0.1;//����� ����������
			}
			int lattice = 0;//���������� � ������������� ���������� ���� int
			bool pass;//���������� ���������� ���� bool
			StreamReader^ check = gcnew System::IO::StreamReader("Data.txt");//������� ������ ��� ������ check �� ����� Data.txt
			{
				while(!check ->EndOfStream)//���� ����� �� ����� �� �����, �� �������� ������� 
				{
					String^ Text = check->ReadLine();//���������� � ������������� ��������� ���������� � ���������� ������� ������� ������ ��������� 
					if (Text == nullptr)//���� ������ Text ������
					{
						check->Close();//�������� ������ check
						break;//����� �� ����� 
					}
					for (int i = 0; i < Text->Length; i++)//�������� ����� ��� ������ ������������ ������ Text
					{
						if (Text[i] == '#')//��������� ������ Text � �������� i ���� ��� ����� #
						{
							String^ Log;//���������� ������ ��������� ��������� Log
							lattice = i;//����������� # � ������
							for (int j = 0; j < lattice; j++)//� ����� ��������� ������ Log ���������� �� Text
							{
								Log += Text[j];//���������� ������ 
							}
							if (Log == Login)//��������� Log(������ �� ������ � �����) � Login(����� ������� ���� ������������
							{
								pass = true;//���������� ���������� �������� true
								break;//����� �� �����
							}
						}
					}
				}
			}
			check->Close();//�������� ������ check
			if (pass == true)//���� text == true �� ����� �����
			{
				if (Language == 1)//���� Language = 1 => MessageBox �� ����������� �����
				{
					MessageBox::Show("������� ���i� ��� ������.", "�������");//�������� ��������� � �������� ������
				}
				if (Language == 2)//���� Language = 1 => MessageBox �� ��������� �����
				{
					MessageBox::Show("This login is already occupied.", "Error");//�������� ��������� � �������� ������
				}
				if (Language == 3)//���� Language = 1 => MessageBox �� ������� �����
				{
					MessageBox::Show("������ ����� ��� �����.", "������");//�������� ��������� � �������� ������
				}
			}
			else//�����
			{
				StreamWriter^ write = File::AppendText("Data.txt");//�������� txt �����, ���� ��� �� ����� ��������� 
				write->WriteLine(Login + "#" + Password);//��������� ������ � ������ � ����������� ������ #
				MessageBox::Show(Message, Message2);//��������� � ��� ��� ���� �������
				write->Close();//�������� ������ write
				RegForm::Close();//�������� ����� RegForm
			}
		}
		catch (System::IO::FileNotFoundException^ e)//����� ������ ���� FileNotFoundException
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
		catch (int)//����� ������ ���� int
		{
			MessageBox::Show(symbol, Message2);//�������� ��������� � �������� ������
		}
		catch (std::overflow_error e)//����� ������ ���� overflow_error
		{
			MessageBox::Show(range_high, Message2);//�������� ��������� � �������� ������
		}
		catch (std::underflow_error e)//����� ������ ���� underflow_error
		{
			MessageBox::Show(range_low, Message2);//�������� ��������� � �������� ������
		}
		catch (double) //����� ������ ���� double
		{
			MessageBox::Show(range_same, error);//�������� ��������� � �������� ������
		}
	}
	private: System::Void RegForm_Load(System::Object^ sender, System::EventArgs^ e)//�����-���������� ������� �������� ������� �����
	{
		if (Language == 1)//���� Language = 1 => ��������� ������������ �����
		{
			symbol = "�������� ����������� ������";//��������� ������� ������ �� ����������� �����
			error = "�������";//��������� ������� ������ �� ����������� �����
			range_same = "���i� i ������ ��������. ��������� ������.";//��������� ������� ������ �� ����������� �����
			Message = "����������� ���������";//��������� ������� ������ �� ����������� �����
			Message2 = "�����������";//��������� ������� ������ �� ����������� �����
			range_high = "���i� ��� ������ ����� �� 15 �i������";//��������� ������� ������ �� ����������� �����
			range_low = "���i� ��� ������ ���� �� 15 �i������";//��������� ������� ������ �� ����������� �����
			this->button1->Text = "���������������";//��������� ������� ������ button1 �� ����������� �����
			this->label1->Text = "���i�";//��������� ������� ������� label1 �� ����������� �����
			this->label2->Text = "������";//��������� ������� ������� label2 �� ����������� �����
		}
		if (Language == 2)//���� Language = 2 => ��������� ���������� �����
		{
			symbol = "Forbidden characters entered";//���������������� ������ �� ��������� �����
			error = "Error";//���������������� ������ �� ��������� �����
			range_same = "Login and password are similar. Try again.";//��������� ������� ������ �� ��������� �����
			Message = "Registration Complited";//��������� ������� ������ �� ��������� �����
			Message2 = "Registration";//��������� ������� ������ �� ��������� �����
			range_high = "Login or password  more that 15 character.";//��������� ������� ������ �� ��������� �����
			range_low = "Login or password less that 3 character.";//��������� ������� ������ �� ��������� �����
			this->button1->Text = "Register";//��������� ������� ������ button1 �� ��������� �����
			this->label1->Text = "Login";//��������� ������� ������� label1 �� ��������� �����
			this->label2->Text = "Password";//��������� ������� ������� label2 �� ��������� �����
		}
		if (Language == 3)//���� Language = 3 => ��������� �������� �����
		{
			symbol = "������� ����������� �������";//��������� ������� ������ �� ������� �����
			error = "������";//��������� ������� ������ �� ������� �����
			range_same = "����� � ������ �����. ��������� �������.";//��������� ������� ������ �� ������� �����
			Message = "����������� ��������";//��������� ������� ������ �� ������� �����
			Message2 = "�����������";//��������� ������� ������ �� ������� �����
			range_high = "����� ��� ������ ������ 15 ��������";//��������� ������� ������ �� ������� �����
			range_low = "����� ��� ������ ������ 3 ��������";//��������� ������� ������ �� ������� �����
			this->button1->Text = "������������������";//��������� ������� ������ button1 �� ������� �����
			this->label1->Text = "�����";//��������� ������� ������� label1 �� ������� �����
			this->label2->Text = "������";//��������� ������� ������� label2 �� ������� �����
		}
		if (Color == 0)//����  Color = 0 => ��������� �������� ����� "��������� �����"
		{
			this->BackColor = SystemColors::ButtonFace;//��������� ������� ������ ���� ������� ����� �������� ���� "��������� �����" 
			this->label1->ForeColor = Color::Black;//��������� ���� ������� Label1 "������ ����"
			this->label2->ForeColor = Color::Black;//��������� ���� ������� Label2 "������ ����"

		}
		if (Color == 1) //����  Color = 1 => ��������� �������� ����� "�����"
		{
			this->BackColor = Color::Blue;//��������� ������� ������ ���� ������� ����� ���� "�����"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		}
		if (Color == 2) //����  Color = 2 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Green;//��������� ������� ������ ���� ������� ����� ���� "�������"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		}
		if (Color == 3) //����  Color = 3 => ��������� �������� ����� "�������"
		{
			this->BackColor = Color::Red;//��������� ������� ������ ���� ������� ����� ���� "�������"
			this->label1->ForeColor = Color::White;//��������� ���� ������� Label1 "�����"
			this->label2->ForeColor = Color::White;//��������� ���� ������� Label2 "�����"
		}
	}
};
}
