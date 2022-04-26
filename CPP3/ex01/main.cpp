/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/24 08:45:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("Foo");
	
	std::cout << test << std::endl;

	//Fonctions membre heritees de FragTrap
	test.attack("Bar");
	test.takeDamage(5);
	test.beRepaired(10);

	//Fonctions membre propres a ScavTrap
	test.guardGate();
	std::cout << test <<  std::endl;

	return (0);
}
