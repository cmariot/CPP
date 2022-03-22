/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:16:27 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 17:13:01 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string target);										// Constructeur par default
		PresidentialPardonForm(PresidentialPardonForm const & copy);						// Constructeur par copie
		~PresidentialPardonForm(void);									// Destructeur
		PresidentialPardonForm const &	operator = (PresidentialPardonForm const & rhs);	// Surcharge d'opérateur d’affectation

		void execute(Bureaucrat const & executor) const;

	private:

		std::string	_target;

} ;

#endif

