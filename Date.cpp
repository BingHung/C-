#include "Data.h"

/*
Class :: Function (par)
{
	body
}
*/

void Data :: SetDate(int d, int m, int y)
{
	this -> day =d;
	this -> month =m;
	this -> year =y;
}

void Data :: Print() const
{
	std :: cout << this -> month << "/" << this-> day << "/" << this-> year << std::endl;
}

int Data :: GetDay() const
{
	return this -> day;
}

int Data :: GetMonth() const
{
	return this -> month;
}

int Data :: GetYear() const
{
	return this -> year;
}