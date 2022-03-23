/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:16:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 12:17:29 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string target);										// Constructeur par default
		RobotomyRequestForm(RobotomyRequestForm const & copy);						// Constructeur par copie
		~RobotomyRequestForm(void);									// Destructeur
		RobotomyRequestForm const &	operator = (RobotomyRequestForm const & rhs);	// Surcharge d'opérateur d’affectation

		void execute(Bureaucrat const & executor) const;

	private:

		std::string	_target;

} ;

#endif

