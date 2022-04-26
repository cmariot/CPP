/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/15 13:48:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include "Intern.hpp"

void	test_robotomy(void)
{
	Intern	foo;
	Form	*form = NULL;

	form = foo.makeForm("robotomy request", "bar");
	if (form != NULL)
		delete form;
}

void	test_presidential(void)
{
	Intern	foo;
	Form	*form = NULL;

	form = foo.makeForm("presidential pardon", "bar");
	if (form != NULL)
		delete form;
}

void	test_shrubbery(void)
{
	Intern	foo;
	Form	*form = NULL;

	form = foo.makeForm("shrubbery creation", "bar");
	if (form != NULL)
		delete form;
}

void	test_bidon(void)
{
	Intern	foo;
	Form	*form = NULL;

	form = foo.makeForm("Truc", "bar");
	if (form != NULL)
		delete form;
}

int	main(void)
{
	test_robotomy();
	test_presidential();
	test_shrubbery();

	test_bidon();
	return (0);
}
