#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>


int main()
{ 
	//get the sum of the number from 1 to 100
	int sum = 0;

	//for loops keeps looping, or keep calling the code in the {} again and again until the conditions is false
	//three things is used in the () for loop, diveded by 2 ;
	//(initializaion; condition ; incrementation)
	//initialization is called once in the beggining of the for loop
	//condition is checked at the beggining of the each loop
	//incrementation is called at the end of each loop
	for (int i = 0; i <= 100; i++) //avoid infinite loop, be sure that condition will be false at some point
	{
		sum += i;
		std::cout << sum << "\n" << std::endl;
	}
}		