/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:55:40 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 16:15:56 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

//stack
void randomChump(std::string name)
{
Zombie myzombistack(name);
myzombistack.announce();
}
/*
creo un objeto en el stack llamado myzombistack,
despues se destruye automaticamente al salir de la funcion.
*/