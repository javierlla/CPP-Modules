/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:39:39 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/23 16:07:39 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
   
    ClapTrap ct1("Juan");

    ct1.attack("Alex");
    ct1.attack("Izan");

    ct1.takeDamage(5);

    ct1.beRepaired(3);

    ClapTrap ct2(ct1);

    ClapTrap ct3;
    ct3 = ct1;

    ct2.attack("Ana");
    ct3.takeDamage(2);

    return 0;
}
