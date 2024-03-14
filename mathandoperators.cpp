#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>


int main()
{ 
	//Arithmetic Operators

	int variableOne = 10; //if assign float to int, you loose precision, anything after the . point, will be discarded
	float a = 10;
	float b = 6;

	int one = 10;
	int two = 4;

	int c = a + b;
	std::cout << c << std::endl;

	int d = a - b;
	std::cout << d << std::endl;

	int e = a * b;
	std::cout << d << std::endl;

	int f = a / b; //this will give 1, because int is whole number, remainder is hidden, it like floor operator
	std::cout << f << std::endl;

	int h = one % two; // this gives the reminder of division
	std::cout << h << std::endl;

	//float does not support module operator
	float w = a / b;
	std::cout << w << std::endl;

	a += b; //the same as a = a + b 
	a -= b; //the same as a = a - b

	one /= two; // the same as one = one / two
	a *= b; // the same as a = a * b
	

	//increment operator	
	a++; //the same as a += 1 or a = a + 1 - this case we get value before
	a--; //the same as a -= 1 or a = a - 1

	++a; //the same as a += 1 or a = a + 1
	--a; //the same as a -= 1 or a = a - 1 -- this case we get value what is after

	//comparison operator

	bool aEqualB = a == b; //a is equal to a - gives result of boolean
	bool aNotEqualB = a != b; // a is not equal to b - gives result of boolean

	bool aSmallerThenB = a < b; // smaller then b
	bool aSmallerThenB = a > b; // bigger then b

	a <= b;
	a >= b;

	//logical operators - can be chain together
	//AND %% operator
	bool bothTrue = aEqualB && aNotEqualB; // && and operator, buth values have to be true to return true 
	//OR || operator
	bool eitherTrue = aEqualB || aNotEqualB; // any true will return true, will  be false if botg are false
	//chaining logical operators
	bool eitherTrue = aEqualB || (aNotEqualB && aSmallerThenB); //if in () is guaranted to compare first
	// %% has higher priority then || 




}