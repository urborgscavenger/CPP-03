#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap("Default"), ScavTrap("Default"), name("Default") {
    WriteLine("DiamondTrap Default constructed!");
}

DiamondTrap::DiamondTrap(string n) : ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n), name(n) {
    WriteLine("DiamondTrap " + name + " constructed!");
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
    WriteLine("DiamondTrap " + name + " copied!");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    WriteLine("DiamondTrap " + name + " assigned!");
    return *this;
}

DiamondTrap::~DiamondTrap() {
    WriteLine("DiamondTrap " + name + " destroyed!");
}

void DiamondTrap::whoAmI() {
    WriteLine("I am " + name + ", and my ClapTrap name is " + ClapTrap::name);
}