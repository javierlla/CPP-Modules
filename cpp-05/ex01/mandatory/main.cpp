/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:04 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/06 13:16:08 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
    try
	{
        Bureaucrat jose("Jose", 4);
        std::cout << jose << std::endl;

        Bureaucrat mauro("Mauro", 150);
        std::cout << mauro << std::endl;

        Form paper("PAPER", 5, 5);
        std::cout << paper << std::endl;
        
        jose.signForm(paper);
        std::cout << paper << std::endl;

        mauro.signForm(paper);

    }
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;	
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}

