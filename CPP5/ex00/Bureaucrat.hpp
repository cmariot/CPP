/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:53 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 08:33:01 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{

	public:
	
		Bureaucrat(void);											// Constructeur par default
		Bureaucrat(std::string name, int grade);					// Constructeur par name et grade
		Bureaucrat(Bureaucrat const & copy);						// Constructeur par copie

		~Bureaucrat(void);											// Destructeur

		Bureaucrat const &	operator = (Bureaucrat const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	getName(void) const;							// Retourne _name
		int			getGrade(void) const;							// Retourne _grade

		void		incrementGrade(void);							// Fait -1 sur le grade (gain de pouvoir)
		void		decrementGrade(void);							// Fait +1 sur le grade (perte de pouvoir)

	private:

		std::string	const	_name;									// Nom du bureaucrate
		int					_grade;									// Grade du bureaucrate


	// Exception jetee si grade trop haut lors de la construction ou lors de l'incrementation
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Error: grade too high.");
			}
	} ;

	// Exception jetee si grade trop bas lors de la construction ou lors de l'incrementation
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Error: grade too low.");
			}
	} ;

} ;

// Surcharge de l'operateur <<
std::ostream & operator << (std::ostream & out, Bureaucrat const & rhs);

#endif

