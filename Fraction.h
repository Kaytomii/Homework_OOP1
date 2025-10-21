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
	double add_Fraction(Fraction& obj);
	double minus_Fraction(Fraction& obj);
	double multiply_Fraction(Fraction& obj);
	double divide_Fraction(Fraction& obj);
};

