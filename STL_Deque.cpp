#include <iostream>
#include <deque>
using namespace std;
//elements are not continous in the memory
// windows cmd => g++ -std=c++11 STL_Deque.cpp -o Deque

int main()
{
	deque<int> dq1 (10);
	deque<double> dq2 (5);
	deque<int> dq3;
	deque<int> dq4 (3, 7);

	for(int i = 0 ; i < dq4.size() ; ++i)
		cout << dq4[i] << " ";

	int el = dq1.at(0);

	bool emp1 = dq2.empty();
	bool emp2 = dq3.empty();

	cout << endl << dq3.size() << endl;
	dq3.push_back(100); // add element at the last position 
	cout << endl << dq3.size() << " " << dq3.at(0) << endl;

	// init deque
	deque<int> dq5 {4,5,1,0,2,9};
	// print out with for each loop in C++11
	
	for (int i : dq5)
		cout << i << " ";
	cout << endl;
	
	dq5.pop_back(); // delete last element

	for (int i : dq5)
		cout << i << " ";
	cout << endl;

	dq5.push_front(99); // push the element infront of the queue

	for (int i : dq5)
		cout << i << " ";
	cout << endl;
	
	return 0;
}
