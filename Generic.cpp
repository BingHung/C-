#include <iostream>
using namespace std;

// generic -> has the same body but can accpet different data types
/*
template <typename TYPE>
void Print(TYPE arr[] , int len)

//template <class TYPE ...>
*/

void Print(int arr[] , int len);
// create function overload here -> same time (take different parameters or data types)
void Print(double arr[], int len);

int main()
{
	int arr00[] = { 2, 3, 4, -5, 1, 1, 0, 4, 9 };
	// sizeof is an operator return the size of the object in bytes.
	const int len00 = sizeof(arr00) / sizeof(arr00[0]) ;
	cout << sizeof arr00 << " " << sizeof arr00[0] << endl;
	Print(arr00, len00);


	double arr01[] = { -2, 3.1, 4.34 };
	// size of int 4 , size of double 8
	const int len01 = sizeof(arr01) / sizeof(arr01[0]) ;
	cout << sizeof arr01 << " " << sizeof arr01[0] << endl;
	Print(arr01, len01);


	return 0;
}

void Print(int arr[] , int len)
{
	cout << "[" ;


	for (int i  = 0 ; i < len-1 ; ++i)
		cout << arr[i] << ", ";

	// if we haven't init the array , whose size is 0
	if (len != 0)
		cout << arr[len-1];


	cout << "] INT" << endl;
} 

void Print(double arr[] , int len)
{
	cout << "[" ;


	for (int i  = 0 ; i < len-1 ; ++i)
		cout << arr[i] << ", ";

	// if we haven't init the array , whose size is 0
	if (len != 0)
		cout << arr[len-1];


	cout << "] DOUBLE" << endl;
} 