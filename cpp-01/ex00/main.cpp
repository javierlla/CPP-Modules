/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:27:29 by jllarena          #+#    #+#             */
/*   Updated: 2024/12/12 11:58:25 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    
//stack 
randomChump("stackzombie");

//heap
Zombie *heapzombie = newZombie("heapzombie");
heapzombie->announce();
delete heapzombie;
}