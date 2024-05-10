// Exercise_003.cpp
#include <iostream>

long double sum_values() {
	return 0.0L;
}

template<typename T, typename... Args>
long double sum_values(T value, Args... args) {
	return static_cast<long double> (value) + sum_values(args...);
}



int main() {
	std::cout << sum_values(1, 2.2, 33.3, -4.4);

	return 0;
}