#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("FragTrap1");
    FragTrap fragTrap2("FragTrap2");

    fragTrap.attack("FragTrap2");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);

    fragTrap.highFivesGuys();
    return 0;
}