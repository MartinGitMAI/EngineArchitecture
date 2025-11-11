#pragma once

#ifdef CHEESY_PLATFORM_WINDOWS

	#ifdef CHEESY_BUILD_DLL

			#define CHEESY_API __declspec(dllexport)
	
	#else

			#define CHEESY_API __declspec(dllimport)

	#endif // CHEESY_BUILD_DLL

#else

	#error Cheesy only supports Windows!

#endif