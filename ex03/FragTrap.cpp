#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Default FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage= 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage= 20;
	std::cout << "FragTrap default constructor called" << std::endl;
	std::cout << "FragTrap " <<this->_name <<" creado" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scap):ClapTrap(scap)
{
	std::cout << "FragTrap " <<this->_name <<" ha sido copiado" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &scap)
{
	ClapTrap::operator=(scap);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called " << this->_name << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "FragTrap "<<this->_name <<" attacks " <<target<<" causing " << DAMAGE_POINTS << " points of damage!"<< std::endl;
	}
	else
		std::cout << "FragTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "FragTrap "<<this->_name <<" high-fives"<< std::endl;
	}
	else
		std::cout << "FragTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

