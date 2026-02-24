
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

#define DAMAGE_POINTS 1

class ClapTrap
{
private:
	std::string	_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
public:
	ClapTrap();

	ClapTrap(std::string name);

	ClapTrap(const ClapTrap &clap);

	ClapTrap &operator=(const ClapTrap &clap);

	~ClapTrap();

	void attack(const std::string &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};

#endif
