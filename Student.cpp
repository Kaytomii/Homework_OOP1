#include "Student.h"
#include <iostream>

Student::Student(char* n_s, char* birth, int cont_num, char* place1, char* country1, char* educ_inst, char* pl_and_country_educ_inst, int grp_num)
{
	setName_Surname(n_s);
	setBirth_Date(birth);
	setContact_Number(cont_num);
	setPlace(place1);
	setCountry(country1);
	setEducational_Institution(educ_inst);
	setPlace_And_Country_Educational_Institution(pl_and_country_educ_inst);
	setGroup_Number(grp_num);
}

Student::Student() :Student::Student(nullptr, nullptr, 0, nullptr, nullptr, nullptr, nullptr, 0)
{
}

char* Student::getName_Surname()
{
	return name_surname;
}

char* Student::getBirth_Date()
{
	return birth_date;
}

int Student::getContact_Number()
{
	return contact_number;
}

char* Student::getPlace()
{
	return place;
}

char* Student::getCountry()
{
	return country;
}

char* Student::getEducational_Institution()
{
	return educational_institution;
}

char* Student::getPlace_And_Country_Educational_Institution()
{
	return place_and_country_educational_institution;
}

int Student::getGroup_Number()
{
	return group_number;
}

void Student::setName_Surname(char* n_s)
{
	if (n_s != nullptr && strlen(n_s) > 0)
	{
		if (name_surname != nullptr)
		{
			delete[] name_surname;
		}

		int sizeNS = strlen(n_s);
		name_surname = new char[sizeNS + 1 + 1];
		strcpy_s(name_surname, sizeNS + 1, n_s);
	}
}

void Student::setBirth_Date(char* birth)
{
	if (birth != nullptr && strlen(birth) > 0)
	{
		if (birth_date != nullptr)
		{
			delete[] birth_date;
		}

		int sizeBR = strlen(birth);
		birth_date = new char[sizeBR + 1 + 1];
		strcpy_s(birth_date, sizeBR + 1, birth);
	}
}

void Student::setContact_Number(int cont_num)
{
	contact_number = cont_num;
}

void Student::setPlace(char* place1)
{
	if (place1 != nullptr && strlen(place1) > 0)
	{
		if (place != nullptr)
		{
			delete[] place;
		}

		int sizePL = strlen(place1);
		place = new char[sizePL + 1 + 1];
		strcpy_s(place, sizePL + 1, place1);
	}
}

void Student::setCountry(char* country1)
{
	if (country1 != nullptr && strlen(country1) > 0)
	{
		if (country != nullptr)
		{
			delete[] country;
		}

		int sizeC = strlen(country1);
		country = new char[sizeC + 1 + 1];
		strcpy_s(country, sizeC + 1, country1);
	}
}

void Student::setEducational_Institution(char* educ_inst)
{
	if (educ_inst != nullptr && strlen(educ_inst) > 0)
	{
		if (educational_institution != nullptr)
		{
			delete[] educational_institution;
		}

		int sizeEI = strlen(educ_inst);
		educational_institution = new char[sizeEI + 1 + 1];
		strcpy_s(educational_institution, sizeEI + 1, educ_inst);
	}
}

void Student::setPlace_And_Country_Educational_Institution(char* pl_and_country_educ_inst)
{
	if (pl_and_country_educ_inst != nullptr && strlen(pl_and_country_educ_inst) > 0)
	{
		if (place_and_country_educational_institution != nullptr)
		{
			delete[] place_and_country_educational_institution;
		}

		int sizePCEI = strlen(pl_and_country_educ_inst);
		place_and_country_educational_institution = new char[sizePCEI + 1 + 1];
		strcpy_s(place_and_country_educational_institution, sizePCEI + 1, pl_and_country_educ_inst);
	}
}

void Student::setGroup_Number(int grp_num)
{
	group_number = grp_num;
}

void Student::fill_Student()
{
	const size_t SIZE = 65;
	char bufer[SIZE];

	std::cout << "Enter student name and surname: ";
	std::cin.getline(bufer, SIZE);
	setName_Surname(bufer);

	std::cout << "Enter student birth_date: ";
	std::cin.getline(bufer, SIZE);
	setBirth_Date(bufer);

	std::cout << "Enter student contact number like (122333444): ";
	std::cin >> contact_number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	setContact_Number(contact_number);

	std::cout << "Enter student place: ";
	std::cin.getline(bufer, SIZE);
	setPlace(bufer);

	std::cout << "Enter student country: ";
	std::cin.getline(bufer, SIZE);
	setCountry(bufer);

	std::cout << "Enter student education_institution: ";
	std::cin.getline(bufer, SIZE);
	setEducational_Institution(bufer);

	std::cout << "Enter place and country of education_institution: ";
	std::cin.getline(bufer, SIZE);
	setPlace_And_Country_Educational_Institution(bufer);

	std::cout << "Enter group number: ";
	std::cin >> group_number;
	setGroup_Number(group_number);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
}

void Student::print_Student()
{
	std::cout << "Student name and surname: " << getName_Surname() << std::endl;
	std::cout << "Student birth date: " << getBirth_Date() << std::endl;
	std::cout << "Student contact number: " << getContact_Number() << std::endl;
	std::cout << "Student place: " << getPlace() << std::endl;
	std::cout << "Student country: " << getCountry() << std::endl;
	std::cout << "Student education institution: " << getEducational_Institution() << std::endl;
	std::cout << "Education Institution place and country: " << getPlace_And_Country_Educational_Institution() << std::endl;
}

Student::~Student()
{
	if (name_surname != nullptr)
	{
		delete[] name_surname;
	}

	if (birth_date != nullptr)
	{
		delete[] birth_date;
	}

	if (place != nullptr)
	{
		delete[] place;
	}

	if (educational_institution != nullptr)
	{
		delete[] educational_institution;
	}

	if (country != nullptr)
	{
		delete[] country;
	}

	if (place_and_country_educational_institution != nullptr)
	{
		delete[] place_and_country_educational_institution;
	}
}