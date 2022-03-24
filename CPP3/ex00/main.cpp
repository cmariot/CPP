/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/24 08:34:03 by cmariot          ###   ########.fr       */
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
	for (int i = 0; i < 1; i++)
		first.beRepaired(3);
	first.takeDamage(8);
	first.attack("default");

	std::cout << "HP de first au final  = " << first.get_hit_points() << std::endl;
	std::cout << "HP de default au final  = " << par_defaut.get_hit_points() << std::endl;
	return (0);

}
