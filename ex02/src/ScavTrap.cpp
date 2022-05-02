#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "ScavTrap " << name << " initialized." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " removed." << std::endl;
}

void
ScavTrap::attack(const std::string& target)
{
	this->_ep--;
	std::cout << this->_name << " strikes " << target << " and does " << this->_ad << " damage. " << this->_ep << " EP left." << std::endl;
}

void
ScavTrap::guardGate()
{
	std::cout << this->_name << " is guarding a gate." << std::endl;
}
