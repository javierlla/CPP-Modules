/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:30:01 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 16:30:02 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _privatename;
public:
    Zombie(const std::string& name);
    ~Zombie();

    /*METODOS*/
    void announce()const;
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
#endif