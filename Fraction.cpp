#include "Fraction.h"
#include <iostream>

Fraction::Fraction(double numarator, double denominator)
{
	this->numerator = numarator;
	this->denominator = denominator;
}

Fraction::Fraction() :Fraction(0,0)
{
}

double Fraction::getNumerator()
{
	return numerator;
}

double Fraction::getDenominator()
{
	return denominator;
}

void Fraction::setNumarator(double numerator1)
{
	if (numerator != 0)
	{
		this->numerator = numerator1;
	}
}

void Fraction::setDenominator(double denominator1)
{
	if (denominator != 0)
	{
		this->denominator = denominator1;
	}
}

void Fraction::fill_Fraction()
{
	std::cout << "Enter numarator: ";
	std::cin >> numerator;
	setNumarator(numerator);

	std::cout << "Enter denominator: ";
	std::cin >> denominator;
	setDenominator(denominator);
}

void Fraction::user_choice()
{
	size_t choice;

	std::cout << "What mathematical operation would you like to perform?\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "1.Add fraction\n";
	std::cout << "2.Minus fraction\n";
	std::cout << "3.Multiply fraction\n";
	std::cout << "4.Divide fraction\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "Enter your chice (1 - 4): ";
	std::cin >> choice;

	switch (choice)
	{
	case 1: add_Fraction(); break;
	case 2: minus_Fraction(); break;
	case 3: multiply_Fraction(); break;
	case 4: divide_Fraction(); break;
	default: std::cout << "Error input";
	}
}

void Fraction::add_Fraction()
{
	std::cout << "Fraction = " << numerator + denominator << std::endl;
}

void Fraction::minus_Fraction()
{
	std::cout << "Fraction = " << numerator - denominator << std::endl;
}

void Fraction::multiply_Fraction()
{
	std::cout << "Fraction = " << numerator * denominator << std::endl;
}

void Fraction::divide_Fraction()
{
	std::cout << "Fraction = " << numerator / denominator << std::endl;
}
