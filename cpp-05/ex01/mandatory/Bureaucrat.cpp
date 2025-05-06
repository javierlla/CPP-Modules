/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:18:59 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 12:07:52 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noName"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << getName() << " destructor called" << std::endl;
}
    
Bureaucrat::Bureaucrat(std::string name, int i) : _name(name), _grade(i)
{
    if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
        std::cout << "Bureaucrat parametrized constructor called" << std::endl;
}
    
Bureaucrat::Bureaucrat(Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        if (other._grade < 1)
            throw GradeTooHighException();
        else if (other._grade > 150)
            throw GradeTooLowException();
        else
            _grade = other._grade; //name es const
    }
    return (*this);
}
std::string Bureaucrat::getName() const
{
    return _name;
}
int Bureaucrat::getGrade() const
{
    return _grade;
}
void Bureaucrat::incrementGrade()
{
    _grade--;
    if (_grade < 1)
    {
        throw GradeTooHighException();
    }
}
void	Bureaucrat::decrementGrade()
{
    _grade++;
    if(_grade > 150)
        throw GradeTooLowException();
}
std::ostream& operator<<(std::ostream &o, const Bureaucrat &a)
{
    o << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
    return (o);
}
void	Bureaucrat::signForm(Form &other)
{
try
{
	other.beSigned(*this);
	std::cout << "Bureaucrat " << getName() << " signed Form " << other.getName(); 
	std::cout << std::endl;
}
catch (Form::GradeTooLowException &e)
{
	std::cout << "Bureaucrat " << getName() << " couldn't sign Form " << other.getName();
	std::cout << " because " << e.what() << std::endl;
}
}