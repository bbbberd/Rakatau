#pragma once

#ifdef RKT_PLATFORM_WINDOWS
	#ifdef RKT_BUILD_DLL
		#define RKT_API __declspec(dllexport)
	#else
		#define RKT_API __declspec(dllimport)
	#endif
#else
	#error Rakatau engine only supports Windows! (Hanya support windows)
#endif