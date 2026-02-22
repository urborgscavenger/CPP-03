#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    WriteLine("Testing ClapTrap, ScavTrap, and FragTrap functionality");

    ClapTrap ct("Hero");
    ScavTrap st("Guardian");
    FragTrap ft("Fighter");

    ct.attack("Enemy");
    st.attack("Intruder");
    ft.attack("Villain");

    ct.takeDamage(5);
    st.takeDamage(10);
    ft.takeDamage(15);

    ct.beRepaired(3);
    st.beRepaired(5);
    ft.beRepaired(10);

    st.guardGate();
    ft.highFivesGuys();

    ScavTrap st2 = st;
    st2.attack("Test");

    FragTrap ft2 = ft;
    ft2.highFivesGuys();

    ScavTrap st3;
    st3 = st;

    FragTrap ft3;
    ft3 = ft;

    return 0;
}