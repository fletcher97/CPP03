#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "FragTrap " << name << " started." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " stopped." << std::endl;
}

void
FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " high fives everyone around." << std::endl;
}
