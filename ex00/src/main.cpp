#include "ClapTrap.hpp"

int main()
{
	ClapTrap a ("Clap1");

	a.attack("TrapClap");
	a.takeDamage(5);
	a.beRepaired(5);
	return 0;
}
