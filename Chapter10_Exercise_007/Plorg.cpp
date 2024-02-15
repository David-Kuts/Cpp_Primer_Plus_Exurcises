#include <cstring>
#include "Plorg.h"

Plorg::Plorg(const char* n, int ci) {
	strcpy_s(name, MAX_LEN, n);
	this->ci = ci;
}
