# include <isotream>

// strucuter -> user defined types , can combined lots of data types

/*
	struct some_structure 
	{
		//attributes 
	
	}; // need simicolon in the end  
*/


int main()
{
	struct Date
	{
		// Attributes(Fields) -> All of these attributes are "Public" , visible outside the structure.
		int day;
		int month;
		int year;
		// This structure is now a user defined type, (it is defined) , It does not take memory space.
		// Only if we create a variable of type "this structure" , the structure will take up memory space.
	};

	return 0;
}