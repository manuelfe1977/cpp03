#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Default constructor called without args" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	*this = clap;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &clap)
	{
		this->_name = clap._name;
		this->_hit_points = clap._hit_points;
		this->_energy_points = clap._energy_points;
		this->_attack_damage = clap._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
		std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap "<<this->_name <<" attacks " <<target<<" causing " << DAMAGE_POINTS << " points of damage!"<< std::endl;
	}
	else
		std::cout << "ClapTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap "<<this->_name <<" repairs itself, getting " <<amount<<" causing " << DAMAGE_POINTS << " hit points back!"<< std::endl;
	}
	else
		std::cout << "ClapTrap "<<this->_name <<" has no hit points or energy " <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= amount || this->_hit_points == 0)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "ClapTrap "<<this->_name <<" takes " <<amount<<" points of damage!"<< std::endl;
	std::cout << "ClapTrap "<<this->_name <<" has " <<this->_hit_points<<" left!"<< std::endl;
}
