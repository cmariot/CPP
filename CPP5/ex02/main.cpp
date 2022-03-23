/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 15:19:21 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	test_creation_arbuste(void)
{
	Bureaucrat				me("Charles", 0);
	Bureaucrat				jardinier("Foo", 0);
	ShrubberyCreationForm	form("arbres");

	me.signForm(&form);

	jardinier.executeForm(form);
}

void	test_robotomy(void)
{
	Bureaucrat				me("Charles", 0);
	Bureaucrat				robotomizer("Foo", 0);
	RobotomyRequestForm		form("Dyson");

	me.signForm(&form);
	
	robotomizer.executeForm(form);
}

void	test_president(void)
{
	Bureaucrat				me("Charles", 0);
	Bureaucrat				president("Bar", 0);
	PresidentialPardonForm	form("Pardon");

	me.signForm(&form);
	
	president.executeForm(form);
}

int	main(void)
{
	test_creation_arbuste();
	std::cout << std::endl;
	
	test_robotomy();
	std::cout << std::endl;
	
	test_president();
	std::cout << std::endl;
	
	return (0);
}
