/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:35:41 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 12:07:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap    ( void );
    ScavTrap    ( std::string const& name );
    ScavTrap    ( ScavTrap const& other );
    ~ScavTrap   ( void );

    ScavTrap&   operator=( ScavTrap const& other );
    void        attack( const std::string& target );
    void        guardGate( void );
};

#endif