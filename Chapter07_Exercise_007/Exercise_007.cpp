// Exercise_007.cpp
#include <iostream>

const int Max = 5;

// function prototypes
double* fill_array(double* begin, double* end);
void show_array(double* begin, double* end); // don't change data
void revalue(double r, double* begin, double* end);

int main() {
	using namespace std;
	double properties[Max];
	double* p_arrayEnd = fill_array(properties, properties + Max);

	show_array(properties, p_arrayEnd);

	if (properties != p_arrayEnd) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, p_arrayEnd);
		show_array(properties, p_arrayEnd);
	}

	cout << "Done.\n";
	cin.get();
	cin.get();

	return 0;
}
double* fill_array(double* begin, double* end) {
	using namespace std;

	double temp;
	int number = 0;
	double* p_i;

	for (p_i = begin; p_i != end; p_i++) {
		cout << "Enter value #" << (p_i - begin + 1) << ": ";
		cin >> temp;

		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		} else if (temp < 0) // signal to terminate
			break;
		*p_i = temp;
	}
	return p_i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(double* begin, double* end) {
	using namespace std;
	int number = 0;
	for (const double* p_i = begin; p_i != end; p_i++) {
		cout << "Property #" << (p_i - begin + 1) << ": $";
		cout << *p_i << endl;
	}
}

// multiplies each element of ar[] by r
void revalue(double r, double* begin, double* end) {
	double* p_i = {};
	for (p_i = begin; p_i != end; p_i++)
		*p_i *= r;
}