/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:47:05 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/08 17:41:25 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp" 

int main(void)
{

    Phonebook book;
    std::string input;
    while(true)
    {
        std::cout<< "Wellcome to the Phonebook\n";
        std::cout<< "---------------------------\n";
        std::cout<< "         USAGE\n";
        std::cout<< "ADD (add a new contact)\n";
        std::cout<< "SEARCH (search a contact)\n";
        std::cout<< "EXIT (exit program)\n";
        std::cout<< "---------------------------\n";
        std::cout<< "type here > ";
        std::cin >> input;
        //std::getline(std::cin, input);
        if (std::cin.eof()) //if eof/ctrl+D
		{
			std::cout << "you push Ctrl+D = eof = exit" << std::endl;
			break;
		}
        if (input == "EXIT")
            break ;
        else if (input == "SEARCH")
        {
            book.search_contact(input);
        }
        else if (input == "ADD")
        {
            book.add_contact(input);
        }
        else
        {
            std::cout << "input not valid" << std::endl;
            break ;
        }
    }
    std::cout << "program finished" << std::endl;
    return (0);
}