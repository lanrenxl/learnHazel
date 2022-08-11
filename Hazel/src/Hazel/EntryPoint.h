#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int args, char* argv)
{
	printf("engine start\n");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#else
	#error Hazel only surpports windows
#endif // !HZ_PLATFORM_WINDOWS
