#pragma once
#include <iostream>
#include <string>
class   Zombie
{
    private:
        std::string     _name;
    public:
        Zombie(std::string str);
        ~Zombie();
        void announce(void);
};
Zombie* newZombie(std::string name);
void	randomChump(std::string name);