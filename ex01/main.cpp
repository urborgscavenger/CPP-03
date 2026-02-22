#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    WriteLine("Testing ClapTrap and ScavTrap functionality");

    ClapTrap ct("Hero");
    ScavTrap st("Guardian");

    ct.attack("Enemy");
    st.attack("Intruder");

    ct.takeDamage(5);
    st.takeDamage(10);

    ct.beRepaired(3);
    st.beRepaired(5);

    st.guardGate();

    ScavTrap st2 = st;
    st2.attack("Test");

    ScavTrap st3;
    st3 = st;

    return 0;
}