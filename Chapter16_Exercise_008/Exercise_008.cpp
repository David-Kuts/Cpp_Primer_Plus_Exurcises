// Exercise_008.cpp
#include <iostream>
#include <set>
#include <string>
#include <algorithm>

int main() {
	std::set<std::string> matsFriends;
	std::set<std::string> patsFriends;

	std::cout << "Enter Matt's friends (type 'done' to finish):" << std::endl;
	std::string name;
	while (std::cin >> name && name != "done") {
		matsFriends.insert(name);
	}

	std::cout << "Matt's friends:" << std::endl;
	for (const auto& friendName : matsFriends) {
		std::cout << friendName << std::endl;
	}

	std::cout << "Enter Pat's friends (type 'done' to finish):" << std::endl;
	while (std::cin >> name && name != "done") {
		patsFriends.insert(name);
	}

	std::cout << "Pat's friends:" << std::endl;
	for (const auto& friendName : patsFriends) {
		std::cout << friendName << std::endl;
	}

	std::set<std::string> allFriends;

	std::set_union(matsFriends.begin(), matsFriends.end(),
					patsFriends.begin(), patsFriends.end(),
					std::inserter(allFriends, allFriends.begin()));

	std::cout << "Combined friends list:" << std::endl;
	for (const auto& friendName : allFriends) {
		std::cout << friendName << std::endl;
	}

	return 0;
}