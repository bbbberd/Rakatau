#pragma once
#include "Core.h"

namespace Hatappang {
	class HTPG_API Aplikasi
	{
	public:
		Aplikasi();
		virtual ~Aplikasi();

		void Run();
	};
	
	Aplikasi* BuatAplikasi();
}

