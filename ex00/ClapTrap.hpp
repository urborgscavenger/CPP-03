#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef std::string string;

inline void WriteLine(const string& message) {
    std::cout << message << std::endl;
}

inline string toString(int value) {
    if (value == 0) return "0";
    string result;
    bool negative = value < 0;
    if (negative) value = -value;
    while (value > 0) {
        result = char('0' + value % 10) + result;
        value /= 10;
    }
    if (negative) result = "-" + result;
    return result;
}

class ClapTrap {
private:
    string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif