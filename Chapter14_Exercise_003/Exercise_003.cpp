// Exercise_003
#include "queue.h"
#include <iostream>
//#include <string>

int main() {
	QueueTp<Worker*> queue(5);

	Worker* workerPtr = nullptr;
	char choice;

	while (true) {
		std::cout << "Enter the worker's type (a to add, q to quit): ";
		std::cin >> choice;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (choice == 'q') {
			break;
		} else if (choice == 'a') {
			workerPtr = new SimpleWorker;
			workerPtr->Set();
			queue.enqueue(workerPtr);
		} else {
			std::cout << "Invalid choice. Please enter 's' for simple worker or 'q' to quit.\n";
		}
	}

	std::cout << "\nHere is your staff:\n";

	while (!queue.isempty()) {
		queue.dequeue(workerPtr);
		workerPtr->Show();
		delete workerPtr;
	}

	std::cout << "Bye.\n";
	return 0;
}