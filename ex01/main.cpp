#include "Zombie.hpp"

int main()
{
    Zombie *zo = zombieHorde(5 , "zombo");
    delete[] zo;
    return 0;
}