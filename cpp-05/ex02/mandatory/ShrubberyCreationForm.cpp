/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:10:55 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/07 11:29:31 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default constructor for ShrubberyCreationForm called";
	std::cout << std::endl;
} 

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor for ShrubberyCreationForm called with param";
	std::cout << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor for ShrubberyCreationForm called";
	std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) :
AForm(a.getName(), a.getGradeSign(), a.getGradeExecute()), _target(a._target)
{
	std::cout << "Copy constructor for ShrubberyCreationForm called";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	(void) a;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getGradeExecute() <= executor.getGrade())
		throw AForm::GradeTooLowException();
	else if (getSigned() == false)
		throw AForm::NotSignedException();
	else
	{
		std::cout << "Bureaucrat " << executor.getName() << " executed AForm " << getName(); 
		std::cout << std::endl;
		std::ofstream file((_target + "_shrubery").c_str());
		file << "			 A			    " << std::endl;
		file << "	  |      |        |      " << std::endl;
		file << "	  B	     C        D		" << std::endl;
		file << "   |  |   |   |   |  |  |   " << std::endl;
		file << "   E  F   G   H   I  J  K   " << std::endl;
		file << "		   |	   |		    " << std::endl;
		file << "		   L	   M		    " << std::endl;
	}
}