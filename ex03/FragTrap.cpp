/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:00:08 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/28 14:53:18 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// FragTrap constructors
FragTrap::FragTrap    ( void )
{
    std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap    ( std::string const& name ) : ClapTrap(name)
{
    std::cout << "FragTrap Parametrized Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap    ( FragTrap const& other ) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor" << std::endl;
    (*this) = other;
}

FragTrap::~FragTrap    ( void )
{
    std::cout << "FragTrap Destructor" << std::endl;
}

// FragTrap operators 
FragTrap& FragTrap::operator=( FragTrap const& other)
{
    std::cout << "FragTrap Copy Assignement operator" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is in the gate any High five from anyone?" << std::endl;
}