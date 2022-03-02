/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:22:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 14:35:04 by cmariot          ###   ########.fr       */
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
