/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/24 10:17:05 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// Display the constructors/destructors unsed to create a DiamondTrap
void	test_constructor_order(void)
{
	std::cout << "CONSTRUCTORS/DESTRUCTORS :" << std::endl;
	DiamondTrap	monster;
}

void	backslash_n(void)
{
	std::cout << std::endl;
}

int	main(void)
{
	test_constructor_order();
	backslash_n();

	DiamondTrap foo("Foo");

	backslash_n();
	std::cout << foo << std::endl;

	std::cout << "Fonctions membres heritees de ClapTrap :" << std::endl;
	foo.attack("Bar");
	foo.takeDamage(10);
	foo.beRepaired(5);
	backslash_n();
	
	std::cout << "Fonctions membre heritee de ScavTrap :" << std::endl;
	foo.guardGate();
	backslash_n();
	
	std::cout << "Fonctions membre heritee de FragTrap :" << std::endl;
	foo.highFivesGuys();
	backslash_n();
	
	std::cout << "Fonction membre propre a DiamodTrap :" << std::endl;
	foo.whoAmI();

	backslash_n();
	std::cout << foo << std::endl;

	return (0);
}
