#include "ClapTrap.hpp"

int main() {
    WriteLine("Testing ClapTrap functionality");

    ClapTrap ct1("Hero");
    ClapTrap ct2("Villain");

    ct1.attack("Villain");
    ct2.takeDamage(5);
    ct2.beRepaired(3);

    ct1.takeDamage(10); 
    ct1.attack("Villain"); 

    ct2.beRepaired(5); 

    ClapTrap ct3 = ct2; 
    ct3.attack("Test");

    ClapTrap ct4;
    ct4 = ct1; 

    return 0;
}