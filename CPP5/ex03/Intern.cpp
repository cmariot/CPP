/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:11:49 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 17:21:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Intern::Intern(void)
{
	std::cout << "Intern default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Intern::Intern(Intern const & copy)
{
	std::cout << "Intern copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Intern::~Intern(void)
{
	std::cout << "Intern destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Intern const &	Intern::operator = (Intern const & rhs)
{
	(void)rhs;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

Form	*Intern::makeForm(std::string form_name, std::string form_target)
{
	try
	{
		if (form_name == "presidential pardon")
		{
			Form *form = new PresidentialPardonForm(form_target);
			std::cout << "Intern creates " << form_name << std::endl;
			return (form);
		}
		else if (form_name == "robotomy request")
		{
			Form *form = new RobotomyRequestForm(form_target);
			std::cout << "Intern creates " << form_name << std::endl;
			return (form);
		}
		else if (form_name == "shrubbery creation")
		{
			Form *form = new ShrubberyCreationForm(form_target);
			std::cout << "Intern creates " << form_name << std::endl;
			return (form);
		}
		else
			throw Intern::UnknownFormException(); 
	}
	catch (Intern::UnknownFormException & exception)
	{
		std::cout << exception.what() << std::endl;
		return (0);
	}
}
