/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:03:39 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 17:18:33 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _nameA;
    Weapon &_weaponA;
public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif
/*por referencia siempre requiere un objeto no NULL
y humanA siempre tiene arma*/