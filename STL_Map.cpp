#include <iostream>
#include <string>
#include <map>
using namespace std;

// map -> key value pair

int main()
{
	map<int , string> numbers;
	numbers[0] = "Zero";
	numbers[1] = "One";
	numbers[2] = "Two";

	cout << numbers[0] << endl;
	cout << numbers.at(0) << endl;
	cout << numbers.size() << endl; // how many elements in the map not in bytes
	bool emp = numbers.empty(); // check the map is empty or not 

	// looking something in the map
	auto it  = numbers.find(222); //totally is 3 elements not 222 elements
	if (it == numbers.end())
		//cout << "Key not found! " << numbers.at(3) << endl; // out of range
		cout << "Key not found! "  << endl;
	else
		cout << "Key found! " << endl;

	// init map in another way
	map<int , string> Days // like keyboard
	{
		{1, "Mon"},
		{2, "Tur"},
		{3, "Wed"},
		{4, "Thu"},
		{5, "Fri"},
		{6, "Sat"},
		{7, "Sun"}
	};

	for (int i = 1; i <= 7 ; ++i)
		cout << Days[i] << endl;

	return 0;
}