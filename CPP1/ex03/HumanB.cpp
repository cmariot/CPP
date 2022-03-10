/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:38:25 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/09 17:16:23 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return ;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

std::string	HumanB::_get_name(void) const
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

std::string HumanB::_get_type(void) const
{
	return (this->_weapon->getType());
}

void	HumanB::attack(void) const
{
	if (this->_weapon != NULL)
	{
		std::cout << HumanB::_get_name();
		std::cout << " attacks with their ";
		std::cout << HumanB::_get_type() << std::endl;
	}
	else
	{
		std::cout << HumanB::_get_name();
		std::cout << " doesn't attacks, he hasn't any weapon." << std::endl;
	}
}
