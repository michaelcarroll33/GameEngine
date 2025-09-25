#include "Core/Application.h"

int main(int argc, char** argv) {
	Application app;

	app.Init();
	app.Run();
	app.Shudown();

	return 0;
}