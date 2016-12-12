# include <iostream>

/*
std::vector
std::string
std::map
std::function
std::deque
*/

// std -> vector ,represent the array -> that can change in size , dynamic array
#include <vector> 


int main()
{
	std::vector<int> vec1 (10) ;
	std::vector<double> vec2 (5);
	std::vector<int> vec3; // you can also create vector with 0 elements

	// initialize the vector
	std::vector<int> vec4 (3, 7); // 3 elements , all init to 7

	
	unsigned int vecl_size = vec1.size(); 

	// print out the element of vector
	for (int i = 0 ; i < vec4.size() ; ++i)
		std::cout << vec4[i] << " ";

	std::cout << std::endl; // newline

	//access element by using dot notation
	int element = vec1.at(0); // same as vec1[0] 
	std::cout << element << std::endl;

	// vector empty return bool value 
	bool emp1 = vec2.empty();
	for (int i = 0 ; i < vec2.size() ; ++i)
		std::cout << vec2[i] << " ";
	bool emp2 = vec3.empty(); // using method by dot  -> empty in this case means no elements inside ...


	vec3.push_back(5); // inset element in queue
	std::cout << vec3.size() << std::endl;	
	std::cout << vec2.size() << std::endl; 


	std::vector<int> vec5 {5, 4, 3, 2, 1} ;

	for (int i = 0 ; i < vec5.size() ; ++i)
		std::cout << vec5[i] << " ";
	std::cout << std::endl;

	vec5.pop_back();

	for(int i : vec5)
		std::cout << i << " " ;
	std::cout << std::endl;
	
	return 0;
}

