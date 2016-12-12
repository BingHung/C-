#include <iostream>
#include <fstream>
#include <string>

// Encypt ROT13 algorithm , rotating letter 
/*
26 letters 
26 z -> rotate 13 spaces 1A 2B 3C .... 13 change to Z
*/ 

// prototype a function
std::string ROT13(std::string s);


int main()
{
	/*
	std::ofstream f("RandomFile");
	if(!f)
		std::cout << "File does not exist or you do not have a permission to write to it";
	else
		f << "RUDE" ;


	f.close();
	*/

	std::string text, s, file_path;
	std::cout << "Enter text (--- in newline to end ) : " << std::endl;

	while(std::getline(std::cin, s))
	{
		if(s != "---")
			text += s + "\n";
		else break;
	}

	std::cout << "Enter name of the file: ";
	std::getline(std::cin, file_path);

	std::ofstream file(file_path); // open up the file for writing 

	if (!file)
	{
		std::cout << "Error! Cannot write to " << file_path << std::endl;
		return 1;
	}

	file << ROT13(text);
	file.close();

	return 0;

} 

// implement function
std::string ROT13(std::string s) 
{
	for(char &c : s) // what is this for ???
		if(c  >=  'a' && c <= 'z' || c >= 'A' && c <= 'Z') //coz C is case sensible language , ASCII that we know >= <= ...
		{
			if(c < 'a' + 13 || c <'A' + 13)
				c = c + 13;
			else 
				c = c - 13;
		}
	return s;
}

