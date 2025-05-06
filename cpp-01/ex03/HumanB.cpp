/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:36:50 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/17 16:15:37 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    _nameB = name;
    _weaponB = NULL;
}
HumanB::~HumanB(){
    std::cout << "humanb destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weaponB = &weapon;
}

void HumanB::attack()
{
    if(_weaponB)
    {
        std::cout <<_nameB << " attacks with their " << _weaponB->getType() << std::endl;
    }
    else 
        std::cout << _nameB << " has no weapon" << std::endl;
}