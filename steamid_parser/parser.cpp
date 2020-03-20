#include <Windows.h>
#include "parser.h"
#pragma comment( lib, "user32.lib" )

using namespace System;
using namespace System::Windows::Forms;
using namespace steamid_parser;

[STAThread]

INT WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, INT ) {
	Application::Run( gcnew parser() );
	return TRUE;
}