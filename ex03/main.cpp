/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/28 14:55:52 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
    // Create a DiamondTrap object
    DiamondTrap diamondTrap("Sparky");

    // Test the attack() function inherited from ScavTrap
    diamondTrap.attack("Target");

    // Test the takeDamage() function inherited from FragTrap
    diamondTrap.takeDamage(15);

    // Test the beRepaired() function inherited from FragTrap
    diamondTrap.beRepaired(10);

    // Test the attack() function inherited from ScavTrap
    diamondTrap.attack("Another Target");

    // Test the whoAmI() function specific to DiamondTrap
    diamondTrap.whoAmI();

    return 0;
}
