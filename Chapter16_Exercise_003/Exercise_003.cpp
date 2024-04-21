// Exercise_003
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <vector>

int main() {
	std::vector<std::string> s1, s2;
	std::string temp;

	std::ifstream inFile1("data1.txt");
	std::ifstream inFile2("data2.txt");

	while (inFile1 >> temp) {
		s1.push_back(temp);
	}

	while (inFile2 >> temp) {
		s2.push_back(temp);
	}

	std::set<std::string> A(s1.begin(), s1.end());
	std::set<std::string> B(s2.begin(), s2.end());

	std::ostream_iterator<std::string, char> out(std::cout, " ");

	std::cout << "Set A: ";
	copy(A.begin(), A.end(), out);
	std::cout << std::endl;

	std::cout << "Set B: ";
	copy(B.begin(), B.end(), out);
	std::cout << std::endl;

	std::cout << "Union of A and B:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;

	std::cout << "Intersection of A and B:\n";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;

	std::cout << "Difference of A and B:\n";
	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;
	std::set<std::string> C;

	std::cout << "Set C:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), std::insert_iterator<std::set<std::string> >(C, C.begin()));
	copy(C.begin(), C.end(), out);
	std::cout << std::endl;

	std::string s3("grungy");
	C.insert(s3);

	std::cout << "Set C after insertion:\n";
	copy(C.begin(), C.end(), out);
	std::cout << std::endl;

	std::cout << "Showing a range:\n";
	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
	std::cout << std::endl;

	return 0;
}