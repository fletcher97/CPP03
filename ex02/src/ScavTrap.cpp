#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap created with default." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "ScavTrap " << name << " initialized." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << other._name << " copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " removed." << std::endl;
}

ScavTrap&
ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap " << this->_name << " assigned." << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;
	return *this;
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
