/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:01:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/01 12:12:40 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string input;

	while (1)
	{
		std::cout << "Type a command ('ADD', 'SEARCH' or 'EXIT') :" << std::endl;
		std::cin >> input;
		if (input.empty() == true)
		{
			std::cout << "Error, input required" << std::endl;
			return (1);
		}
		if (input.compare("ADD") == 0)
		{
		
		}
		else if (input.compare("SEARCH") == 0)
		{

		}
		else if (input.compare("EXIT") == 0)
			break ;
		input.clear();
	}
	return (0);
}
