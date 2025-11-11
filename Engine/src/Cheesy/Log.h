#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cheesy
{

	class CHEESY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return _coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return _clientLogger; }


	private:
		static std::shared_ptr<spdlog::logger> _coreLogger;
		static std::shared_ptr<spdlog::logger> _clientLogger;
	};
}

//Core logging macros
#define CHEESY_CORE_TRACE(...) ::Cheesy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CHEESY_CORE_INFO(...) ::Cheesy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CHEESY_CORE_WARN(...) ::Cheesy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CHEESY_CORE_ERROR(...) ::Cheesy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CHEESY_CORE_FATAL(...) ::Cheesy::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client logging macros
#define CHEESY_TRACE(...) ::Cheesy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CHEESY_INFO(...) ::Cheesy::Log::GetClientLogger()->info(__VA_ARGS__)
#define CHEESY_WARN(...) ::Cheesy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CHEESY_ERROR(...) ::Cheesy::Log::GetClientLogger()->error(__VA_ARGS__)
#define CHEESY_FATAL(...) ::Cheesy::Log::GetClientLogger()->fatal(__VA_ARGS__)