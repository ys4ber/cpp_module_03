#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor Called " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Called " << std::endl;
    _Name = name;
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "Copy Constructor Called " << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    _Name = other._Name;
    _Hitpoints = other._Hitpoints;
    _Energy_points = other._Energy_points;
    _Attack_damage = other._Attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Distructor Called " << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _Name << " attack " << target ;
    std::cout << ", causing " << _Attack_damage << " points of damage!" << std::endl;

    _Energy_points--;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_Hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is already dead!" << std::endl;
        return;
    }
    _Hitpoints -= amount;
    if (_Hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is dead!" << std::endl;
        return;
    }                                                                                                                                                                                                                                                      

    std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage!" << std::endl;
}

int ft_min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}   

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " has no energy points left!" << std::endl;
        return;
    }
    if (_Hitpoints >= 10)
    {
        _Hitpoints = 10;
    }
    if (_Hitpoints <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is already dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _Name << " was repaired by " << amount << " points!" << std::endl;
    _Energy_points--;
    
}

std::string ClapTrap::getName()
{
    return _Name;
}

int ClapTrap::getHitpoints()
{
    return _Hitpoints;
}   

int ClapTrap::getEnergyPoints()
{
    return _Energy_points;
}

int ClapTrap::getAttackDamage()
{
    return _Attack_damage;
}
