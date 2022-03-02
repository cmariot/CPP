/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:12:21 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"
#include <iostream>

/* Definitions for the Sample class */

Sample::Sample(void)
{
	std::cout << "Constructor" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
