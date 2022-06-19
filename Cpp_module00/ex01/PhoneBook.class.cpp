#include "PhoneBook.class.hpp"

bool PhoneBook::IsNum(std::string str_in)
{
    int i = 0;
    while (str_in[i])
    {
        if (str_in[i] < '0' || str_in[i] > '9')
            return false;
        i++;
    }
    return true;
}

void PhoneBook::Add()
{
    Contact new_contact;
    int i = 0;
    new_contact.SetContact();

    for (i = 0; i < list_len; i++)
    {
        if (list[i].order == 0 || list[i].order == -1)
        {
            list[i] = new_contact;
            list[i].order+= i + 1;
            if (i + 1 < list_len && list[i + 1].order != 0)
                list[i + 1].order = -1;
            break ;
        }
    }
    if (i == list_len)
    {
        list[0] = new_contact;
        list[0].order = 1;
        list[1].order = -1;
    }
    std::cout << "Contact sucsessful added!" << std::endl;
}

void PhoneBook::Search()
{   
    int i = 0;
    std::string str_in;

    while (i < list_len)
    {
        if (list[i].order == 0)
            break;
        std::cout << std::setw(10);
        std::cout << i << + "|";
        list[i].GetContactSearch();
        i++;
    }
    if (i == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return ;
    }
    while (true)
    {
         i = -1;
        std::cin >> str_in;
        if (str_in == "esc")
            break ;
        if (IsNum(str_in))
            {
                std::stringstream ss;
                ss << str_in;
                ss >> i;
            }
        if (i > list_len || list[i].order == 0 || i < 0)
        {
            std::cout << "No such contact!" << std::endl;
            continue ;
        }
        list[i].GetContact();
    }
}