/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:21:43 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/11 13:58:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

int	main(void)
{
	//Allocated with new -> pointer scope ; need to delete
	Zombie *foo = newZombie("Foo");

	//Not allocated -> function scope ; destructed at the end of the function
	randomChump("Bar");
	
	delete foo;
	return (0);
}
