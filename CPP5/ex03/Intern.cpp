/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:11:49 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 11:42:22 by cmariot          ###   ########.fr       */
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
	static_cast<void>(rhs);
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

Form	*Intern::makeForm(std::string form_name, std::string form_target)
{
	try
	{
		std::string	known_forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
		Form *form = NULL;
		for (int i = 0; i < 3; i++)
		{
			if (form_name == known_forms[i])
			{
				if (i == 0)
					form = new PresidentialPardonForm(form_target);
				else if (i == 1)
					form = new RobotomyRequestForm(form_target);
				else if (i == 2)
					form = new ShrubberyCreationForm(form_target);
				std::cout << "Intern creates " << form->getName() << std::endl;
				return (form);
			}
		}
		throw Intern::UnknownFormException();
	}
	catch (Intern::UnknownFormException & exception)
	{
		std::cout << exception.what() << std::endl;
		return (NULL);
	}
}
