/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 16:18:51 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	//tests incrementation/decrementation
	Bureaucrat	foo("Foo", 5);
	std::cout << foo << std::endl;
	foo.decrementGrade();
	std::cout << foo << std::endl;
	foo.incrementGrade();
	std::cout << foo << std::endl;

	//test catch decrementation < 1
	Bureaucrat	boss("Boos", 1);
	std::cout << boss << std::endl;
	boss.incrementGrade();
	
	//test catch incrementation > 150
	Bureaucrat	stagiaire("Stagiaire", 150);
	std::cout << stagiaire << std::endl;
	stagiaire.decrementGrade();

	//test catch erreurs d'initialisation
	Bureaucrat	neg("Boos", -10);
	Bureaucrat	sup("Boos", 300);

	return (0);
}
