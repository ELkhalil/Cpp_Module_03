/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:08:54 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 18:39:32 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Diamond class constructors 
DiamondTrap::DiamondTrap    ( void )
{
    std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap ( std::string const& name ) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap Parametrized Constructor" << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints = 100;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap    ( void )
{
    std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap::DiamondTrap     ( DiamondTrap const& other )
{
    std::cout << "DiamondTrap Copy Constructor" << std::endl;
    (*this) = other;
}

// DiamonTrap Operators
DiamondTrap&     DiamondTrap::operator=( DiamondTrap const& other )
{
    std::cout << "DiamondTrap Copy Assignment operator" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void            DiamondTrap::whoAmI( void )
{
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}