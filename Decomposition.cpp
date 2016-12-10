//#include <iostream>
#include <string>
#include <stdexcept> // what is this for ?????????????????

#include "Date.h" //!!!!!! no need for iostream in here , coz qwe already include , but include it no harm 

//using namespace std;

// decomposition => a software development process => sepearate our code into different files => easy for reading and maintaince
// decompositon example of function => (definition and implementation) => (prototype , function body)

// class , struct => (definition and implementation)
// decompositino => ( header _file (.h) and implement_file (.cpp) )


template <typename TYPE>
class DummyGeneric
{
	TYPE Attribute ; //create an attribute of type TYPE. (default private)
	public :
		// constructor here
		DummyGeneric(TYPE param) : Attribute(param)
		{

		}

		// this is a getter function 
		TYPE GetAttribute() const//not change anytinhg with const
		{
			return this -> Attribute;
		}

		// this is the setter 
		// be careful of the case sensitive of C++
		void SetAttribute(TYPE a) 
		{
			this -> Attribute = a;
		}
};

int main()
{
	Data dt;
	dt.setDate(10,10,2010);
	dt.Print();

	return 0;
}