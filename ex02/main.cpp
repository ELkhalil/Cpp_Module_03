/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/28 13:18:58 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap    fragtrap("Scavo");
    fragtrap.highFivesGuys();
    fragtrap.attack("Axton");
    fragtrap.takeDamage(3);
    fragtrap.beRepaired(5);
    fragtrap.attack("Bob");
    fragtrap.takeDamage(20);
    fragtrap.attack("Axton");
    return (0);
}