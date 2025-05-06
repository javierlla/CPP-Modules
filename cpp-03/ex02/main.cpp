/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:00:39 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/23 17:36:46 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    FragTrap frag("Fraggy");

    frag.attack("Enemy");

    frag.takeDamage(50);

    frag.beRepaired(30);

    frag.highFivesGuys();

    FragTrap fragCopy(frag);

    FragTrap fragAssigned;
    fragAssigned = frag;

    return 0;
}
