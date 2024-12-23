#pragma once

#include "Core.h"

namespace Simulux {

	class SIMULUX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	//To be defined in CLIENT 
	Application* CreateApplication();

}