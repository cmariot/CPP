/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:20:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/09 17:18:21 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType(void) const
{
	return (this->_type);
}
