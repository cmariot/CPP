/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 11:31:19 by cmariot          ###   ########.fr       */
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

	//test catch decrementation < 0
	Bureaucrat	boss("Boos", 0);
	std::cout << boss << std::endl;
	boss.decrementGrade();
	
	//test catch incrementation > 150
	Bureaucrat	stagiaire("Stagiaire", 150);
	std::cout << stagiaire << std::endl;
	stagiaire.incrementGrade();

	//test catch erreurs d'initialisation
	Bureaucrat	neg("Boos", -10);
	Bureaucrat	sup("Boos", 300);

	return (0);
}
