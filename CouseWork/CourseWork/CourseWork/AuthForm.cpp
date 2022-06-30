#include "AuthForm.h"//Connecting the header file AuthForm.h
#include "MainForm.h"//Connecting the header file MainForm.h
#include "RegForm.h"//Connecting the header file RegForm.h
#include "HelpForm.h"//Connecting the header file HelpForm.h
#include <Windows.h>//Подключение библиоткеи Windows.h для работы оконных форм

using namespace CourseWork;//Connecting the Windows.h library for window forms to work

[STAThreadAttribute]//Specifying the Thread Attribute of a Single-Threaded Container

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)//Calling a function to start a windowed application that takes 4 parameters and returns one integer
{
	Application::EnableVisualStyles();//The static method of an aggregation class sets the availability of visual styles
	Application::SetCompatibleTextRenderingDefault(false);//The statistical method of the statistical class sets the uniform display of text fonts
	Application::Run(gcnew AuthForm);//Calling the Run method to launch the AuthForm window form
	return 0;//Return from value function 0
}

