/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:03:19 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/11 14:01:25 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*    zombieHorde(int N, std::string name)
{

	//Error management
	if (N < 0)
	{
		std::cout << "Error: the number of zombie must be positive." << std::endl;
		return (NULL);
	}
	else if (name.empty())
	{
		std::cout << "Error: the zombies must have a name." << std::endl;
		return (NULL);
	}

	//Create an array of zombie
	Zombie	*horde = new Zombie[N];

	//Set a name to the zombies
	int	i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}

	//Return the zombies
	return (horde);
}
