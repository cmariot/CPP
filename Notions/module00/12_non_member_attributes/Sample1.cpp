/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 17:23:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample1::Sample1(void)
{
	std::cout << "Sample1 constructor called" << std::endl;
	Sample1::_nbInst += 1;
	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Sample1 destructor called" << std::endl;
	Sample1::_nbInst -= 1;
	return ;
}

int	Sample1::get_nbInstance(void)
{
	return Sample1::_nbInst;
}

int	Sample1::_nbInst = 0;
