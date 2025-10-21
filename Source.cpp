#include <iostream>
#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "");

	Fraction frac1;
	Fraction frac2;

	frac1.fill_Fraction();
	frac2.fill_Fraction();
	frac1.user_choice();

	size_t choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1: std::cout << frac1.add_Fraction(frac2) << std::endl; break;
	case 2: std::cout << frac1.minus_Fraction(frac2) << std::endl; break;
	case 3: std::cout << frac1.multiply_Fraction(frac2) << std::endl; break;
	case 4: std::cout << frac1.divide_Fraction(frac2) << std::endl; break;
	default: std::cout << "Error input";
	}
}