#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scap);
	ScavTrap &operator=(const ScavTrap &scap);
	void attack(const std::string &target);
	void guardGate();
	~ScavTrap();
};

#endif
