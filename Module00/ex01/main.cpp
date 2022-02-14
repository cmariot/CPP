/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:01:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/14 17:28:50 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	repertoire;
	std::string input;
	int			index = 0;
	int			number_of_contacts = 0;
	int			j;

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	while (1)
	{
		std::cout << "Type a command ('ADD', 'SEARCH' or 'EXIT') :" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			if (index == 8)
				index = 0;

			std::cout << "First name: ";
			std::cin >> first_name;
			std::cout << "Last name: ";
			std::cin >> last_name;
			std::cout << "Nickname: ";
			std::cin >> nickname;
			std::cout << "Phone number: ";
			std::cin >> phone_number;
			std::cout << "Darkest secret: ";
			std::cin >> darkest_secret;
			
			Contact	new_contact(index, first_name, last_name, nickname, phone_number, darkest_secret);
			
			repertoire.add(new_contact, index);
		
			number_of_contacts++;
			index++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			j = 0;
			while (j < 8 && j < number_of_contacts)
			{
				std::cout << repertoire.repertoire[j].index << "|";
				std::cout << repertoire.repertoire[j].first_name << "|";
				std::cout << repertoire.repertoire[j].last_name << "|";
				std::cout << repertoire.repertoire[j].nickname << std::endl;
				j++;
			}
			while (1)
			{
				std::cout << "Enter a contact index to show it's informations (or NONE to exit) : ";
				std::cin >> input;
				if (input.compare("NONE") == 0)
					break ;
				int	search_index = std::stoi (input);
				if (search_index >= 0 && search_index <= 7)
				{
					std::cout << repertoire.repertoire[search_index].index << std::endl;
					std::cout << repertoire.repertoire[search_index].first_name << std::endl;
					std::cout << repertoire.repertoire[search_index].last_name << std::endl;
					std::cout << repertoire.repertoire[search_index].nickname << std::endl;
					std::cout << repertoire.repertoire[search_index].phone_number << std::endl;
					std::cout << repertoire.repertoire[search_index].darkest_secret << std::endl;
					break ;
				}
			}

		}
		else if (input.compare("EXIT") == 0)
		{
			break ;
		}
	}
	return (0);
}
