#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory adress of the 'str':" << std::endl;
    std::cout << "via 'str':" << &str << std::endl;
    std::cout << "via 'stringPTR':" << stringPTR << std::endl;
    std::cout << "via 'stringREF':" << &stringREF << std::endl;

    std::cout << "Value of the 'str':" << std::endl;
    std::cout << "via 'str':" << str << std::endl;
    std::cout << "via 'strringPTR':" << *stringPTR << std::endl;
    std::cout << "via 'stringREF':" << stringREF << std::endl;
}