/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:25:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/01 15:29:29 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap1");

    clapTrap.attack("Target1");    // ClapTrap ClapTrap1 attacks Target1, causing 0 points of damage!
    clapTrap.takeDamage(5);        // ClapTrap ClapTrap1 takes 5 points of damage!
    clapTrap.beRepaired(3);        // ClapTrap ClapTrap1 is repaired for 3 hit points.
    clapTrap.attack("Target2");    // ClapTrap ClapTrap1 attacks Target2, causing 0 points of damage!
    clapTrap.takeDamage(15);       // ClapTrap ClapTrap1 takes 15 points of damage!
    clapTrap.beRepaired(5);        // ClapTrap ClapTrap1 is repaired for 5 hit points.
    clapTrap.attack("Target3");    // ClapTrap ClapTrap1 can't attack. No hit points or energy points left.

    return 0;
}