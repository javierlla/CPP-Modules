/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:36:41 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/17 16:14:07 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : _nameA(name), _weaponA(weapon)  // Inicialización de _weaponA y _nameA (al ser por ref me obliga hacerlo asi)
{
}

HumanA::~HumanA(){
    std::cout << "humanA destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << _nameA << " attacks with their " << _weaponA.getType() << std::endl;
}
