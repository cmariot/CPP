/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:26:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 10:12:39 by cmariot          ###   ########.fr       */
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

void	Karen::_debug(void) const
{
	std::cout << "[DEBUG]: " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	return ;
}

void	Karen::_info(void) const
{
	std::cout << "[INFO]: " << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger !" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Karen::_warning(void) const
{
	std::cout << "[WARNING]: " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Karen::_error(void) const
{
	std::cout << "[ERROR]: " << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl ;
	return ;
}

void	Karen::_none(void) const
{
	return ;
}

void Karen::complain(std::string level) const
{
	void	(Karen::*f)(void) const;

	if (level.compare("error") == 0)
		f = &Karen::_error;
	else if (level.compare("warning") == 0)
		f = &Karen::_warning;
	else if (level.compare("info") == 0)
		f = &Karen::_info;
	else if (level.compare("debug") == 0)
		f = &Karen::_debug;
	else
		f = &Karen::_none;

	(this->*f)();
}
