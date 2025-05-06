/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:36:36 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/16 15:34:20 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
    _privatename = type;
}
Weapon::~Weapon(){
    std::cout << "weapon destroyed" << std::endl;
}

void Weapon::setType(const std::string &name)
{
    _privatename = name;
}

std::string Weapon::getType() const
{
    return _privatename;
}

