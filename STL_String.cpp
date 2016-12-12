#include <iostream>
#include <string>
using namespace std;

// string -> flexible and dynamic extension of C-like String (CString)
// use in almost all programming language out there

int main()
{
	// s1 or str1 what ever you want
	string s1 = "Hey, BH , How it is going ?"; // you can have more than one word in strign type. // string is an object ...
	string s2 = (" Lity is so cute ");
	cout << s1 << s2 << endl;

	// you can have empty string in c++
	string s3;
	string s4 = ""; 

	// length of the string 
	unsigned int s1_size = s1.size(); // 27 alphabets in this case include blank
	cout << s1_size << endl; 

	bool emp = s1.empty(); // check the string is empty or not ?
	if (emp == true)
	{
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	char c1 = s1[0];
	char c2 = s1.at(0);
	cout << " c1 : " << c1 << " c2 : " << c2 << endl;

	//compare string
	// load content of the text file in the string ...
	if(s1 == s2){ cout << "s1 = s2" << endl; }
	if(s1 != s2){ cout << "s1 != s2" << endl; }
	if(s1 == "Hello"){}

	// we can also compare them alphabatically
	if(s1 > s2){}
	if(s1 < s2){}

	s3.push_back('E');
	cout << s3 << endl;

	// contenation string
	s1 += " tralalalala";
	cout << s1 << endl;

	string s5 = s1 + ", " + s2;
	cout << s5 << endl;

	//user input in one word
	string s6;
	cout << "only one word can be accepted -> " ;
	cin >> s6; // it can only input one word 
	cout << s6 << endl;
	
	cin >> s6; // it can only input one word 
	cout << s6 << endl;

	//user input entire line
	cout << "can accept multiple-words , include blank space -> " ;
	getline(cin, s6);
	cout << s6 << endl;

	return 0;
}
