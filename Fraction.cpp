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
	std::cout << "Enter numerator: ";
	std::cin >> numerator;
	setNumarator(numerator);

	std::cout << "Enter denominator: ";
	std::cin >> denominator;
	setDenominator(denominator);
}

void Fraction::user_choice()
{
	std::cout << "What mathematical operation would you like to perform?\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "1.Add fraction\n";
	std::cout << "2.Minus fraction\n";
	std::cout << "3.Multiply fraction\n";
	std::cout << "4.Divide fraction\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "Enter your choice (1 - 4): ";
}

double Fraction::add_Fraction(Fraction& obj)
{
	return numerator + denominator + obj.numerator + obj.denominator;
}

double Fraction::minus_Fraction(Fraction& obj)
{
	return numerator - denominator + obj.numerator - obj.denominator;
}

double Fraction::multiply_Fraction(Fraction& obj)
{
	return numerator * denominator + obj.numerator * obj.denominator;
}

double Fraction::divide_Fraction(Fraction& obj)
{
	return numerator / denominator + obj.numerator / obj.denominator;
}
