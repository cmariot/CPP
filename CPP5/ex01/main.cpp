/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:30:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 09:43:22 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
