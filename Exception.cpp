#include <iostream>
using namespace std;
#include <cmath>

//Exception  -> managing  programming error !
// C++98 ， (C++ / C no have exception )
// C had globaL Var Errno -> out dated !!!

double Sqrt(double x)
{
	if (x < 0)
		throw "Negative number !"; // negative number function stop here

	// pow(x,y) -> x^y
	double sroot  = pow(x, 0.5);
	return sroot; 
}

int main()
{
	double num;
	cout << "Enter number : ";
	// If user enter negative number -> error occur
	cin >> num;

	double square_root = Sqrt(num);
	cout << "Sqrt (" << num << ")  = " << square_root << endl;

	return 0;
}

/* 
[try block]
throw "Negative number is not allowed"
throw 0;
throw std::domain_error("Negative number is not allowed");
throw std::exception("Negative number is not allowed");

[catch block]
try
{
	try executing the code
}
catch(type of exception)
{
	executing throw;
}
*/