#include <Cheesy.h>

class Sandbox : public Cheesy::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cheesy::Application* Cheesy::CreateApplication()
{
	return new Sandbox();
}