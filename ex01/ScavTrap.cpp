#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor" << std::endl;
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->_Name << " attack " << target;
    std::cout << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_Name << " have enterred in Gate keeper mode" << std::endl;
}