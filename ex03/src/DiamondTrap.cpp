#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("No Name"), FragTrap("No Name")
{
	std::cout << "FragTrap created with default." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hp = FragTrap::default_hp;
	this->_ep = ScavTrap::default_ep;
	this->_ad = FragTrap::default_ad;
	std::cout << "DiamondTrap " << this->_name << " started." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name + "_clap_name"), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << other._name << " copied." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " stopped." << std::endl;
}

void
DiamondTrap::attack(const std::string& other)
{
	ScavTrap::attack(other);
}

void
DiamondTrap::whoAmI()
{
	std::cout << "I am " << ClapTrap::_name << " aka " << this->_name << std::endl;
}
