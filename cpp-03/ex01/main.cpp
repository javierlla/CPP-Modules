/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:47:02 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/23 16:52:52 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("superjuan");

    scav.attack("jaime");

    scav.takeDamage(30);
    
    scav.beRepaired(20);

    scav.guardGate();

    ScavTrap scavCopy(scav);

    ScavTrap scavAssigned;
    scavAssigned = scav;

    return 0;
}
