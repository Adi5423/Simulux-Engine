#include <Simulux.h>

class Sandbox :public Simulux::Application
{
public:
	Sandbox() //Constructor 
	{

	}

	~Sandbox() //Destructor 
	{
	
	}
};

Simulux::Application* Simulux::CreateApplication()
{
	return new Sandbox();
}