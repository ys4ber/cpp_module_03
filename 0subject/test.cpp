#include <iostream>
#include <string>

class animal
{
    private:
        std::string _type;
        std::string _name;
    public:
        animal()
        {
            std::cout << "animal constructor" << std::endl;
            _type = "unknown";
            _name = "unknown";
        }
        animal(const animal &other)
        {
            std::cout << "animal copy constructor" << std::endl;
            _type = other._type;
            _name = other._name;
        }
        animal &operator=(const animal &other)
        {
            std::cout << "animal assignation operator" << std::endl;
            _type = other._type;
            _name = other._name;
            return *this;
        }
        ~animal()
        {
            std::cout << "animal destructor" << std::endl;
        }
        void setType(std::string type)
        {
            _type = type;
        }
        void setName(std::string name)
        {
            _name = name;
        }
        std::string getType()
        {
            return _type;
        }
        std::string getName()
        {
            return _name;
        }
};


class Cat : public animal
{
    private:
        std::string _sound;
    public:
        void setSound(std::string sound)
        {
            _sound = sound;
        }
        std::string getSound()
        {
            return _sound;
        }
};

int main()
{
    Cat cat1;
    cat1.setType("Mammal");
    cat1.setName("Kitty");
    cat1.setSound("Meow");

    Cat cat2 = cat1;
    cat2.setName("Tommy");

    // exit(0);

    std::cout << "Cat 1: " << cat1.getName() << " " << cat1.getType() << " " << cat1.getSound() << std::endl;
    std::cout << "Cat 2: " << cat2.getName() << " " << cat2.getType() << " " << cat2.getSound() << std::endl;
    return 0;
}