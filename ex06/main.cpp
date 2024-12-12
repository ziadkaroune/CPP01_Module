#include "Harl.hpp"

int main(int ac , char **av)
{
    if(ac == 2)
    {
         Harl Harl;
         Harl.complain(av[1]);
    }
   else{
    std::cout << "Error Arguments"  <<std::endl;
   }


    return 0;
}