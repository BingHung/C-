#ifndef DATA_H // if not define DATA_H , preprocessor command ...  , name have to be unique
#define DATA_H // define DATA_H

#include <iostream>


// class interface
class Data
{
	int day;
	int month;
	int year;

	public:
			//prototype of the method
			void SetDate(int d, int m, int y);
			int Print() const;
			int GetDay() const;
			int GetMonth() const;
			int GetYear() const;
};

#endif // DATA_H