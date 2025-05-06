/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:55:31 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/14 17:49:28 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::complain(std::string level)
{
    //declaro complains que apunta a las funciones de la clase harl
    void (Harl::*complains[])(void) = {
        &Harl::debug, //direcciones de las funciones
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*complains[i])();
            return;
        }
    }
    std::cout << "Invalid level: " << level << std::endl;
}
