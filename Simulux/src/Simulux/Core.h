#pragma once

#ifdef SX_PLATFORM_WINDOWS
	#ifdef SX_BUILD_DLL
		#define SIMULUX_API __declspec(dllexport)
	#else
		#define SIMULUX_API __declspec(dllimport)
	#endif
#else 
	#error Simulux only support Windows!!
#endif

#define SIMULUX_LOCAL

//Core log macros 
#define SX_CORE_TRACE(...)		::Simulux::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SX_CORE_INFO(...)		::Simulux::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SX_CORE_WARN(...)		::Simulux::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SX_CORE_ERROR(...)		::Simulux::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SX_CORE_FATAL(...)		::Simulux::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client log macros 
#define SX_TRACE(...)			::Simulux::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SX_INFO(...)			::Simulux::Log::GetClientLogger()->info(__VA_ARGS__)
#define SX_WARN(...)			::Simulux::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SX_ERROR(...)			::Simulux::Log::GetClientLogger()->error(__VA_ARGS__)
#define SX_FATAL(...)			::Simulux::Log::GetClientLogger()->fatal(__VA_ARGS__)
