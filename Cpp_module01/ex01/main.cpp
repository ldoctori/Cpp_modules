#include "Zombie.hpp"

int main()
{
    Zombie *arr = zombieHorde(15, "Pipa");

    delete [] arr;
}