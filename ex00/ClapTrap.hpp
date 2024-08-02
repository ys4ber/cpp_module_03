#pragma once

#include <iostream>
#include <string>


class ClapTrap
{
    private:
        std::string _Name;
         int _Hitpoints;
         int _Energy_points;
         int _Attack_damage;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &other);
        ClapTrap &operator=(ClapTrap const &other);
        ~ClapTrap();
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string  getName();
        int getHitpoints();
        int getEnergyPoints();
        int getAttackDamage();
};