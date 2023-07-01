/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:26:18 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/01 16:15:14 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ){}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called. Name: " << name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called. Name: " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
        if (hitPoints > 0 && energyPoints > 0) {
            energyPoints--;
            std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        } else {
            std::cout << "ClapTrap " << name << " can't attack. No hit points or energy points left." << std::endl;
        }
}

void ClapTrap::takeDamage(unsigned int amount) {
        if (hitPoints > 0) {
            hitPoints -= amount;
            std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
            if (hitPoints <= 0) {
                std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
            }
        } else {
            std::cout << "ClapTrap " << name << " is already destroyed." << std::endl;
        }
    }

void ClapTrap::beRepaired(unsigned int amount) {
        if (hitPoints > 0) {
            hitPoints += amount;
            std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points." << std::endl;
        } else {
            std::cout << "ClapTrap " << name << " is destroyed and can't be repaired." << std::endl;
        }
}
