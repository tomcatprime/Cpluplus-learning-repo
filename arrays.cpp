#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>

int main()
{ 
	std::string employeeOne = "steve";
	std::string employeeTwo = "john";

	//this is an array of strings, can be infinite until memore is occupied
	// array can store only one type of data, not multiple like in python
	std::string employees[] = { "steve", "bob", "allen" };
	// array has fixed sized, does't change size

	// if index out of bounds of an array, it will do undefined behavior

	std::cout << employees[2] << std::endl;

	//changing value
	employees[1] = "Karol";

	std::cout << employees[1] << std::endl;
	// checking lenght of array
	std::cout << sizeof(employees) / sizeof(std::string) << std::endl;

	//dynamic arrays // std::vector


}