/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:28:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample1::Sample1(void)
{
	std::cout << "Sample1 constructor called" << std::endl;
	
	this->public_foo = 0;
	std::cout << "this->public_foo = " << this->public_foo << std::endl;

	this->_private_foo = 0;
	std::cout << "this->_private_foo = " << this->_private_foo << std::endl;
	
	this->public_bar();
	this->_private_bar();

	return ;
}

Sample1::~Sample1(void)
{
	return ;
}

void	Sample1::public_bar(void) const
{
	std::cout << "Member function public_bar() called" << std::endl;
	return ;
}

void	Sample1::_private_bar(void) const
{
	std::cout << "Member function _private_bar() called" << std::endl;
	return ;
}
