/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:11:49 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/15 08:44:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Intern::Intern(void)
{
	//std::cout << "Intern default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Intern::Intern(Intern const & copy)
{
	//std::cout << "Intern copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Intern::~Intern(void)
{
	//std::cout << "Intern destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Intern const &	Intern::operator = (Intern const & rhs)
{
	return (rhs);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

Form	*Intern::getPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::getRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::getShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string form_name, std::string form_target)
{
	Form *form = NULL;

	std::string	known_forms[3] =	{"presidential pardon",
									"robotomy request",
									"shrubbery creation"};

	Form *(Intern::*f[3])(std::string const &) =	{&Intern::getPresidentialPardonForm,
													&Intern::getRobotomyRequestForm,
													&Intern::getShrubberyCreationForm};

	try
	{
		for (int i = 0; i < 3; i++)
			if (form_name == known_forms[i])
				form = (this->*f[i])(form_target);
		if (form == NULL)
			throw Intern::UnknownFormException();
		std::cout << "Intern creates " << form->getName() << std::endl;
	}
	catch (Intern::UnknownFormException & exception)
	{
		std::cout << exception.what() << std::endl;
	}
	return (form);
}
