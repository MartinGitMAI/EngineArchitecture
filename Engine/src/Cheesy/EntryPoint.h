#pragma once

#ifdef CHEESY_PLATFORM_WINDOWS

extern Cheesy::Application* Cheesy::CreateApplication();

int main(int argc, char** argv)
{
	Cheesy::Log::Init();

	CHEESY_CORE_WARN("Initiatlised Log!");
	CHEESY_INFO("Hello!");
	int a = 10;
	CHEESY_ERROR("Demo int! Var={0} Int={1}", a, 2);

	auto app = Cheesy::CreateApplication();
	app->Run();
	delete app;
}

#else

#error Cheesy only supports Windows!

#endif