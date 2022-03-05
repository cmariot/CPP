/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:21:43 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 13:48:15 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name);

int	main(void)
{
	int	number_of_zombies = 6;

	//Array allocation
	Zombie *horde = zombieHorde(number_of_zombies, "Foo");
	if (horde == NULL)
		return (1);

	//Announce each zombie
	for	(int i = 0; i < number_of_zombies; i++)
		horde[i].announce();

	//Delete the horde
	delete [] horde;

	return (0);
}
