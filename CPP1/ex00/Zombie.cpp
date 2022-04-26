/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:22:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 23:27:16 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

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

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}

void	Zombie::announce(void) const
{
	std::cout << this->get_name() << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
