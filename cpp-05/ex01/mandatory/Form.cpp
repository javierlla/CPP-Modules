/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:24:36 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 11:52:59 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form() : _name("NoName"), _signed(false), _gradeToSign(5), _gradeToExecute(5)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(std::string name, const int gradeSign, const int gradeExecute) :
        _name(name), _signed(false), _gradeToSign(gradeSign), _gradeToExecute(gradeExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		std::cout << "Form " << _name << " parametrized constructor called" << std::endl; 
	}
		
}

Form::Form(Form &other): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
        _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form &a)
{
	if (this != &a)
	{
		_signed = a._signed;
	}
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

bool		Form::getSigned() const
{
	return (_signed);
}

const int	Form::getGradeSign() const
{
	return (_gradeToSign);
}

const int	Form::getGradeExecute() const
{
	return (_gradeToExecute);
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
	{
    	throw GradeTooLowException();
    } 
	else
        _signed = true;
}
/*
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (_signed)
    {
        std::cout << "Form " << _name << " is already signed!" << std::endl;
        return;
    }
    if (bureaucrat.getGrade() > _gradeToSign)
    {
        throw GradeTooLowException();
    } 
    _signed = true;
}
*/
std::ostream& operator<<(std::ostream &o, const Form &a)
{
    o << "Form " << a.getName() << " data:" << std::endl;
	o << "Signed?: " << a.getSigned() << std::endl;
	o << "Grade sign: " << a.getGradeSign() << std::endl;
	o << "Grade execute: " << a.getGradeExecute() << std::endl;
	return (o);
}