#include "Zombie.hpp"


Zombie::Zombie() 
{
std::cout << "I am a zombie ,  I am alive" << std::endl;
}

Zombie::~Zombie()
{
std::cout << "I am a zombie ,  I am dead" << std::endl;
}
void    Zombie::initName(std::string str)
{
this->_name = str;
return ;
}

void Zombie::announce(void)const
{
    std::cout << "yo this my name :" << this->_name<<std::endl;
    return ;
}