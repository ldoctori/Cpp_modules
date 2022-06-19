#include "Contact.class.hpp"

void Contact::SetContact(){
    for (int i = 0; i < fields_num; i++)
    {
        std::cout << fields[i];
        std::cin >> data[i];
    }
}

void Contact::GetContact(){
    
    for (int i = 0; i < fields_num; i++)
        std::cout << fields[i] + data[i] << std::endl;
}

void Contact::GetContactSearch(){
    int size;

    for (int i = 0; i < 3; i++)
    {   
        std::cout << std::setw(10);
        size = data[i].size();
        if (size > 10)
            std::cout << data[i].substr(0, 9) + ".";
        else 
            std::cout << data[i] << std::setfill(' ');
        if (i < 2)
            std::cout << "|";
    }
    std::cout << std::endl;
}