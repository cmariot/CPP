/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:39:32 by cmariot          ###   ########.fr       */
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
	std::cout << "Sample1 destructor called" << std::endl;
	return ;
}
