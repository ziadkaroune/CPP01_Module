#include "HumanA.hpp"


HumanA::HumanA(std::string name , Weapon &weapon) :_name(name) , _weapon(weapon)
{
    std::cout << " HumanA name's" << this->_name << " is alive with Wepon type : " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << " Human A names's " << this->_name << " is dead "; 
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
    return ;
}