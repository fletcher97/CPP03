#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _hp;
	int _ep;
	int _ad;

	ClapTrap();
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void printStats() const;
};

#endif // CLAPTRAP_HPP
