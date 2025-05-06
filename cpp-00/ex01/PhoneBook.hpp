/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:01:27 by jllarena          #+#    #+#             */
/*   Updated: 2024/11/28 16:53:43 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip> // Para std::setw y std::right
#include <limits> // Para std::numeric_limits


#define MAX_CONTACTS 8

class Phonebook
{
private:
    Contact _phonebook[MAX_CONTACTS];
public:
    /*Constructor Destructor*/
    Phonebook();
    ~Phonebook();
    
    int add_contact(std::string add);
    int search_contact(std::string search);
};

#endif

