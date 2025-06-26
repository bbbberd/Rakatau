#include <Rkt.h>

class Sandbox : public Rakatau::Aplikasi {
public:
	Sandbox() {}
	~Sandbox() {}
};

Rakatau::Aplikasi* Rakatau::BuatAplikasi() {
	return new Sandbox();
}