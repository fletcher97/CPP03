#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No Name"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap created with default." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _ep(other._ep), _ad(other._ad)
{
	std::cout << "ClapTrap " << other._name << " copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap&
ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap " << this->_name << " assigned." << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;
	return *this;
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
