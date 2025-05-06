/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:36:47 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 17:19:14 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _nameB;
    Weapon *_weaponB;
public:
    HumanB(const std::string &name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif

/*con un ptr puedo asignar el arma despues de la
creacion del huimanB*/