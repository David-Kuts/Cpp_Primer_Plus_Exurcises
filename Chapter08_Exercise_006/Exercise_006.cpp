// Exercise_006.cpp
#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int size) {
	T max = arr[0];

	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}

template <> char* maxn(char* ch1[], int size) {
	char* max = ch1[0];

	for (int i = 0; i < size; i++) {
		if (strlen(max) < strlen(ch1[i])) {
			max = ch1[i];
		}
	}

	return max;
}

int main() {
	int numbers1[] = { 2, 43, 23, 54, 0, 31 };
	double numbers2[] = { 2.1, 43.3, 23.5, 54.6 };

	char str1[] = "Hello";
	char str2[] = "This is the longest string";
	char str3[] = "How about this one? ";
	char str4[] = "Hey!";

	char* characters[] = { str1, str2, str3, str4 };

	std::cout << maxn(numbers1, sizeof(numbers1) / sizeof(numbers1[0])) << std::endl;
	std::cout << maxn(numbers2, sizeof(numbers2) / sizeof(numbers2[0])) << std::endl;
	std::cout << maxn(characters, sizeof(characters) / sizeof(characters[0])) << std::endl;

	return 0;
}