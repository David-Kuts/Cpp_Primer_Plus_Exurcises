// Exercise_009.cpp
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <algorithm>
#include <cstdlib>

int main() {
	constexpr int SIZE = 1000000;

	srand(time(0));

	std::vector<int> vi0;

	for (int i = 0; i < SIZE; i++) {
		vi0.push_back(rand());
	}

	std::vector<int> vi(vi0.begin(), vi0.end()); // What is better?

	std::list<int> li;
	li.insert(li.begin(), vi0.begin(), vi0.end()); // What is better?

	clock_t start = clock();
	std::sort(vi.begin(), vi.end());
	clock_t end = clock();
	std::cout << "Sorting vector: " << (double)(end - start) / CLOCKS_PER_SEC << " seconds.\n";

	start = clock();
	li.sort();
	end = clock();
	std::cout << "Sorting list: " << (double)(end - start) / CLOCKS_PER_SEC << " seconds.\n";

	li.assign(vi0.begin(), vi0.end());

	start = clock();
	std::copy(li.begin(), li.end(), vi.begin());
	std::sort(vi.begin(), vi.end());
	std::copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	std::cout << "Copying list to vector, sorting vector, and copying back: " << (double)(end - start) / CLOCKS_PER_SEC << " seconds.\n";


	return 0;
}