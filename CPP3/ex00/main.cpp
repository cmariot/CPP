/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 08:43:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	par_defaut;		//default constructor
	ClapTrap	first("Foo");	//string constructor
	ClapTrap	copy(first);
	first = copy;
	
	par_defaut.attack("Foo");
	first.takeDamage(5);
	first.beRepaired(3);
	first.takeDamage(8);
	first.attack("default");

	std::cout << "HIT POINTS de FIRST = " << first.get_hit_points() << std::endl;
	std::cout << "HIT POINTS de DEFAULT = " << par_defaut.get_hit_points() << std::endl;
	return (0);
}
