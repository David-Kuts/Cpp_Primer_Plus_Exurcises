#pragma once
#pragma once
// sales.h
namespace SALES {
	class Sales {
	private:
		static constexpr int QUARTERS = 4;
		double sales[QUARTERS] = {};
		double average = 0.0;
		double max = 0;
		double min = 0;
	public:
		Sales() = default;
		Sales(const double ar[], int n);

		Sales setSales();
		void showSales() const;
	};
}