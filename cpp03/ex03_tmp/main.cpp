#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
    FragTrap tmp( "tmp" );
    FragTrap tmp2( tmp );

    tmp.attack( "the air" );
    tmp.takeDamage( 10 );
    tmp.beRepaired( 10 );
    tmp.highFivesGuys();

    return (0);
}
