#include "PhoneBook.class.hpp"

int main()
{
    PhoneBook book;

    std::string str_in;
    std::cout << "Welcome to my awesome phonebook!" << std::endl;
    std::cout << "Please, type command ADD, SEARCH or EXIT" << std::endl;
    while (true)
    {
        std::cin >> str_in;
        if (str_in == "ADD")
            book.Add();
        else if (str_in == "SEARCH")
            book.Search();
        else if (str_in == "EXIT")
            break ;
        else
            std::cout << "Pleas write correct command: ADD, SEARCH or EXIT" << std::endl;
    }
}