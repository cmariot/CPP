/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 08:32:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 08:36:43 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>

File::File(void)
{
	std::cout << "Constructor" << std::endl;
	return ;
}

File::~File(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}
