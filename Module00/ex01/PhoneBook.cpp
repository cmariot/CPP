/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:57:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/15 14:08:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "my_awesome_phonebook.h"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(Contact new_contact, int index)
{
	this->repertoire[index] = new_contact;
}

void	PhoneBook::display_contact_list(int number_of_contacts) const
{
	int	j;

	std::cout << "     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME" << std::endl;
	j = 0;
	while (j < 8 && j < number_of_contacts)
	{
		std::cout << "         " << this->repertoire[j].index << "|";
		display_value(this->repertoire[j].first_name);
		std::cout << "|";
		display_value(this->repertoire[j].last_name);
		std::cout << "|";
		display_value(this->repertoire[j].nickname);
		std::cout << std::endl;
		j++;
	}
}

void	PhoneBook::display_contact_info(std::string input, int number_of_contacts) const
{
	int	search_index;

	search_index = std::stoi (input);
	if (search_index >= 0 && search_index <= 7 && search_index < number_of_contacts)
	{
		std::cout << "FIRST_NAME:     " << this->repertoire[search_index].first_name << std::endl;
		std::cout << "LAST_NAME:      " << this->repertoire[search_index].last_name << std::endl;
		std::cout << "NICKNAME:       " << this->repertoire[search_index].nickname << std::endl;
		std::cout << "PHONE_NUMBER:   " << this->repertoire[search_index].phone_number << std::endl;
		std::cout << "DARKEST_SECRET: " << this->repertoire[search_index].darkest_secret << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
