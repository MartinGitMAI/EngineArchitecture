#pragma once

#include "Core.h"

namespace Cheesy
{
	class CHEESY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}


