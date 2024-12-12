#include "Zombie.hpp"

Zombie *zombieHorde(int N , std::string name)
{
    int i = 0 ;
    Zombie *Horde = new Zombie[N];

    while(i < N)
    {
        
        Horde[i].initName(name);
        Horde[i].announce();
        i++;
    }
    return Horde;
}