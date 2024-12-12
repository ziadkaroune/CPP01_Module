#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void Harl::debug(void)
{
    std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
    return;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years"
    << "whereas you started working here since last month." << std::endl; 
    return;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
    return;
}

  void Harl::complain( std::string level )
  {
    int i;
    i = 0;
    void   (Harl::*ptr[4])(void) = {&Harl::debug , &Harl::info , &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO" , "WARNING" , "ERROR" };
 
    while(i < 4)
    {
        if(level == levels[i])
        {
            std::cout << "[" << level << "]" <<std::endl;
            (this->*ptr[i])();
            while(++i && i < 4)
            {
                std::cout << "[" << levels[i] << "]" <<std::endl;
                (this->*ptr[i])();
            }
            break;

        }
        i++;
    }
    if(level.compare(levels[3]))
        std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl ;

    return;
  }