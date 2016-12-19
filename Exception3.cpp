#include <iostream>
#include <cmath>
#include <stdexcept> // one try can have many catch blocks


// all exception . enherit std::exception class

void generic_exception(int n)
{
	if(n == 0)
		throw 1;
	if(n == -1)
		throw 'X';
}

int main()
{
	// .what -> print out the exception message
	// Standard exception
	
	/*
	std::logic_error
	std::domain_error
	std::invalid_argument
	std::length_error
	std::out_of_range
	std::range_error
	std::overflow_error
	std::underflow_error
	
	catch(std::range_error re)
	{
		std::cout << "ERROR : " << re.what << std::endl;
	}
	*/

	// Generic-catch block (catch any type of exceptions) 
	int n;
	std:: cout << "Enter Number : ";
	std::cin >> n;
	try
	{
		generic_exception(n);
	}
	catch(...)
	{
		std::cout << "Generic Error " << std::endl;
	}

	// Nested-Try-Catch block
	/*
	try
	{
		//some code
		try
		{
			//some code again
		}
		catch(...)
		{
			//some catch logic
		}
	}
	catch(...)
	{

	}
	*/

	// Exception propagation
	/*
	void bla()
	{
		try
		{
			//some code
		}
		catch(std::exception e)
		{
			//free 
			throw; // propagate , 
		}
	}



	*/

	return 0;
}

