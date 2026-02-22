#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    WriteLine("Testing ClapTrap, ScavTrap, FragTrap, and DiamondTrap functionality");

    ClapTrap ct("Hero");
    ScavTrap st("Guardian");
    FragTrap ft("Fighter");
    DiamondTrap dt("Diamond");

    ct.attack("Enemy");
    st.attack("Intruder");
    ft.attack("Villain");
    dt.attack("Monster");

    ct.takeDamage(5);
    st.takeDamage(10);
    ft.takeDamage(15);
    dt.takeDamage(20);

    ct.beRepaired(3);
    st.beRepaired(5);
    ft.beRepaired(10);
    dt.beRepaired(15);

    st.guardGate();
    ft.highFivesGuys();
    dt.whoAmI();

    DiamondTrap dt2 = dt;
    dt2.whoAmI();

    DiamondTrap dt3;
    dt3 = dt;

    return 0;
}