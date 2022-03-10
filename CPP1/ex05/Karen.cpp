/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:26:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/09 17:32:48 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	return ;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void Karen::complain(std::string level)
{
	if (level.compare("error") == 0)
		_error();
}
