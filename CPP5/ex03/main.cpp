/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 17:19:49 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include "Intern.hpp"

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
	Intern stagiaire;

	Form *form = stagiaire.makeForm("robotomy request", "form");
	
	std::cout << "Signature grade : " << form->getSignatureGrade() << std::endl;
	
	Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	if (rrf != 0)
		std::cout << "Signature grade : " << rrf->getSignatureGrade() << std::endl;

	return (0);
}
