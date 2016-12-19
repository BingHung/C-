#include <iostream>
#include <cmath>
#include <stdexcept> // one try can have many catch blocks
using namespace std;

double Sqrt(double x)
{
	if(x < 0)
		throw "Negative Number!";

	double sroot  = pow(x, 0.5);
	return sroot; 
}

void something_Exception(int n)
{
	if(n == 0)
		throw 1;
	if(n > 0 && n < 100)
		throw " n between 0 ~ 100 ";
	if(n == -1)
		throw " n equals -1";
	if(n < -1)
		throw domain_error("some std exception");
}

int main()
{
	int num;
	cout << "Enter number : ";
	cin >> num;

	// try 
	// {
	// 	square_root = Sqrt(num);
	// }
	// catch(const char *text)
	// {
	// 	cout << "ERROR: " << text << endl;
	// 	return 1;
	// }

	try 
	{
		something_Exception(num);
	}
	// catch(char c)
	// {
	// 	cout << "Caught: Char " << endl;
	// }
	catch(int i)
	{
		cout << "Caught: Int " << endl;
	}
	catch(const char *txt)
	{
		cout << "Caught Text: " << txt << endl;
	}
	catch(domain_error de)
	{
		cout << "Caught domain error with text: " << de.what() << endl;
	}

	return 0;
}