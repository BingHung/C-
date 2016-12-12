#include <iostream>
#include <functional>
#include <cmath>
using namespace std;

// function<RETURN_TYPE(PARAM_TYPE, ....)> f;
/*
int myfun(double d)
{
	
	......
}
function<int(double)> f = myfun ;

int myfun(double d, int x)
{
	
	......
}
function<int(double, int)> f = myfun ;
*/

double Calculate(function<double(double)> f, double x); // function<double(double)> f ; f:syntax arbitrary , return type:double , arguments: double
double TestFun1(double x);
double TestFun2(double x);

int main()
{
	double a = Calculate(TestFun1, 5);
	cout << a << endl;
	double b = Calculate(TestFun2, 10); // not double b = Calculate(TestFun2(), 10);
	cout << b << endl;

	// pass lambda function . f hold it !!!
	function<int(int, int)> f = [] (int a , int b) -> int {return a*b;}; 

	int res = f(10,20);
	cout << res << endl;

	return 0;
}

double Calculate(function<double(double)> f, double x)
{
	double y = f(x) * f(x) * f(x); // return cube 
	return y;
}

double TestFun1(double x)
{
	return x * x; // return square
}

double TestFun2(double x)
{
	return x * x - 2 * x + 1;
}