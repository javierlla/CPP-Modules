/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:24:39 by jllarena          #+#    #+#             */
/*   Updated: 2025/02/11 12:34:28 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
;    
public:
    AForm();
    ~AForm();
    AForm(std::string name, const int gradeSign, const int gradeExecute);
    AForm(AForm &other);
    AForm &operator=(const AForm &other);

    std::string	getName() const;
	bool		getSigned() const;
	int	        getGradeSign() const;
	int	        getGradeExecute() const;
	void		beSigned(Bureaucrat &other);
    virtual void 	execute(Bureaucrat const &executor) const =0;

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
    
    class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Not signed");
			}
	};

};
std::ostream& operator<<(std::ostream &o, const AForm &a);


#endif
