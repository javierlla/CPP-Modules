/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:27:19 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/14 17:26:55 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *heapzombie = zombieHorde(N, "zombie2");
    for (int i = 0; i < N; i++)
    {
        heapzombie[i].announce();
    }
    delete[] heapzombie;
}