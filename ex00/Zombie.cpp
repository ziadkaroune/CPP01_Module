#include "Zombie.hpp"

Zombie::Zombie(std::string str){
    this->_name = str;
    std::cout << "I am a zombie , my name is" << this->_name << " , I am alive" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "I am a zombie , my name is" << this->_name << " , I am dead" << std::endl;
}

void  Zombie::announce()
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}