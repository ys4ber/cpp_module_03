#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Fragtrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Fragtrap params constructor called" << std::endl;
    _Name = name;
    _Hitpoints = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _Name << " high fives guys" << std::endl;
}
