#pragma once

#ifdef HTPG_PLATFORM_WINDOWS

extern Hatappang::Aplikasi* Hatappang::BuatAplikasi();

int main(int argc, char** argv) {
	auto app = Hatappang::BuatAplikasi();
	app->Run();
	delete app;
}



#endif