/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:01:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/04 11:18:33 by cmariot          ###   ########.fr       */
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
			std::cout << "Error: empty command." << std::endl;
			return (1);
		}
		if (input.compare("ADD") == 0)
		{
			if (repertoire.add())
			{
				std::cout << std::endl << "Error: a contact field cannot be empty." << std::endl;
				return (1);
			}
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
