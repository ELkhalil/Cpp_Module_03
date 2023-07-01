/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:25:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/01 16:10:00 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap1");
    clapTrap.attack("Target1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);

    ScavTrap scavTrap("ScavTrap1");
    scavTrap.attack("Target2");
    scavTrap.takeDamage(30);
    scavTrap.guardGate();
    scavTrap.beRepaired(5);

    FragTrap fragTrap("FragTrap1");
    fragTrap.attack("Target3");
    fragTrap.takeDamage(50);
    fragTrap.highFivesGuys();
    fragTrap.beRepaired(10);

    return 0;
}
