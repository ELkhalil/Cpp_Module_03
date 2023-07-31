/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 18:53:58 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap    fragtrap("Frago");
    fragtrap.highFivesGuys();
    fragtrap.attack("Beta");
    fragtrap.takeDamage(3);
    fragtrap.beRepaired(5);
    fragtrap.attack("EPSILON");
    fragtrap.takeDamage(20);
    fragtrap.attack("SARI");
    return (0);
}