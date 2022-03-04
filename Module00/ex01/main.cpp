/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:01:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/03 15:47:06 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
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
