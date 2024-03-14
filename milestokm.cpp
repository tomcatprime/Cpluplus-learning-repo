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
	bool isOn = true;
	while (isOn == 1)
	{

		std::cout << "Welcome in  Miles to Kilometers Converter" << std::endl;
		float miles = 0; //always give default value, always initialize your variable
		std::cout << "Please type distance in miles" << std::endl;
		std::cin >> miles;
		const float MILESTOKM = 1.61;
		float km = miles * MILESTOKM;
        while(!std::cin.good())
        {
            std::cin.clear(); //clearing garbage
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignoring numeric limits, entire buffer until we reach a new line
            std::cout << "Error Input! Please give a number:\n>>>";
            std::cin >> miles;
        }
		std::cout << "Your distance " << miles << " miles is equivalent to " << km << " in kilometers." << std::endl;
		
	}

}
