/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 11:43:10 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	test_creation_arbuste(void)
{
	Bureaucrat				foo("Foo", 1);
	Bureaucrat				bar("Bar", 1);
	ShrubberyCreationForm	form("Arbres");

	foo.signForm(&form);
	bar.executeForm(form);
}

void	test_robotomy(void)
{
	Bureaucrat				foo("Foo", 1);
	Bureaucrat				bar("Bar", 1);
	RobotomyRequestForm		form("Robotomy");

	foo.signForm(&form);
	bar.executeForm(form);
}

void	test_president(void)
{
	Bureaucrat				foo("Foo", 1);
	Bureaucrat				bar("Bar", 1);
	PresidentialPardonForm	form("Pardon");

	foo.signForm(&form);
	bar.executeForm(form);
}

void	test_sans_signature_grade_too_high(void)
{
	RobotomyRequestForm foo("Foo");
	Bureaucrat			boss("Boss", 1);
	Bureaucrat			noob("Noob", 150);

	//boss.signForm(&foo);
	noob.executeForm(foo);
	//for (int i = 0; i < 149; i++)
	//	noob.incrementGrade();
	//std::cout << noob << std::endl;
	//noob.executeForm(foo);
}

int	main(void)
{
	test_creation_arbuste();
	std::cout << std::endl;
	
	test_robotomy();
	std::cout << std::endl;
	
	test_president();
	std::cout << std::endl;
	
//	test_sans_signature_grade_too_high();
	
	return (0);
}
