#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>



int main()
{
	int age;
	std::cout << "Type your age: " << std::endl;
	std::cin >> age;
	std::cout << "Your age is: " << age << std::endl;
	//switch statement accept only int or enum
	switch (age)
	{
	case 6:
		std::cout << "go to elementary school" << std::endl;
		break;
	case 13:
		std::cout << "go to secondary school school" << std::endl;
		break;
	case 15:
		std::cout << "go to high school" << std::endl;
		break;
	default:
		std::cout << "type correct age" << std::endl;
		break;
	}
	//enum are basically named integers
	enum class Mood  //this is recommended way to use enum
	{
		happy = -1, //defaults to 0
		angry, // defaults to previous one + 1
		sad
	};

	//this is creating variable od the enum type Mood and give it a value of happy
	Mood mood = Mood::happy;

	Mood moodFromInt = (Mood)-1;

}
