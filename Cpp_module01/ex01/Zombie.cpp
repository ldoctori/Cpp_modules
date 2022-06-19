#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
}
Zombie::Zombie(){};
Zombie::~Zombie()
{
    std::cout << "BANG-BANG! I shot " + name + " down! He hit the ground!"  << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}