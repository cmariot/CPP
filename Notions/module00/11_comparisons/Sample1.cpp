/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 17:01:52 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample1::Sample1(int value) : _foo(value)
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

int	Sample1::compare(Sample1 *other) const
{
	if (other->get_foo() == this->get_foo())
		return (1);
	else
		return (0);
}
