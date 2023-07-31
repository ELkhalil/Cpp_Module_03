/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:59:28 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/31 12:01:38 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap    ( void );
    ClapTrap    ( std::string const& name );
    ClapTrap    ( ClapTrap const& other );
    ~ClapTrap   ( void );

    ClapTrap&   operator=( ClapTrap const& other );
    void        attack( const std::string& target );
    void        takeDamage( unsigned int amount );
    void        beRepaired ( unsigned int amount );
private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
};

#endif