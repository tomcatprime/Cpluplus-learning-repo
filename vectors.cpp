#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
int main()
{ 

	//arrays can hold element of any type
	//array do not change size
	int IDs[] = { 1234, 4321, 9876 };

	//{...} is called initializer list
	std::vector<int> IDVec = { 1234, 4321, 9876 };

	std::cout << "This is one of IDs is " << IDs[0] << std::endl;
	std::cout << "This first one of IDVec is: " << IDVec[0] << std::endl;

	std::cout << "The last one of IDs is: " << IDs[sizeof(IDs) / sizeof(int) - 1] << std::endl;
	std::cout << "The last one of IDVec is " << IDVec.back() << std::endl;


	std::cout << "The size of IDs is: " << sizeof(IDs) / sizeof(int) << std::endl;
	std::cout << "The size of IDVec is: " << IDVec.size() << std::endl;

	//vector can grow and shrink
	//grow
	IDVec.push_back(1534);
	std::cout << IDVec.back() << std::endl;
	std::cout << "The last one of IDVec is " << IDVec.back() << std::endl;
	std::cout << "The first one IDVec is " << IDVec.front() << std::endl;

	//insert - requires to specify where to insert
	IDVec.insert(IDVec.begin()+1, 1134);
	std::cout << "The first one IDVec is " << IDVec.front() << std::endl;
	std::cout << "The first one IDVec is " << IDVec[1] << std::endl;

	//remove
	IDVec.erase(IDVec.begin());
	std::cout << "The first one IDVec is " << IDVec.front() << std::endl;

}