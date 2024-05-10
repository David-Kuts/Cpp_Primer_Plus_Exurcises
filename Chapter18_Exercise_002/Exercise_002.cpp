// Exercise_002.cpp
#include <iostream>
#include <string>

class Cpmv {
public:
	struct Info {
		std::string qcode;
		std::string zcode;
	};
private:
	Info* pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv) noexcept;
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv) noexcept;
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

Cpmv::Cpmv() : pi(new Info{ "", "" }) {
	std::cout << "Default constructor called.\n";
}

Cpmv::Cpmv(std::string q, std::string z) : pi(new Info{q, z}) {
	std::cout << "Constructor with parameters called.\n";
}

Cpmv::Cpmv(const Cpmv& cp) : pi(new Info{cp.pi->qcode, cp.pi->zcode}) {
	std::cout << "Copy constructor called.\n";
}

Cpmv::Cpmv(Cpmv&& mv) noexcept : pi(mv.pi) {
	mv.pi = nullptr;
	std::cout << "Move constructor called.\n";
}

Cpmv::~Cpmv() {
	delete pi;
	std::cout << "Destructor called.\n";
}

Cpmv& Cpmv::operator=(const Cpmv& cp) {
	if (this == &cp) {
		return *this;
	}

	delete pi;
	pi = new Info{ cp.pi->qcode, cp.pi->zcode };

	std::cout << "Copy assignment operator called.\n";

	return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv) noexcept {
	if (this == &mv) {
		return *this;
	}

	delete pi;
	pi = mv.pi;

	mv.pi = nullptr;
	std::cout << "Move assignment operator called.\n";

	return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const {
	return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}

void Cpmv::Display() const {
	if (pi) {
		std::cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << '\n';
	} else {
		std::cout << "Info is nullptr.\n";
	}
}

int main() {
	using namespace std;

	Cpmv obj1("Hello", "World");
	Cpmv obj2("Goodbye", "Everyone");

	Cpmv obj3 = obj1;

	Cpmv obj4 = std::move(obj2);

	obj3 = obj4;

	obj3 = std::move(obj4);

	Cpmv obj5 = obj1 + obj3;

	obj1.Display();
	obj3.Display();
	obj5.Display();

	return 0;
}