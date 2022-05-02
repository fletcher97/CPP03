#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap created with default." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "FragTrap " << name << " started." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other._name << " copied." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " stopped." << std::endl;
}

FragTrap&
FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap " << this->_name << " assigned." << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;
	return *this;
}

void
FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " high fives everyone around." << std::endl;
}
