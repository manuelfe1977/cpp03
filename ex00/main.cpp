#include "ClapTrap.hpp"

int main(void)
{
	int	i = 10;
	ClapTrap a = ClapTrap("Manuelfe");
	ClapTrap b = ClapTrap("Otro");
	ClapTrap c = ClapTrap(a);
	ClapTrap d;
	d = b;

	while (i > 0)
	{
		a.attack("Otro");
		i--;
	}
	a.beRepaired(2);
	b.beRepaired(3);
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
	return 0;
}
