/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 16:02:00 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test("Foo");
	
	test.display_specs();

	//Fonctions membre heritees de FragTrap
	test.attack("Bar");
	test.takeDamage(5);
	test.beRepaired(10);

	//Fonctions membre propres a ScavTrap
	test.highFivesGuys();
	test.display_specs();

	return (0);
}
