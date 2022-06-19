#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << "BANG-BANG! I shot " + name + " down! He hit the ground!"  << std::endl;
}

void Zombie::announce()
{
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}