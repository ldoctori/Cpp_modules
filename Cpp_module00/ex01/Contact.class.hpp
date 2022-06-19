#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact
{
private:
    const static int     fields_num = 5;
    std::string fields[fields_num];
    std::string  data[fields_num];

public:
    int order;
Contact()
{
    fields[0] = "First Name: ";
    fields[1] = "Last Name: ";
    fields[2] = "Nickname: ";
    fields[3] = "Phone number: ";
    fields[4] = "Darkest secret: ";
    order = 0;
}
    void SetContact();
    void GetContact();
    void GetContactSearch();
};

#endif