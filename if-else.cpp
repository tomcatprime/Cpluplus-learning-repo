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
	
	if (age > 20) //in () a bool is expected, if the bool is true, then the code in {} will be executed, if the bool is false, code in {} is ignored
	{
		std::cout << "you are old enough to play the game" << std::endl;

	}
	else if (age > 6) //if age is not bigger then 20 but bigger then 6, then to code in {} after else if will be called.

	{
		std::cout << "you need a parent to watch the movie together" << std::endl;
	}
	

	//scopre, a code block
	else  //when the bool in {} is false, then the code in the {} after else will be called. suprisingly not needed as much
	{
		std::cout << "you are too young" << std::endl;
	}
	//becarefulk about sinle equal sign =
	//don't make it too complicated
	//do not nesting if you do not have too
}		