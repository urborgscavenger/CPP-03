#include "ClapTrap.hpp"

int main() {
    WriteLine("Testing ClapTrap functionality");

    ClapTrap ct1("Hero");
    ClapTrap ct2("Villain");

    ct1.attack("Villain");
    ct2.takeDamage(5);
    ct2.beRepaired(3);

    ct1.takeDamage(10); // Should die
    ct1.attack("Villain"); // Should fail

    ct2.beRepaired(5); // Should work

    ClapTrap ct3 = ct2; // Copy
    ct3.attack("Test");

    ClapTrap ct4;
    ct4 = ct1; // Assignment

    return 0;
}