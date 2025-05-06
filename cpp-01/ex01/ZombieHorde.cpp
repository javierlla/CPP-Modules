/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:17:06 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/16 12:41:01 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
        std::cout << "invalid number of zombies" << std::endl;
    Zombie* horde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    return horde;
}
