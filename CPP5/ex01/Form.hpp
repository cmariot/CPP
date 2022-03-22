/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:52:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 14:18:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{

	public:

		Form(std::string name, int signature_grade, int execution_grade);	// Constructeur par default
		Form(Form const & copy);											// Constructeur par copie
		~Form(void);														// Destructeur
		Form const &	operator = (Form const & rhs);						// Surcharge d'opérateur d’affectation

		std::string		getName(void) const;
		bool			getSignature(void) const;
		int				getSignatureGrade(void) const;
		int				getExecutionGrade(void) const;

		void			beSigned(Bureaucrat *bureaucrat);

		void			setSignature(void);

	private:

		std::string	const	_name;
		bool				_signed;
		int const			_signature_grade;
		int const			_execution_grade;


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Form exception: grade too high.");
			}
	} ;


	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Form exception: grade too low.");
			}
	} ;


} ;

std::ostream & operator << (std::ostream & out, Form const & rhs);

#endif

