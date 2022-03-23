/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:15:51 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 12:17:33 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream> 

class	ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(std::string target);										// Constructeur par default
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);						// Constructeur par copie
		~ShrubberyCreationForm(void);													// Destructeur
		ShrubberyCreationForm const &	operator = (ShrubberyCreationForm const & rhs);	// Surcharge d'opérateur d’affectation

		void execute(Bureaucrat const & executor) const;

	private:

		std::string	_target;

} ;

#endif

