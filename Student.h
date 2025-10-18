#pragma once
class Student
{
private:
	char* name_surname = nullptr;
	char* birth_date = nullptr;
	int contact_number;
	char* place = nullptr;
	char* country = nullptr;
	char* educational_institution = nullptr;
	char* place_and_country_educational_institution = nullptr;
	int group_number;

public:
	//constructors
	Student(char* n_s, char* birth, int cont_num, char* place1, char* country1, char* educ_inst, char* pl_and_country_educ_inst, int grp_num);
	Student();

	//getters
	char* getName_Surname();
	char* getBirth_Date();
	int getContact_Number();
	char* getPlace();
	char* getCountry();
	char* getEducational_Institution();
	char* getPlace_And_Country_Educational_Institution();
	int getGroup_Number();

	//setters
	void setName_Surname(char* n_s);
	void setBirth_Date(char* birth);
	void setContact_Number(int cont_num);
	void setPlace(char* place1);
	void setCountry(char* country1);
	void setEducational_Institution(char* educ_inst);
	void setPlace_And_Country_Educational_Institution(char* pl_and_country_educ_inst);
	void setGroup_Number(int grp_num);
	

	//methods(functions)
	void fill_Student();
	void print_Student();
	~Student();
};