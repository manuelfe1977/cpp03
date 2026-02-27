#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Default_ScavTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage= 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage= 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
	std::cout << "ScavTrap " <<this->_name <<" creado" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scap):ClapTrap(scap)
{
	std::cout << "ScavTrap " <<this->_name <<" ha sido copiado" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scap)
{
	ClapTrap::operator=(scap);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called " << this->_name << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap "<<this->_name <<" attacks " <<target<<" causing " << DAMAGE_POINTS << " points of damage!"<< std::endl;
	}
	else
		std::cout << "ScavTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ScavTrap "<<this->_name <<" is now in Gate keeper mode"<< std::endl;
	}
	else
		std::cout << "ScavTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

