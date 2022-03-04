/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:57:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/04 09:21:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::_number_of_contact = 0;
int PhoneBook::_contact_index = 0;

// Constructor
PhoneBook::PhoneBook(void)
{
	return ;
}

// Destructor
PhoneBook::~PhoneBook(void)
{
	return ;
}

// Add a contact
void	PhoneBook::add(void)
{
	//Update the static variables of the PhoneBook
	if (PhoneBook::_number_of_contact < 8)
		PhoneBook::_number_of_contact += 1;
	if (PhoneBook::_contact_index < 8 && PhoneBook::_number_of_contact > 1)
		PhoneBook::_contact_index += 1;
	if (PhoneBook::_contact_index == 8)
		PhoneBook::_contact_index = 0;
	
	//Update the Contact info
	this->_repertoire[PhoneBook::_contact_index].update();
}

void	PhoneBook::search(void)
{
	int			index = 0;
	std::string	buf;

	// Display the first list
	while (index < this->_number_of_contact)
	{
		std::cout << std::to_string(index);
		std::cout << this->_repertoire[index].get_first_name();
		std::cout << this->_repertoire[index].get_last_name();
		std::cout << this->_repertoire[index].get_nick_name();
		std::cout << std::endl;
		index++;
	}
	//Ask for an index
	while (1)
	{
		std::cout << "Select a contact index to see his informations : ";
		std::cin >> buf;
		if (buf.empty())
		{
			buf.clear();
			return ;
		}
		index = std::stoi(buf);
		if (index < 0 || index > this->_contact_index)
			continue ;
		else
			break ;
	}
	std::cout << this->_repertoire[index].get_first_name() << std::endl;
	std::cout << this->_repertoire[index].get_last_name() << std::endl;
	std::cout << this->_repertoire[index].get_nick_name() << std::endl;
	std::cout << this->_repertoire[index].get_phone_number() << std::endl;
	std::cout << this->_repertoire[index].get_darkest_secret() << std::endl;
}
