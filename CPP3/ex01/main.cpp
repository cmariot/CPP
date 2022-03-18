/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 15:02:38 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("Foo");
	
	test.display_specs();

	//Fonctions membre heritees de FragTrap
	test.attack("Bar");
	test.takeDamage(5);
	test.beRepaired(10);

	//Fonctions membre propres a ScavTrap
	test.guardGate();
	test.display_specs();

	return (0);
}
