#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    name = "Default";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    WriteLine("FragTrap Default constructed!");
}

FragTrap::FragTrap(string n) : ClapTrap(n) {
    name = n;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    WriteLine("FragTrap " + name + " constructed!");
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    WriteLine("FragTrap " + name + " copied!");
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    WriteLine("FragTrap " + name + " assigned!");
    return *this;
}

FragTrap::~FragTrap() {
    WriteLine("FragTrap " + name + " destroyed!");
}

void FragTrap::highFivesGuys(void) {
    WriteLine(name + " requests a positive high-five!");
}