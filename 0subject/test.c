#include <iostream>
#include <string>

class ClapTrap {
public:
    ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
        std::cout << "ClapTrap " << name << " constructed!" << std::endl;
    }

    ~ClapTrap() {
        std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
    }

    void attack(const std::string& target) {
        if (energyPoints <= 0) {
            std::cout << "ClapTrap " << name << " has no energy points left!" << std::endl;
            return;
        }

        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }

    void takeDamage(unsigned int amount) {
        if (hitPoints <= 0) {
            std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
            return;
        }

        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        if (hitPoints <= 0) {
            std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        }
    }

    void beRepaired(unsigned int amount)
    {
        if (energyPoints <= 0)
        {
            std::cout << "ClapTrap " << name << " has no energy points left!" << std::endl;
            return;
        }

        hitPoints = std::min(hitPoints + amount, 10); // Ensure hit points don't exceed max
        std::cout << "ClapTrap " << name << " was repaired by " << amount << " points!" << std::endl;
        energyPoints--;
    }

private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};
