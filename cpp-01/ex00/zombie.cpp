/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:04:31 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 16:07:26 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(const std::string& name)
{
    _privatename = name;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << _privatename << " destroyed" << std::endl;
}

void Zombie::announce()const
{
    std::cout << _privatename << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
