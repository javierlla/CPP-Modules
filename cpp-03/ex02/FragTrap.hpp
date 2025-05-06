/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:58:13 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/23 17:22:09 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap();

    FragTrap(const std::string& name);

    FragTrap(const FragTrap& other);

    FragTrap& operator=(const FragTrap& other);

    ~FragTrap();


    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif
