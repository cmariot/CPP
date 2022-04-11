/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 16:28:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test_bureaucrates(void)
{
	//tests incrementation/decrementation
	Bureaucrat	foo("Foo", 5);
	std::cout << foo << std::endl;
	foo.decrementGrade();
	std::cout << foo << std::endl;
	foo.incrementGrade();
	std::cout << foo << std::endl;

	//test catch decrementation < 0
	Bureaucrat	boss("Boos", 1);
	std::cout << boss << std::endl;
	boss.decrementGrade();
	
	//test catch incrementation > 150
	Bureaucrat	stagiaire("Stagiaire", 150);
	std::cout << stagiaire << std::endl;
	stagiaire.incrementGrade();

	//test catch erreurs d'initialisation
	Bureaucrat	neg("Boos", -10);
	Bureaucrat	sup("Boos", 300);
}

void	test_forms(void)
{
	Bureaucrat	foo("Foo", 5);
	Form	formulaire("formulaire A", 4, 2);

	std::cout << foo << std::endl;
	std::cout << formulaire << std::endl;

	foo.signForm(&formulaire);

	foo.incrementGrade();
	foo.incrementGrade();
	foo.incrementGrade();
	foo.incrementGrade();
	foo.incrementGrade();

	std::cout << foo << std::endl;
	foo.signForm(&formulaire);
	foo.signForm(&formulaire);
	std::cout << formulaire << std::endl;
}

int	main(void)
{
	test_forms();
	return (0);
}
