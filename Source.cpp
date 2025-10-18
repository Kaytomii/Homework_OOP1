#include <iostream>
#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "");

	Fraction frac;
	frac.fill_Fraction();
	std::cout << std::endl;
	frac.user_choice();
}