#include "Start.h"

/*
The below code is taken from 
"https://social.msdn.microsoft.com/Forums/windows/en-US/a9529502-6304-4aa6-90ee-0757ab258d87/create-c-windows-forms-application-in-visual-studio-2017"
*/

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    TicTacToe::Start form;
    Application::Run(% form);
}