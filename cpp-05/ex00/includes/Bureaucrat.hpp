/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:02 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/05 13:01:29 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>


class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name, int i);
    Bureaucrat(Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    
    std::string     getName() const;
    int             getGrade() const;
    void			incrementGrade();
	void			decrementGrade();
		
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			} 
	};
		
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
	};
};
std::ostream& operator<<(std::ostream &o, const Bureaucrat &a);

#endif