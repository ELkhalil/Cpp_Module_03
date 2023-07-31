/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 11:35:21 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap    scavtrap("Scavo");
    scavtrap.guardGate();
    scavtrap.attack("Axton");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(5);
    scavtrap.attack("Bob");
    scavtrap.takeDamage(20);
    scavtrap.attack("Axton");
    return (0);
}