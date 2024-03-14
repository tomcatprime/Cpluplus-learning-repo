#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>


int main()
{	// number typed in [] means array of 6 elements
	int ids[] = { 1, 2, 3, 4, 5 };

	//i <= sizeof(ids)/sizeof(int) is off by one problem
	for (int i = 0; i < sizeof(ids) / sizeof(int); i++)
	{
		std::cout << ids[i] << std::endl;
	}


	for (int i = sizeof(ids) / sizeof(int) - 1; i >= 0; i--)
	{
		std::cout << ids[i] << std::endl;
	}

	//the same as or (int i = 0; i < sizeof(ids)/sizeof(int); i++)
	//std::cout << ids[i] << std::endl;
	//down size of this is that the index is not here
	//thius is called a foreach
	for (int item : ids)
	{
		std::cout << item << std::endl;
	}

	//looping over vectors
	//vector type gives error for off by one problem
	std::vector<int> idsVec = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < idsVec.size(); i++)
	{
		std::cout << "This is vector loop" << idsVec[i] << std::endl;
	}

	for (int item : idsVec)
	{
		std::cout << "This is vector loop" << item << std::endl;
	}

	std::cout << "###############" << std::endl;
	//iterator for loop iterator is like an agent to loop through the vector type
	for (std::vector<int>::iterator itr = idsVec.begin(); itr != idsVec.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}


}	