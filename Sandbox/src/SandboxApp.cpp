#include <Htpg.h>

class Sandbox : public Hatappang::Aplikasi {
public:
	Sandbox() {}
	~Sandbox() {}
};

Hatappang::Aplikasi* Hatappang::BuatAplikasi() {
	return new Sandbox();
}