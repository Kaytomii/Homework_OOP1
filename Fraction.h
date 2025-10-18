#pragma once
class Fraction
{
private:
	double numerator;
	double denominator;

public:
	//constructor
	Fraction(double numarator, double denominator);
	Fraction();

	//getter
	double getNumerator();
	double getDenominator();

	//setter
	void setNumarator(double numerator1);
	void setDenominator(double denominator1);

	//methods(functions)
	void fill_Fraction();
	void user_choice();
	void add_Fraction();
	void minus_Fraction();
	void multiply_Fraction();
	void divide_Fraction();
};

