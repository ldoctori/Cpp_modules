#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook
{
private:
    const static int list_len = 8;
    Contact list[list_len];
    const static int     fields_num = 5;
    std::string fields[fields_num];
    bool IsNum(std::string str_in);

public:

PhoneBook()
{
    fields[0] = "First Name";
    fields[1] = "Last Name";
    fields[2] = "Nickname";
    fields[3] = "Phone number";
    fields[4] = "Darkest secret";
}
~PhoneBook()
{
    std::cout << "All contacts deleted, you will never see them again! Bye!" << std::endl;
}
    void Add();
    void PrintBook();
    void Search();
};

#endif