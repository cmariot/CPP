/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:51:45 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample1::Sample1(void)
{
	std::cout << "Sample1 constructor called" << std::endl;
	return ;
}

Sample1::~Sample1(void)
{
	return ;
}

int	Sample1::get_foo(void) const
{
	return (this->_foo);
}

void	Sample1::set_foo(int value)
{
	this->_foo = value;
	return ;
}
