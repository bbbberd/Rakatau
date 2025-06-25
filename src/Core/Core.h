#pragma once

#ifdef HTPG_PLATFORM_WINDOWS
	#ifdef HTPG_BUILD_DLL
		#define HTPG_API __declspec(dllexport)
	#else
		#define HTPG_API __declspec(dllimport)
	#endif
#else
	#error Hatappang engine only supports Windows! (Hanya support windows)
#endif