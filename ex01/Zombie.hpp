#pragma once
#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void)const;
        void    initName(std::string str);
        

};
Zombie  *zombieHorde(int N , std::string name);