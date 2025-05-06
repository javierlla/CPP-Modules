/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:14:50 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 16:11:19 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern& Intern::operator=(const Intern &other)
{
	(void) other;
	return (*this);
}

static AForm* makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm* makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string nameForm, std::string target)
{
	size_t	i = 0;

	std::string forms[3] = {
		"Shrubbery creation",
		"Robotomy request",
		"Presidential pardon",
	};

	AForm* (*newForm[3]) (std::string target) = {
		&makeShrubberyCreationForm,
		&makeRobotomyRequestForm,
		&makePresidentialPardonForm,
	};
	while (i < 3)
	{
		if (nameForm == forms[i])
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return newForm[i](target);
		}
		i++;
	}
	std::cout << "Intern could not create " << nameForm;
	std::cout << " because it does not exist" << std::endl;
	return (NULL);
}