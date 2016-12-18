#include <iostream>
using namespace std;

// Generic -> Compiler create for you .... for all data types

template <typename TYPE>
void Print(TYPE arr[] , int len)
{
	cout << "[";
	for (int i = 0 ; i < len -1 ; ++i)
		cout << arr[i] << ", ";

	if (len != 0)
		cout << arr[len-1] ;

	cout << "]" << endl;
}

// template <typename TYPEs>
// int len(TYPEs arr[])
// {
// 	int len  = sizeof arr / sizeof arr[0];
// 	return len;
// }


int main()
{
	int arr00[] = { 2, 3, 4, -5, 1, 1, 0, 4, 9 };
	const int len00 = sizeof(arr00) / sizeof(arr00[0]) ;
	cout << sizeof arr00 << " " << sizeof arr00[0] << endl;
	Print(arr00, len00);


	double arr01[] = { -2, 3.1, 4.34 };
	const int len01 = sizeof(arr01) / sizeof(arr01[0]) ;
	cout << sizeof arr01 << " " << sizeof arr01[0] << endl;
	Print(arr01, len01);


	 char arr02[] = {'B','H','L','T' } ;
	 Print(arr02,4);


	// In C run out of range will have random weird number ....
 	// cout << len(arr02) << endl;
	return 0;
}
