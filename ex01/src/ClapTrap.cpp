#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

void
ClapTrap::attack(const std::string& target)
{
	this->_ep--;
	std::cout << this->_name << " attacks " << target << " and does " << this->_ad << " damage. " << this->_ep << " EP left." << std::endl;
}

void
ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;
	std::cout << this->_name << " takes " << amount << " damage. He has " << this->_hp << " HP left." << std::endl;
}

void
ClapTrap::beRepaired(unsigned int amount)
{
	this->_ep--;
	this->_hp += amount;
	std::cout << this->_name << " was repaired for " << amount << " HP. He has " << this->_hp << " HP and " << this->_ep << " EP left." << std::endl;
}
