/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:01:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/15 13:57:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.h"

void	display_value(std::string str)
{
	int	len;

	len = str.length();
	if (len < 10)
	{
		while (len++ < 10)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		len = 0;
		while (len != 9)
			std::cout << str[len++];
		std::cout << ".";
	}
}

int	check_if_valid_index(std::string input)
{
	int	i = 0;

	while (input[i] != '\0')
	{
		if (input[i] >= '0' && input[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

void	ask_for_contact_info(t_input *contact_input)
{
	std::cout << "First name: ";
	std::cin >> contact_input->first_name;
	std::cout << "Last name: ";
	std::cin >> contact_input->last_name;
	std::cout << "Nickname: ";
	std::cin >> contact_input->nickname;
	std::cout << "Phone number: ";
	std::cin >> contact_input->phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> contact_input->darkest_secret;
}

int	main(void)
{
	PhoneBook	repertoire;
	std::string input;
	t_input		contact_input;
	int			contact_index = 0;
	int			number_of_contacts = 0;

	while (1)
	{
		std::cout << "Type a command ('ADD', 'SEARCH' or 'EXIT') :" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			ask_for_contact_info(&contact_input);
			Contact	new_contact(contact_index, contact_input.first_name, contact_input.last_name,
				contact_input.nickname, contact_input.phone_number, contact_input.darkest_secret);
			repertoire.add(new_contact, contact_index);
			if (number_of_contacts != 8)
				number_of_contacts++;
			if (contact_index != 7)
				contact_index++;
			else
				contact_index = 0;
		}
		else if (input.compare("SEARCH") == 0)
		{
			repertoire.display_contact_list(number_of_contacts);
			std::cout << "Enter a contact index to show it's informations : ";
			std::cin >> input;
			if (check_if_valid_index(input) == 0)
				repertoire.display_contact_info(input, number_of_contacts);
			else
				std::cout << "Invalid index" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
