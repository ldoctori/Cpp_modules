#include "Zombie.hpp"

int main()
{
    Zombie *newZombie = new Zombie("Pipa");
    
    delete newZombie;

    randomChump("Chump");
}