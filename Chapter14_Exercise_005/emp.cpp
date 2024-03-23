// emp.cpp
#include <iostream>
#include "emp.h"

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) : fname(fn), lname(ln), job(j) {
}

void abstr_emp::ShowAll() const {
	std::cout << "First name: " << fname << ", Last name: " << lname << ", job title: " << job;
}

void abstr_emp::SetAll() {
	std::cout << "Enter first name: ";
	std::cin >> fname;
	std::cout << "Enter last name: ";
	std::cin >> lname;
	std::cout << "Enter job title: ";
	std::cin >> job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e) {
	os << std::endl;
	os << "First name: " << e.fname << ", Last name: " << e.lname << ", job title: " << e.job << std::endl;

	return os;
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_emp(fn, ln, j) {
}

void employee::ShowAll() const {
	std::cout << std::endl;
	abstr_emp::ShowAll();
}

void employee::SetAll() {
	abstr_emp::SetAll();
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) {
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {
}

manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.InChargeOf()) {
}

void manager::ShowAll() const {
	std::cout << std::endl;
	abstr_emp::ShowAll();
	std::cout << ", in charge of: " << inchargeof;
}

void manager::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Enter number of people in charge of: ";
	while(!(std::cin >> inchargeof)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		std::cout << "Invalid input. Please enter a number: ";
	}
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j),  reportsto(rpo) {
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e),  reportsto(rpo) {
}

fink::fink(const fink& e) : abstr_emp(e), reportsto(e.ReportsTo()) {
}

void fink::ShowAll() const {
	std::cout << std::endl;
	abstr_emp::ShowAll();
	std::cout << ", reports to: " << reportsto;
}

void fink::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Enter the person's reports to: ";
	std::getline(std::cin, reportsto);
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo) {
}

highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f) {
}

highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), manager(m), fink(m, rpo) {
}

highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {
}

void highfink::ShowAll() const {
	std::cout << std::endl;
	abstr_emp::ShowAll();
	std::cout << ", in charge of: " << InChargeOf();
	std::cout << ", reports to: " << ReportsTo();
}

void highfink::SetAll() {
	abstr_emp::SetAll();

	std::string tempReportsTo;

	std::cout << "Enter number of people in charge of: ";
	while(!(std::cin >> InChargeOf())) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		std::cout << "Invalid input. Please enter a number: ";
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter the person's reports to: ";
	std::getline(std::cin, ReportsTo());
}
