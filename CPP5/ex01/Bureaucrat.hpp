/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:53 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 13:42:46 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{

	public:

		Bureaucrat(std::string name, int grade);					// Constructeur par default
		Bureaucrat(Bureaucrat const & copy);						// Constructeur par copie
		~Bureaucrat(void);											// Destructeur
		Bureaucrat const &	operator = (Bureaucrat const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(Form *form) const;

	private:

		std::string	_name;
		int			_grade;


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Bureaucrat exception: grade too high.");
			}
	} ;

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Bureaucrat exception: grade too low.");
			}
	} ;

} ;

std::ostream & operator << (std::ostream & out, Bureaucrat const & rhs);

#endif
