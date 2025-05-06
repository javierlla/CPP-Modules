/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:17:04 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/16 12:36:21 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _privatename = "unnamed";
}

Zombie::Zombie(const std::string &name)
{
    _privatename = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _privatename << " is destroyed.\n";
}

void Zombie::announce()const
{
    std::cout << "Zombie " << _privatename << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setname(const std::string &name)
{
    _privatename = name;
}