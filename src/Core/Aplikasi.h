#pragma once
#include "Core.h"

namespace Rakatau {
	class RKT_API Aplikasi
	{
	public:
		Aplikasi();
		virtual ~Aplikasi();

		void Run();
	};
	
	Aplikasi* BuatAplikasi();
}