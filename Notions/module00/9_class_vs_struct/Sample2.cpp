/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:41:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample2::Sample2(void)
{
	std::cout << "Sample2 constructor called" << std::endl;
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Sample2 destructor called" << std::endl;
	return ;
}
