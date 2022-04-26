/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:00:08 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 10:56:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) :
	_first_name(""), _last_name(""), _nick_name(""), _phone_number(""), _darkest_secret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::update(void)
{
	Contact::_set_first_name();
	if (Contact::get_first_name().empty())
		return (1);
	Contact::_set_last_name();
	if (Contact::get_last_name().empty())
		return (1);
	Contact::_set_nick_name();
	if (Contact::get_nick_name().empty())
		return (1);
	Contact::_set_phone_number();
	if (Contact::get_phone_number().empty())
		return (1);
	Contact::_set_darkest_secret();
	if (Contact::get_darkest_secret().empty())
		return (1);
	return (0);
}

//	SET MEMBER ATTRIBUTES

void Contact::_set_first_name(void)
{
	std::string	buf;

	std::cout << "FIRST NAME     : ";
	std::cin >> buf;
	this->_first_name = buf;
}

void Contact::_set_last_name(void)
{
	std::string	buf;

	std::cout << "LAST NAME      : ";
	std::cin >> buf;
	this->_last_name = buf;
}

void Contact::_set_nick_name(void)
{
	std::string	buf;

	std::cout << "NICKNAME       : ";
	std::cin >> buf;
	this->_nick_name = buf;
}

void Contact::_set_phone_number(void)
{
	std::string	buf;

	std::cout << "PHONE NUMBER   : ";
	std::cin >> buf;
	this->_phone_number = buf;
}

void Contact::_set_darkest_secret(void)
{
	std::string	buf;

	std::cout << "DARKEST SECRET : ";
	std::cin >> buf;
	this->_darkest_secret = buf;
}

//	GET MEMBER ATTRIBUTES

std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nick_name(void) const
{
	return (this->_nick_name);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}
