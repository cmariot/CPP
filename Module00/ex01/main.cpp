/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:42:06 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/28 18:08:55 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string	input;

	while (1)
	{
		std::cout << "Type a command ('ADD', 'SEARCH' or 'EXIT') :" << std::endl;
		std::cin >> input;
		if (input.empty() == true)
		{
			input.clear();
			std::cout << "Error, empty command." << std::endl;
			return (1);
		}
		if (input.compare("ADD") == 0)
		{
			repertoire.add();
		}
		else if (input.compare("SEARCH") == 0)
		{
			repertoire.search();
		}
		else if (input.compare("EXIT") == 0)
		{
			break ;
		}
		input.clear();
	}
	return (0);
}
