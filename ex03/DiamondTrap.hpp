/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:08:13 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 13:37:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap     ( void );
    DiamondTrap     ( std::string const& name );
    ~DiamondTrap    ( void );
    DiamondTrap     ( DiamondTrap const& other );

    DiamondTrap&    operator=( DiamondTrap const& other );
    void            attack( const std::string& target );
    void            whoAmI( void );
private:
    std::string     _name;
};
#endif