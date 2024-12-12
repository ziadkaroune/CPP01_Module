#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(NULL)
{
    std::cout << " HumanB name's : " << this->_name << " is alive " <<std::endl;
}
HumanB::~HumanB()
{
    std::cout << " HumanB name's : " << this->_name << " is dead " <<std::endl;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " Attacks " << this->_weapon->getType() << std::endl;
    return;
}
 void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon; 
 }
