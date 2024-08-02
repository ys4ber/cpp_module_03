#include "ClapTrap.hpp"
int main() {
    ClapTrap clapTrap("*ClapTrap*");

    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10); 
    clapTrap.beRepaired(10); 

    return 0;
}