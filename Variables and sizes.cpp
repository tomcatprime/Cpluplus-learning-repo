#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>

int main()
{ //cout - means character out, std - standard library
	//name of variable has to be unique

	std::string msg = "Hello From Variable ";
	int age = 29;
	float temperature = 20.5; // allows decimal number
	// single character variable
	char characterA = 'A';
	char charactera = 'a';

	//bolean variable Flase or True

	bool lightIsOn = true;
	bool isPassed = false;
	double doubleSizedFloat = 75.284237847823;
	std::cout << msg << age << std::endl;
	std::cout << "The temperature is: " << temperature << std::endl;
	std::cout << characterA << std::endl;
	std::cout << lightIsOn << std::endl;

	//1gb or gigabyte
	//1gb is 1024 megabyte or mb
	//1mb is 1024 kilobyte or kb
	//1kb is 1024 bytes
	//1byte is 8 bits
	//1 bit is 1 bit is either 0 or 1


	//variables have own designated size
	std::cout << "the size of string is: " << sizeof(std::string) << "bytes" << std::endl;
	std::cout << "the size of  is: " << sizeof(int) << "bytes" << std::endl;
	std::cout << "the size of float is: " << sizeof(float) << "bytes" << std::endl;
	std::cout << "the size of char is: " << sizeof(char) << "bytes" << std::endl;
	std::cout << "the size of float is: " << sizeof(float) << "bytes" << std::endl;
	std::cout << "the size of double is: " << sizeof(double) << "bytes" << std::endl;

}