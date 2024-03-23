// emp.h
#pragma once

#include <string>

class abstr_emp {
public:
	abstr_emp() = default;
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j);
	virtual ~abstr_emp() = default; // virtual base class

	virtual void ShowAll() const; // labels and shows all data
	virtual void SetAll() = 0; // prompts user for values

	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
private:
	std::string fname; // abstr_emp's first name
	std::string lname; // abstr_emp's last name
	std::string job;
};

class employee : public abstr_emp {
public:
	employee() = default;
	employee(const std::string& fn, const std::string& ln, const std::string& j);

	void ShowAll() const override;
	void SetAll() override;
};

class manager : virtual public abstr_emp {
public:
	manager() = default;
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0);
	manager(const abstr_emp& e, int ico);
	manager(const manager& m);

	void ShowAll() const override;
	void SetAll() override;
protected:
	int InChargeOf() const { return inchargeof; } // output
	int& InChargeOf() { return inchargeof; } // input
private:
	int inchargeof; // number of abstr_emps managed
};

class fink : virtual public abstr_emp {
public:
	fink() = default;
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);
	fink(const abstr_emp& e, const std::string& rpo);
	fink(const fink& e);

	void ShowAll() const override;
	void SetAll() override;
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
private:
	std::string reportsto; // to whom fink reports
};

class highfink : public manager, public fink // management fink
{
public:
	highfink() = default;
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico);
	highfink(const abstr_emp& e, const std::string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const std::string& rpo);
	highfink(const highfink& h);

	void ShowAll() const override;
	void SetAll() override;
};