/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:16 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/27 15:30:44 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap claptrap("Jack");

    claptrap.attack("Axton");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("Bob");
    claptrap.takeDamage(20);
    claptrap.attack("Axton");
    return (0);
}