/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:57:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 10:52:48 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

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
int	PhoneBook::add(void)
{
	//Update the static variables of the PhoneBook
	if (PhoneBook::_number_of_contact < 8)
		PhoneBook::_number_of_contact += 1;
	if (PhoneBook::_contact_index < 8 && PhoneBook::_number_of_contact > 1)
		PhoneBook::_contact_index += 1;
	if (PhoneBook::_contact_index == 8)
		PhoneBook::_contact_index = 0;
	
	//Update the Contact info
	if (this->_repertoire[PhoneBook::_contact_index].update())
		return (1);

	return (0);
}

std::string	PhoneBook::_column(std::string str)
{
	if (str.length() < 10)
	{
		return (str);
	}
	else
	{
		str.resize(10);
		str[9]= '.';
		return (str);
	}
}

int	PhoneBook::_get_index(std::string str)
{
	int	nb = 0;

	if (str.length() > 1 || str.length() == 0)
		return (-1);
	if (str[0] >= '0' && str[0] <= '9')
		nb = str[0] - 48;
	else
		return (-1);
	return (nb);
}

int	PhoneBook::search(void)
{
	int			index = 0;
	std::string	buf;

	// Error : no contact
	if (this->_number_of_contact == 0)
	{
		std::cout << "There is no contact in the PhoneBook yet." << std::endl;
		return (0);
	}

	// Display the array header
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first_name";
	std::cout << "|";
	std::cout << std::setw(10) << "last_name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;

	// Display the first array
	while (index < this->_number_of_contact)
	{
		std::cout << std::setw(10) << index;
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_column(this->_repertoire[index].get_first_name());
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_column(this->_repertoire[index].get_last_name());
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::_column(this->_repertoire[index].get_nick_name());
		std::cout << std::endl;
		index++;
	}

	//Ask for an index
	while (1)
	{
		std::cout << "Select a contact index to see its informations : ";
		std::cin >> buf;
		if (buf.empty())
		{
			buf.clear();
			return (1);
		}
		index = PhoneBook::_get_index(buf);
		if (index < 0 || index > this->_number_of_contact)
		{
			std::cout << "Error: Index out of range. Try again." << std::endl;
			continue ;
		}
		else
			break ;
	}

	//Display the informations
	std::cout << "first_name:     ";
	std::cout << this->_repertoire[index].get_first_name() << std::endl;
	std::cout << "last_name:      ";
	std::cout << this->_repertoire[index].get_last_name() << std::endl;
	std::cout << "nickname:       ";
	std::cout << this->_repertoire[index].get_nick_name() << std::endl;
	std::cout << "phone_number:   ";
	std::cout << this->_repertoire[index].get_phone_number() << std::endl;
	std::cout << "darkest_secret: ";
	std::cout << this->_repertoire[index].get_darkest_secret() << std::endl;

	return (0);
}
