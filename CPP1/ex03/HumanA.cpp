/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:19:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/06 19:42:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

std::string	HumanA::_get_name(void) const
{
	return (this->_name);
}

std::string	HumanA::_get_type(void) const
{
	return (this->_weapon.getType());
}

void	HumanA::attack(void) const
{
	std::cout << HumanA::_get_name();
	std::cout << " attacks with their ";
	std::cout << HumanA::_get_type() << std::endl;
}
