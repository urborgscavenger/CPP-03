#include "ClapTrap.hpp"

void WriteLine(const string& message) {
    std::cout << message << std::endl;
}

string toString(int value) {
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

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    WriteLine("Default ClapTrap constructed!");
}

ClapTrap::ClapTrap(string n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0) {
    WriteLine("ClapTrap " + name + " constructed!");
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    WriteLine("ClapTrap " + name + " copied!");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    WriteLine("ClapTrap " + name + " assigned!");
    return *this;
}

ClapTrap::~ClapTrap() {
    WriteLine("ClapTrap " + name + " destroyed!");
}

void ClapTrap::attack(const string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        WriteLine(name + " attacks " + target + ", causing " + toString(attackDamage) + " points of damage!");
        energyPoints--;
    } else {
        WriteLine(name + " cannot attack due to insufficient hit points or energy!");
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    WriteLine(name + " takes " + toString(amount) + " points of damage!");
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0 && energyPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        WriteLine(name + " is repaired for " + toString(amount) + " points!");
    } else {
        WriteLine(name + " cannot be repaired due to insufficient hit points or energy!");
    }
}