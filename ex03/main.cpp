/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 18:57:10 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("DIAMO");

    diamondTrap.attack("Sparky");
    diamondTrap.takeDamage(15);
    diamondTrap.beRepaired(10);
    diamondTrap.attack("Human");
    diamondTrap.highFivesGuys();
    diamondTrap.guardGate();
    diamondTrap.whoAmI();
    return 0;
}
