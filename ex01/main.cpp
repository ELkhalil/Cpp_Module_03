/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:25:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/01 16:04:13 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap1");
    clapTrap.attack("Target1");     // ClapTrap ClapTrap1 attacks Target1, causing 0 points of damage!
    clapTrap.takeDamage(5);         // ClapTrap ClapTrap1 takes 5 points of damage!
    clapTrap.beRepaired(3);         // ClapTrap ClapTrap1 is repaired for 3 hit points.

    ScavTrap scavTrap("ScavTrap1");
    scavTrap.attack("Target2");     // ScavTrap ScavTrap1 attacks Target2, causing 20 points of damage!
    scavTrap.takeDamage(30);        // ScavTrap ScavTrap1 takes 30 points of damage!
    scavTrap.guardGate();           // ScavTrap ScavTrap1 is now in Gatekeeper mode.
    scavTrap.beRepaired(5);         // ScavTrap ScavTrap1 is repaired for 5 hit points.

    return 0;
}
