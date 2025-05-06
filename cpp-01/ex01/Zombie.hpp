/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:28:08 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 16:28:09 by jllarena         ###   ########.fr       */
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
    Zombie();
    Zombie(const std::string& construct);
    ~Zombie();

    /*METODOS*/
    void announce()const;
    void setname(const std::string &name);
};
Zombie* zombieHorde(int N, std::string name);
#endif