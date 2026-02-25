#include "FragTrap.hpp"

int main(void)
{
	int	i = 10;

	FragTrap a = FragTrap("Manuelfe");
	FragTrap b = FragTrap("Otro");
	FragTrap c = FragTrap(a);
	FragTrap d;

	a.highFivesGuys();
	while (i > 0)
	{
		a.attack("Otro");
		i--;
	}
	a.beRepaired(2);
	a.highFivesGuys();
	b.highFivesGuys();
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
