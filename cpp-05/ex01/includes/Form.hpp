/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:24:39 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 12:03:09 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
;    
public:
    Form();
    ~Form();
    Form(std::string name, const int gradeSign, const int gradeExecute);
    Form(Form &other);
    Form &operator=(const Form &other);

    std::string	getName() const;
	bool		getSigned() const;
	const int	getGradeSign() const;
	const int	getGradeExecute() const;
	void		beSigned(Bureaucrat &other);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Grade too high");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Grade too low");
            }
    };

};
std::ostream& operator<<(std::ostream &o, const Form &a);


#endif