#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	newzombie = Zombie(name);
	newzombie.announce();
}