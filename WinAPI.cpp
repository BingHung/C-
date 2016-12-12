# include <windows.h> // prototype of thouasands of windows functions ......
# include <iostream>


// you can fund all the Win API usage on MSDN (Windows website)
// API , stand for Application programming Interface , lots of website has their API (FB...)
// WinAPI , set of functions offered by OS(Windows) 
// In windows , function are located in libraries ->> the benifits is we can call the library at the time we want , not put all of the sorce code into the memory at the first time
// dll , dynamic linking library ....
// and the other benifit of using library , is multiple program can share the same library

/* Two types of library ...
static library -> link directly to one program ...
dynamic library -> .dll extension , C/Windows/System32/scrow down ...
*/

// each library has its usage interface -> called header file 
//AdvApi32.dll ->  <advapi.h>  -> <windows.h> ->

int main()
{

	std::cout << "We've got 'SW_SHOW' constant : " << SW_SHOW << std::endl; // what is 5 mean Show Windows 
	// if function return 0 -> it is successful 
	// if function return not 0 -> something is wrong 
	std::cout << GetLastError() << std::endl ;

	DWORD ms = GetTickCount(); //DWORD -> windows API type , unsign int ; GetTickCount -> return number of ms since computer start
	std::cout << "Miliseconds pass after computer started : " << ms << std::endl; 
	// convert ms format
	unsigned int hours = ms / 3600000;
	unsigned int minutes = ( ms / 60000 ) % 60;
	unsigned int seconds = (ms / 1000) % 60;
	std::cout << "hours : " << hours << ", minutes : " << minutes << ", seconds : " << seconds << std::endl ;

	char com_name[MAX_COMPUTERNAME_LENGTH + 1]; 
	unsigned long int arr_len = sizeof(com_name) / sizeof(char);
	bool success = GetComputerName(com_name, &arr_len);
	//bool success = false;
	if (success)
		std::cout << "NetBIOS computer name : " << com_name << std::endl;
	else
	{
		// what went wrong ??? (own own debugging statement)
		DWORD err = GetLastError();
		std::cout << "Function call Fialed! Error : " << err << std::endl;
	}

	// without winAPI, we can't write any GUI in windows .... make us lif so much easier , especially in windows .

	return 0;
}