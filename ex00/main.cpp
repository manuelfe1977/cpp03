#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("Manuelfe");
	ClapTrap b = ClapTrap("Otro");
	ClapTrap c = ClapTrap(a);
	ClapTrap d;
	d = b;

	return 0;
}
