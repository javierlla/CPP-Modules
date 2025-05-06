/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:24:36 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/07 12:20:42 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm() : _name("NoName"), _signed(false), _gradeToSign(5), _gradeToExecute(5)
{
    std::cout << "Form Default constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm::AForm(std::string name, const int gradeSign, const int gradeExecute) :
        _name(name), _signed(false), _gradeToSign(gradeSign), _gradeToExecute(gradeExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		std::cout << "Form " << _name << " parametrized constructor called" << std::endl; 
	}
		
}

AForm::AForm(AForm &other): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
        _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &a)
{
	if (this != &a)
	{
		_signed = a._signed;
	}
	return (*this);
}

std::string	AForm::getName() const
{
	return (_name);
}

bool		AForm::getSigned() const
{
	return (_signed);
}

int	AForm::getGradeSign() const
{
	return (_gradeToSign);
}

int	AForm::getGradeExecute() const
{
	return (_gradeToExecute);
}
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
	{
    throw GradeTooLowException();
    } 
	else
        _signed = true;
}

std::ostream& operator<<(std::ostream &o, const AForm &a)
{
    o << "Form " << a.getName() << " data:" << std::endl;
	o << "Signed?: " << a.getSigned() << std::endl;
	o << "Grade sign: " << a.getGradeSign() << std::endl;
	o << "Grade execute: " << a.getGradeExecute() << std::endl;
	return (o);
}