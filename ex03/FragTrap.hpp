/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:59:58 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/28 14:53:41 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap    ( void );
    FragTrap    ( std::string const& name );
    FragTrap    ( FragTrap const& other );
    ~FragTrap    ( void );
    
    FragTrap&    operator=( FragTrap const& other);
    void        highFivesGuys(void);
};

#endif