/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:55:51 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/14 17:32:17 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *nameptr = &name;
    std::string &nameref = name;

    std::cout << "Direccion de cadena: " << &name << std::endl;
    std::cout << "Direccion de stringPTR: " << &nameptr << std::endl;
    std::cout << "Direccion de cadenaREF: " << &nameref << std::endl;

    std::cout << "Valor de cadena: " << name << std::endl;
    std::cout << "Valor apuntado por stringPTR: " << *nameptr << std::endl;
    std::cout << "Valor apuntado por cadenaREF: " << nameref << std::endl;
}