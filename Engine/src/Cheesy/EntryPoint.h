#pragma once

#ifdef CHEESY_PLATFORM_WINDOWS

extern Cheesy::Application* Cheesy::CreateApplication();

int main(int argc, char** argv)
{
	printf("Cheesy Engine\n");
	auto app = Cheesy::CreateApplication();
	app->Run();
	delete app;
}

#else

#error Cheesy only supports Windows!

#endif