/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 21:20:01 by cmariot          ###   ########.fr       */
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

	foo.whoAmI();
	foo.attack("Bar");
	foo.guardGate();
	foo.highFivesGuys();
	foo.takeDamage(10);
	foo.beRepaired(5);

	backslash_n();
	std::cout << foo << std::endl;

	return (0);
}
