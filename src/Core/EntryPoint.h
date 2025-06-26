#pragma once

#ifdef RKT_PLATFORM_WINDOWS

extern Rakatau::Aplikasi* Rakatau::BuatAplikasi();

int main(int argc, char** argv) {
	Rakatau::Log::Init();
	RKT_CORE_WARN("Menginisialisasi Log! (Initialized log!)");
	int a{ 5 };
	RKT_INFO("Halo Var={0}", a);
	auto app = Rakatau::BuatAplikasi();
	app->Run();
	delete app;
}
#endif