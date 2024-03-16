#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

//challange
/*
convert miles to Kilometers
take input from the user, ask distance in miles
convert that distance to kilometers and print out value
*/


int main()
{

	std::cout << "Welcome to Even or Odd numbers game" << std::endl;
	int number = 0;
	std::cout << "Please type a number to check if it is even or odd " << std::endl;
	//std::cin >> number;

	//using modulo, divided by 2, even if reminder is 0
	//int result = number % 2;
	for (int i = 0; i <= 20; i++)
	{
		int number = i;
		int result = number % 2;
		if (result == 0)
		{
			std::cout << "This is Even number" << std::endl;
			std::cout << "i equal to " << number << std::endl;
			std::cout << " result equal to " << result << std::endl;
		}
		else
		{
			std::cout << "This is Odd number." << std::endl;
		}

	}


}