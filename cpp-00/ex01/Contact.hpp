/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:19:05 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/10 10:53:18 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> //cout, cin, endl
#include <string> //.substr(), .lenght()
#include <iomanip> // Para std::setw
#include <codecvt> // Para manejar caracteres UTF-8

class Contact
{
    private:
    /*ATRIBUTOS o variables*/
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        /*constructor y destructor(funcion para incializar atributos)*/
        Contact();
        ~Contact();
        
        /*METODOS o funciones*/ /*SETTERS*/
        void set_first_name(const std::string &firstname);
        void set_last_name(const std::string &lastname);
        void set_nickname(const std::string &nickname);
        void set_phone_number(const std::string &phone_number);
        void set_darksecret(const std::string &darksecret);
        /*GETTERS*/
        std::string get_first_name()const;
        std::string get_last_name()const;
        std::string get_nickname()const;
        std::string get_number_phone()const;
        std::string get_darksecret()const;
        
};

# endif
