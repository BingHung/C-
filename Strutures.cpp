# include <iostream>
# include <string>
using namespace std;


// strucuter -> user defined types , can combined lots of data types

/*
	struct some_structure 
	{
		//attributes 
	
	}; // need simicolon in the end  
*/



struct Date
{
	// Attributes(Fields) -> All of these attributes are "Public" , visible outside the structure.
	int day;
	int month;
	int year;
	// This structure is now a user defined type, (it is defined) , It does not take memory space.
	// Only if we create a variable of type "this structure" , the structure will take up memory space.
};


// Joined Attributes shared with all the variables of the structure
struct Book
{
	int ID;
	string Name;
	string Author;
	Date Published; // structures can include in structured
	static int Count;  // can share with all the var created by this structure (it can't be used in C)
};

// Noticed you have to give it a memory space for static 
int Book::Count; // Scope operator


// Can we create var by init it at once .

int main()
{
	Date dt_for_book1 = {12, 18, 2016};
	Book book1 = {0 , "Ring of the lord", "Ujin", dt_for_book1}; // single line initialization (far more convinent)

	Book books[100];
	books[0];
	books[2].ID = 20;
	books[40].Author = "BL";

	cout << book1.Name << endl;


	Book b1, b2;
	b1.ID = 0;
	b1.Name = "Harry Potter";
	b1.Author = "JK Rolling";
	b1.Count = 1;

	cout << "b2 before init => " << b2.Count << endl; // if it is not static , will return am random number 
	b2.Count = 10;
	cout << "b1 => " << b1.Count << endl;
	Book::Count = 100;
	cout << "b1 => " << b1.Count << endl;



	Date dt;
	// Member Access Operators
	cout << "Enter Month : ";
	cin >> dt.month;

	cout << "Enter Day : ";
	cin >> dt.day;

	cout << "Enter Year : ";
	cin >> dt.year;

	cout << "PrintOut Date : ";
	cout << dt.month << "/" << dt.day << "/" << dt.year << endl ;

	Date dt1 , dt2 ;
	dt1.year = 2016 ;
	dt2.year = 2020 ;

	cout << "dt1.year = " << dt1. year << endl ;
	cout << "dt2.year = " << dt2. year << endl ;

	return 0;
}

