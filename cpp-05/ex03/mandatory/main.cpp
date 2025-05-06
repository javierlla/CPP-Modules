/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:04 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 16:06:15 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("Robotomy request");
	delete rrf;
	rrf = someRandomIntern.makeForm("Presidential pardon");
	delete rrf;
	rrf = someRandomIntern.makeForm("Shrubbery creation");
	delete rrf;
	rrf = someRandomIntern.makeForm("hola");
	/*
	try
	{
		std::cout << std::endl;
		std::cout << "----------Instantiate classes-------------" << std::endl;
		Bureaucrat Mauro("Marcos", 150);
		std::cout << Mauro << std::endl;

		Bureaucrat Jose("Jose", 4);
		std::cout << Jose << std::endl;

		//AForm Javi;
		ShrubberyCreationForm	form1("Shrubber");
		RobotomyRequestForm		form2("Jesus");
		PresidentialPardonForm	form3("Javi");
		std::cout << std::endl;
	
		std::cout << "----------ShrubberyCreationForm-------------" << std::endl;
		Mauro.signAForm(form1);
		Jose.signAForm(form1);
		Mauro.executeForm(form1);
		Jose.executeForm(form1);
		std::cout << std::endl;
		
		std::cout << "----------RobotomyRequestForm-------------" << std::endl;
		Jose.executeForm(form2);
		Jose.signAForm(form2);
		Jose.executeForm(form2);
		Jose.executeForm(form2);
		Jose.executeForm(form2);
		Jose.executeForm(form2);
		std::cout << std::endl;
		
		std::cout << "----------PresidentialPardonForm-------------" << std::endl;
		Jose.signAForm(form3);
		Jose.executeForm(form3);
		std::cout << std::endl;

		std::cout << "----------Destructors-------------" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat could not be created because " << e.what();
		std::cout << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat could not be created because " << e.what();
		std::cout << std::endl;
	}
	return (0);*/
}

