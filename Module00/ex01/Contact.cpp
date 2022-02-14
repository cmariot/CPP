/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:00:08 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/14 16:40:57 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructeur par défaut Contact appelé" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Déstructeur Contact appelé" << std::endl;
	return ;
}

Contact::Contact(int id, std::string fn, std::string ln,std::string nn, std::string pn, std::string ds) :
	index(id), first_name(fn), last_name(ln), nickname(nn), phone_number(pn), darkest_secret(ds)
{
	std::cout << "New contact successfuly added." << std::endl;
	return ;
}
