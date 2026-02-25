#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    name = "Default";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    WriteLine("ScavTrap Default constructed!");
}

ScavTrap::ScavTrap(string n) : ClapTrap(n) {
    name = n;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    WriteLine("ScavTrap " + name + " constructed!");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    WriteLine("ScavTrap " + name + " copied!");
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    WriteLine("ScavTrap " + name + " assigned!");
    return *this;
}

ScavTrap::~ScavTrap() {
    WriteLine("ScavTrap " + name + " destroyed!");
}

void ScavTrap::attack(const string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        WriteLine(name + " attacks " + target + ", causing " + toString(attackDamage) + " points of damage!");
        energyPoints--;
    } else {
        WriteLine(name + " cannot attack due to insufficient hit points or energy!");
    }
}

void ScavTrap::guardGate() {
    WriteLine(name + " is now gate keeping!");
}