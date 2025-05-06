/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:10:52 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/07 11:30:13 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default constructor for RobotomyRequestForm called";
	std::cout << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Constructor for RobotomyRequestForm called with param";
	std::cout << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor for RobotomyRequestForm called";
	std::cout << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) :
AForm(a.getName(), a.getGradeSign(), a.getGradeExecute()), _target(a._target)
{
	std::cout << "Copy constructor for RobotomyRequestForm called";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
	(void) a;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getGradeExecute() <= executor.getGrade())
		throw AForm::GradeTooLowException();
	else if (getSigned() == false)
		throw AForm::NotSignedException();
	else
	{
		std::cout << "Bureaucrat " << executor.getName() << " executed AForm " << getName(); 
		std::cout << std::endl;
		static size_t i;
	
		if (i % 2 == 0)
		{
			std::cout << _target << " has been succesfully robotomized";
			std::cout << std::endl;
			i++;
		}
		else
		{
			std::cout << _target << " robotomy failed";
			std::cout << std::endl;
			i++;
		}
	}
}