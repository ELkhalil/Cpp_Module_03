/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:34 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/28 14:51:51 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ClapTrap Constructors
ClapTrap::ClapTrap  ( void )
{
    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap  (std::string const& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
     std::cout << "ClapTrap Parametrized constructor" << std::endl;
}

ClapTrap::ClapTrap  (ClapTrap const& other)
{
    std::cout << "ClapTrap Copy Constructor" << std::endl;
    (*this) = other;
}

ClapTrap::~ClapTrap   ( void )
{
    std::cout << "ClapTrap Destructor" << std::endl;
}

// ClapTrap Operators Overload
ClapTrap&    ClapTrap::operator=(ClapTrap const& other)
{
    std::cout << "ClapTrap Copy Assignement operator" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

// Member Functions
void    ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        if (this->_hitPoints <= 0)
            std::cout << "ClapTrap " << this->_name << " can't attack " << target << " No hit points left." << std::endl;
        else
            std::cout << "ClapTrap " << this->_name << " can't attack " << target << " No energy points left." << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " lost " << amount << " points of damage! " << std::endl;
        this->_energyPoints--;
    }
    else 
        std::cout << "ClapTrap " << this->_name << " can't be damaged : Not Enough Health Points" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints += amount;
       std::cout << "ClapTrap " << this->_name << " Repaired " << amount << " Hit Points! " << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired : Not Enough Health Points" << std::endl;
}