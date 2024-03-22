// queue.h
#pragma once
#include "workermi.h"

template<class T>
class QueueTp {
private:
	struct Node {
		T item;
		struct Node* next;
	};
	static constexpr int Q_SIZE = 10;
	Node* front;
	Node* rear;
	int items;
	const int qsize;

	QueueTp(const QueueTp& q);
	QueueTp& operator=(const QueueTp& q);
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();

	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const T& item);
	bool dequeue(T& item);
};

template <class T>
QueueTp<T>::QueueTp(int qs) : qsize(qs) {
	front = rear = nullptr;
	items = 0;
}

template <class T>
QueueTp<T>::~QueueTp() {
	Node* temp;

	while (front != nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <class T>
bool QueueTp<T>::isempty() const {
	return items == 0;
}

template <class T>
bool QueueTp<T>::isfull() const {
	return items == qsize;
}

template <class T>
int QueueTp<T>::queuecount() const {
	return items;
}

template <class T>
bool QueueTp<T>::enqueue(const T& item) {
	if (isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;

	if (front == nullptr) {
		front = add;
	} else {
		rear->next = add;
	}

	rear = add;

	return true;
}
template <class T>
bool QueueTp<T>::dequeue(T& item) {
	if (front == nullptr) {
		return false;
	}

	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;

	if (items == 0) {
		rear = NULL;
	}

	return true;
}