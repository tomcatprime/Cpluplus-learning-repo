#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>


int main()
{ 

	std::map<std::string, int> IDs{ {"Steve", 123}, {"Adam", 1334}, {"Szejker", 1} };
	
	//Access value - we use key instead of index
	std::cout << IDs["Adam"] << std::endl;

	//changing value
	IDs["Steve"] = 1567;
	
	//inserting key-value
	IDs.insert({ "Ralu", 1283 });
	
	IDs.erase("Szejker"); //erase - erases the provided Key value from map
	
	std::cout << "The size of IDs is: " << IDs.size() << std::endl;


	std::cout << IDs["Szejker"] << std::endl; //this one actually checks if "Szejker" exists, if not, it adds Szejker

	IDs.clear(); //this removes everything from map

	bool Exists = IDs.find("Lean") != IDs.end(); //
	std::cout << Exists << std::endl;

}