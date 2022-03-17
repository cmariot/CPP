/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 20:50:36 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// Display the constructors/destructors unsed to create a DiamondTrap
void	test_the_monster(void)
{
	std::cout << "CONSTRUCTORS/DESTRUCTORS :" << std::endl;
	DiamondTrap	monster;
}

int	main(void)
{
	test_the_monster();
	std::cout << std::endl;


	DiamondTrap foo("Foo");

	std::cout << std::endl << "DISPLAY THE DIAMONDTRAP STATS:" << std::endl;
	foo.whoAmI();
	std::cout << std::endl;

	std::cout << foo << std::endl;

	foo.attack("Bar");
	foo.highFivesGuys();
	foo.guardGate();
	foo.takeDamage(10);
	foo.beRepaired(5);

	std::cout << std::endl << foo << std::endl;

	return (0);
}
