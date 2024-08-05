#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavt1("ScavTrap1");
    ScavTrap scavt2("ScavTrap2");

    scavt1.attack("ScavTrap2");
    scavt1.takeDamage(23);
    scavt1.beRepaired(21);
    scavt1.guardGate();

    

    return 0;
}