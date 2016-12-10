#include <iostream>

#include <string>
#include <stdexcept> // what is this for ?????????????????

using namespace std;

// Rule0 => Feel free to check on net ... Rule of Zero C++ ...
// Rule3 =>
// Rule5 =>

/*

Constructor => when the user create the object of the class and constructor init generate.
Name of the construct and name of the class are the same.
Constructor should be public

*/

/*

Destructor => when the class is being destroyed. 
no parameters in destructor , you can have only one destructor.
e.g. 
~Date()
{
	
}
free your memory space !!!
why is no destructor in C++ ?????????????

*/

class DummyClass 
{
	// create attributes (private)
	int dummy_attr1 ;
	char dummy_attr2 ;

	public:
		DummyClass() : dummy_attr1(0) , dummy_attr2('B') // init attributes 
		{
			cout << "Hello ! Constructor Here !!!" << endl;
		}

		DummyClass(int paramater) : dummy_attr1(paramater) , dummy_attr2('H') // init attributes 
		{
			cout << "2nd constructor here . parameter = " << paramater << endl;
		}
		// we can add as many constructor as we wish , (number or datatype have to be different) ~ like overloading function.

		// create method 
		void Print() const 
		{
			cout << "dummy_attr1 = " << dummy_attr1 << endl;
			cout << "dummy_attr2 = " << dummy_attr2 << endl;
		}

		// friend functions
		// what if we want to interact with diffrent instances of the class .
		// able private var from both instances ...
		friend int Add(DummyClass dc1, DummyClass dc2)
		{
			int result;
			result = dc1.dummy_attr1 + dc2.dummy_attr1;
			return result;
		}

		// destructor 
		~DummyClass()
		{
			cout << "Destructor has been called !" << endl;
		}
};

class Date
{
	int day;
	int month;
	int year;

	string GetMonthName () const
	{
		// what is this syntax for ???
		static string months[] = 
		{
			"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sep","Oct","Nov","Dec"
		};
		return months[month -1];
	}

	public :

		Date (int d , int m , int y)
		{
			this -> SetDate(d, m, y); // constructor take arguments d,m,y call setDate method to set Date
		}

		void SetDate(int d, int m, int y)
		{
			SetDay(d);
			SetMonth(m);
			SetYear(y);
		}


		void SetDay(int d) {this->day = d;}
    	void SetMonth(int m) {this->month = m;}
    	void SetYear(int y) {this->year = y;}

    	void PrintNice () const 
    	{
    		cout << day << " " << GetMonthName() << " " << year << endl ;
    	}

};

// create generic class
template <typename TYPE>
class DummyGeneric
{
	TYPE Attribute ; //create an attribute of type TYPE. (default private)
	public :
		// constructor here
		DummyGeneric(TYPE param) : Attribute(param)
		{

		}

		// this is a getter function 
		TYPE GetAttribute() const//not change anytinhg with const
		{
			return this -> Attribute;
		}

		// this is the setter 
		// be careful of the case sensitive of C++
		void SetAttribute(TYPE a) 
		{
			this -> Attribute = a;
		}
};

int main()
{
	DummyClass dummy1; // declare the object of the class (DummyClass) , this declaration will call the constructor
	dummy1.Print();
	//DummyClass dummy(); // There is nothing out on the screen -> when the declaring () ,this a function prototype accept nothing but return dummyClass
	DummyClass dummy2(29);

	{
		DummyClass dummy3;
	}
	cout << "dummy3 is already died " << endl;

	// friend function
	DummyClass dc1(100) , dc2(200);
	int result = Add(dc1,dc2); // calling friend function
	cout << "Here is the result = " << result << endl;



	Date dt1(1,1,2014);			// you haev to follow the construtor to create the object , dt; -> will occur error , we don't have constructor not taking arguments
	dt1.PrintNice();
	Date dt2(dt1);				//  It's ok 
	dt2.PrintNice();


	// generic class
	DummyGeneric<int> dummy_int(10);
	DummyGeneric<double> dummy_double(3.1415);
	DummyGeneric<char> dummy_char('E');

	dummy_char.SetAttribute('P');

	return 0;
}