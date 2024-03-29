#pragma once
#include <iostream>

class DMA {
public:
	virtual void view() const = 0;
	virtual ~DMA() {}
private:
};

class baseDMA : public DMA {
private:
	char* label;
	int rating;
public:
	static constexpr int MAX = 20;
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();

	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);

	virtual void view() const;
};

class lacksDMA :public baseDMA {
private:
	static constexpr int COL_LEN = 40;
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);

	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);

	void view() const;
};

class hasDMA :public baseDMA {
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();

	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);

	void view() const;

};
