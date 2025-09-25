#include "EditorApp.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	
	EditorApp app;
	app.Init();
	app.Run();
	app.Shutdown();
	
	return 0;
}