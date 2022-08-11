#pragma once
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HZ_API __declspec(dllexport)
	#else 
		#define HZ_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hazel only surpports windows
#endif // HZ_PLATFORM_WINDOWS
