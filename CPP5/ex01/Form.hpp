/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:52:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/15 08:37:54 by cmariot          ###   ########.fr       */
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

		Form(void);															// Constructeur par default
		Form(std::string name, int signature_grade, int execution_grade);	// Constructeur par name
		Form(Form const & copy);											// Constructeur par copie

		~Form(void);														// Destructeur

		Form const & operator = (Form const & rhs);							// Surcharge d'opérateur d’affectation

		std::string		getName(void) const;								// Retourne _name
		bool			getSignature(void) const;							// Retourn _signed
		int				getSignatureGrade(void) const;						// Retourne _signature_grade
		int				getExecutionGrade(void) const;						// Retourne _execution_grade

		void			beSigned(Bureaucrat *bureaucrat);					// Fait signer le form par bureaucrat si possible
		void			setSignature(void);									// Modifie _signed sur true

	private:

		std::string	const	_name;											// Nom du formulaire
		bool				_signed;										// Si signature _signed = true, sinon false
		int const			_signature_grade;								// Echelon requis pour signer le formulaire
		int const			_execution_grade;								// Echelon requis pour executer le formulaire

		// Exception jetee en cas de probleme dans la constructon du formulaire
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form exception: grade too high.");
				}
		} ;

		// Exception jetee en cas de probleme dans la constructon du formulaire
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form exception: grade too low.");
				}
		} ;

} ;

//Surcharge de l'operateur << pour la classe Form
std::ostream & operator << (std::ostream & out, Form const & rhs);

#endif
