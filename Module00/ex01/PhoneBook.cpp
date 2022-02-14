/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:57:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/14 15:46:05 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructeur PhoneBook appelé" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Déstructeur PhoneBook appelé" << std::endl;
	return ;
}

void	PhoneBook::add(Contact new_contact, int index)
{
	this->repertoire[index] = new_contact;
}
