#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &scap);
	FragTrap &operator=(const FragTrap &scap);
	void attack(const std::string &target);
	void highFivesGuys();
	~FragTrap();
};

#endif
