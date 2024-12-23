#pragma once

#ifdef SX_PLATFORM_WINDOWS

extern Simulux::Application* Simulux::CreateApplication();

int main(int argc , char** argv)
{
	Simulux::Log::Init();
	SX_CORE_WARN("Initialized Log!");
	int a = 5;
	SX_INFO("Hello! Var={0} " , a);

	//printf("Simulux Engine :) \n");
	auto app = Simulux::CreateApplication();
	app->Run();
	delete app;
}

#endif