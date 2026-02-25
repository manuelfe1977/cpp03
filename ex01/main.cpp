#include "ScavTrap.hpp"

int main(void)
{
	int	i = 10;

	ScavTrap a = ScavTrap("Manuelfe");
	ScavTrap b = ScavTrap("Otro");
	ScavTrap c = ScavTrap(a);
	ScavTrap d;

	a.guardGate();
	while (i > 0)
	{
		a.attack("Otro");
		i--;
	}
	a.beRepaired(2);
	a.guardGate();
	b.beRepaired(3);
	b.guardGate();
	while (i < 5)
	{
		b.takeDamage(3);
		i++;
	}
	b.attack("Manuelfe");
	b.beRepaired(3);
	c.beRepaired(3);
	i = 0;
	while (i < 5)
	{
		c.takeDamage(3);
		i++;
	}
	c.attack("Manuelfe");
	c.beRepaired(3);

	return (0);
}
