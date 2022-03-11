/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:09:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 18:33:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _number(0)
{
	std::cout << "Constructeur par default" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &obj) : _number(obj._number)
{
	std::cout << "Constructeur de copie" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur par default" << std::endl;
	return ;
}


int Fixed::getRawBits(void) const
{
	return (this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}
