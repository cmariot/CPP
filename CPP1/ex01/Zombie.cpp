/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:22:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 13:18:36 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::get_name() << ": ";
	std::cout << "died." << std::endl;
	return ;
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}

void	Zombie::announce(void) const
{
	std::cout << Zombie::get_name() << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
