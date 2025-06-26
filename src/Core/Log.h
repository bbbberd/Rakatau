#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace Rakatau {
	class RKT_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define RKT_CORE_TRACE(...)   ::Rakatau::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RKT_CORE_INFO(...)    ::Rakatau::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RKT_CORE_WARN(...)    ::Rakatau::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RKT_CORE_ERROR(...)   ::Rakatau::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RKT_CORE_FATAL(...)   ::Rakatau::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define RKT_TRACE(...)   ::Rakatau::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RKT_INFO(...)    ::Rakatau::Log::GetClientLogger()->info(__VA_ARGS__)
#define RKT_WARN(...)    ::Rakatau::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RKT_ERROR(...)   ::Rakatau::Log::GetClientLogger()->error(__VA_ARGS__)
#define RKT_FATAL(...)   ::Rakatau::Log::GetClientLogger()->fatal(__VA_ARGS__)