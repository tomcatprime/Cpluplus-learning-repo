#include <iostream> //this is preprocessor directives, program will run after this is exectued, including everything from iostream
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>
#include <sstream>

//challange
/*
convert miles to Kilometers
take input from the user, ask distance in miles
convert that distance to kilometers and print out value
*/


int main()
{	
    std::string text = R"""(Once upon a time, in the quaint village of Willowbrook, there lived a young girl named Elara. Elara was known throughout the village for her kind heart and adventurous spirit. She spent her days exploring the lush forests that surrounded Willowbrook, always accompanied by her loyal companion, a mischievous fox named Finn.

One sunny afternoon, while wandering deeper into the woods than she had ever ventured before, Elara stumbled upon a hidden clearing. In the center of the clearing stood an ancient, gnarled oak tree with its branches reaching towards the sky like outstretched arms. Curiosity sparked within her, Elara approached the tree cautiously.

As she drew closer, a soft, melodic hum filled the air, and Elara noticed that the tree seemed to shimmer with an otherworldly glow. Entranced by the tree's beauty, she reached out to touch its rough bark. Suddenly, a voice whispered in her mind, gentle yet commanding.)""";

std::stringstream ss;
ss << text;
std::string nextStr = "";
ss >> nextStr;
std::cout << nextStr << std::endl;

} 
