/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:00:08 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/04 08:45:35 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) :
	_first_name(""), _last_name(""), _nick_name(""), _phone_number(""), _darkest_secret("")
{
	std::cout << "Constructeur Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructeur Contact" << std::endl;
	return ;
}

void	Contact::update(void)
{
	Contact::set_first_name();
	Contact::set_last_name();
	Contact::set_nick_name();
	Contact::set_phone_number();
	Contact::set_darkest_secret();
}

//	SET MEMBER ATTRIBUTES

void Contact::set_first_name(void)
{
	std::string	buf;

	std::cout << "FIRST NAME     : ";
	std::cin >> buf;
	this->_first_name = buf;
}

void Contact::set_last_name(void)
{
	std::string	buf;

	std::cout << "LAST NAME      : ";
	std::cin >> buf;
	this->_last_name = buf;
}

void Contact::set_nick_name(void)
{
	std::string	buf;

	std::cout << "NICKNAME       : ";
	std::cin >> buf;
	this->_nick_name = buf;
}

void Contact::set_phone_number(void)
{
	std::string	buf;

	std::cout << "PHONE NUMBER   : ";
	std::cin >> buf;
	this->_phone_number = buf;
}

void Contact::set_darkest_secret(void)
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
	return (this->_first_name);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_first_name);
}
