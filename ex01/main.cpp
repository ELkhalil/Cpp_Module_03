/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 18:52:18 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap    scavtrap("Scavo");
    scavtrap.guardGate();
    scavtrap.attack("Alpha");
    scavtrap.takeDamage(7);
    scavtrap.beRepaired(12);
    scavtrap.attack("Bob");
    scavtrap.takeDamage(20);
    scavtrap.attack("Axton");
    return (0);
}