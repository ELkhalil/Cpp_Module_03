/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:35:43 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 12:38:12 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//ScavTrap Constructors
ScavTrap::ScavTrap  ( void )
{
    std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap    ( std::string const& name ) : ClapTrap(name)
{
    std::cout << "ScavTrap Parametrized Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}
 
ScavTrap::ScavTrap  ( ScavTrap const& other )
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    (*this) = other;
}

ScavTrap::~ScavTrap ( void )
{
    std::cout << "ScavTrap Destructor called " << std::endl;
}

ScavTrap&    ScavTrap::operator=( ScavTrap const& other )
{
    std::cout << "ScavTrap Copy Assignement operator" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return(*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        if (this->_hitPoints <= 0)
            std::cout << "ScavTrap " << this->_name << " can't attack. No hit points left." << std::endl;
        else
            std::cout << "ScavTrap " << this->_name << " can't attack " << target << " No energy points left." << std::endl;
    }
}

void    ScavTrap::guardGate ( void )
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}