// workermi.h
#pragma once

#include <string>
class Worker
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0;
	virtual void Set() = 0;
	virtual void Show() const = 0;
};


class SimpleWorker : public Worker {
public:
    SimpleWorker(const std::string & s = "No Name", long n = 0L) : Worker(s, n) {}
   
	virtual void Set() override {
		Worker::Set();
    }

    virtual void Show() const override {
		Worker::Show();
    }
};