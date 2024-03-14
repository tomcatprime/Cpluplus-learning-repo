#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>


int main()
{ 
	int age;
	std::cout << "please type in your age" << std::endl;
	std::cin >> age; //we asking to input and passing to age
	std::cin.clear(); // to clear the error, tell the buffer that everything is ok
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore the next 10000 amount of characters or until hit a new line

	std::string firstName;
	std::string lastName;
	std::cout << "what is  your name: " << std::endl;
	//will assign string to to variable after space, "Steve" will go to firstName and after space "Donut" will go to lastName
	std::cin >> firstName;
	std::cin >> lastName;
	

	std::cout << "My full name is " << firstName << " " << lastName << std::endl;

	std::cout << "hello " << age << "years old " << age << std::endl;
	
	//assign multiple string to variable
	std::string name;
	std::cout << "what is  your name: " << std::endl;
	std::getline(std::cin, name); //arguments - where to get a things from, and where to put it

	std::cout << name << std::endl;
}