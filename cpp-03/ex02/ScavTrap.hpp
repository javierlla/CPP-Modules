/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:05:38 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/23 17:21:16 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();

    ScavTrap(const std::string& name);

    ScavTrap(const ScavTrap& other);

    ScavTrap& operator=(const ScavTrap& other);

    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif
