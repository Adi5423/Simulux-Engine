#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Simulux {
	class SIMULUX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		SIMULUX_LOCAL static std::shared_ptr<spdlog::logger> s_CoreLogger;
		SIMULUX_LOCAL static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
