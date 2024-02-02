// Exercise_009.cpp
#include <iostream>

using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int size);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int size);

int main() {
	int class_size;

	cout << "Enter class size : ";
	cin >> class_size;

	while (cin.get() != '\n') {
		continue;
	}

	student* ptr_stu = new student[class_size];

	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);
	cout << "Done\n";

	delete[] ptr_stu;
	return 0;
}

int getinfo(student pa[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		std::cout << "Enter info for student #" << i + 1 << ": " << std::endl;
		std::cout << "Name (empty line to stop): ";
		std::cin.getline(pa[i].fullname, SLEN);

		if (pa[i].fullname[0] == '\0') {
			break;
		}

		std::cout << "Hooby: ";
		cin.getline(pa[i].hobby, SLEN);
		std::cout << "OOP Level: ";
		std::cin >> pa[i].ooplevel;
		cin.ignore(10000, '\n'); 
	}

	return i;
}

void display1(student st) {
	std::cout << st.fullname << '\t' << st.hobby << '\t' << st.ooplevel << std::endl;
}

void display2(const student* ps) {
	std::cout << ps->fullname << '\t' << ps->hobby << '\t' << ps->ooplevel << std::endl;
}

void display3(const student pa[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << pa[i].fullname << '\t' << pa[i].hobby << '\t' << pa[i].ooplevel << std::endl;
	}
}
