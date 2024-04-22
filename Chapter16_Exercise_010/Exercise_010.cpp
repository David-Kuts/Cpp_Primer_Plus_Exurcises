// Exercise_010.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review {
	std::string title;
	int rating;
	double price;
};

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2) {
	return r1->title < r2->title;
}

bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2) {
	return r1->rating < r2->rating;
}

bool comparePrice(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2) {
	return r1->price < r2->price;
}

bool FillReview(std::shared_ptr<Review>& rr);

void ShowReview(const std::shared_ptr<Review>& rr) {
	std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}

int main() {
	std::vector <std::shared_ptr<Review>> books;

	std::shared_ptr<Review> temp;

	while (FillReview(temp)) {
		books.push_back(temp);
	}

	if (books.empty()) {
		std::cout << "No entries. Bye.\n";
		return 0;
	}

	std::cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
	for (const auto& item : books) {
		ShowReview(item);
	}

	sort(books.begin(), books.end());
	std::cout << "Sorted by title:\nRating\tBook\n";
	for (const auto& item : books) {
		ShowReview(item);
	}

	sort(books.begin(), books.end(), worseThan);
	std::cout << "Sorted by rating:\nRating\tBook\n";
	for (const auto& item : books) {
		ShowReview(item);
	}

	random_shuffle(books.begin(), books.end()); //  std::default_random_engine re;  // Use std::shuffle with a random engine
	std::cout << "After shuffling:\nRating\tBook\n";
	for (const auto& item : books) {
		ShowReview(item);
	}

	std::cout << "Bye.\n";
	return 0;
}

bool FillReview(std::shared_ptr<Review>& rr) {
	rr = std::shared_ptr<Review>(new Review()); // or rr = std::make_shared<Review>(); ?
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr->title);
	if (rr->title == "quit") {
		return false;
	}
	std::cout << "Enter book rating: ";
	std::cin >> rr->rating;
	std::cout << "Enter book price: ";
	std::cin >> rr->price;
	std::cin.get();
	return true;
}
