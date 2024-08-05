#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        // void attack(std::string const &target);
        void highFivesGuys(void);
};