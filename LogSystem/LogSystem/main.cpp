#include"Log.h"
#include<Windows.h>


int WINAPI WinMain(HINSTANCE Instance, HINSTANCE PrevInstance, PSTR CmdLine, int CmdShow) {

	LogSystem::WindowLog Log;
	Log.Push(1, TEXT("HELLLLo"));
	Log.Push(1, TEXT("HELLLLo"));
	Log.Push(1, TEXT("HELLLLo"));
	Log.Push(1, TEXT("HELLLLo"));
	Log.Push(1, TEXT("HELLLLo"));
	Log.Push(1, TEXT("HELLLLo"));
	Log.Refresh();
	MessageBoxW(NULL,L"SDS", L"ERROR", MB_ICONERROR);
}