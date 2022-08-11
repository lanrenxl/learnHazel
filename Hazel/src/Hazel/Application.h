#pragma once

#include "core.h"

namespace Hazel
{
	class HZ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* CreateApplication();
}

