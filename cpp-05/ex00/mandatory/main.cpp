/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:04 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 11:29:51 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Jose;
		std::cout << Jose;

		Bureaucrat Javi("Javi", 3);
		Javi.incrementGrade(); 
		std::cout << Javi;

		Bureaucrat Marcelo("Marcelo", 151); 
		std::cout << Marcelo;
	}
	catch (Bureaucrat::GradeTooHighException &e)
    {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
    {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
