/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:09:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 10:48:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const	Fixed::_fractionalBits = 8;


/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Constructeur par copie
Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

//Constructeur par entier constant
Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = n << this->_fractionalBits;
	return ;
}

// Constructeur par flottant constant
// Left Bitwise Shift : 101010 << 1 = 010101
Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_fractionalBits));
	return ;
}

//Destructeur par default
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur =
Fixed &			Fixed::operator = (Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Fixed const & rhs)
{
	output << rhs.toFloat();
	return (output);
}


/***********************************************/
/*             FONCTIONS MEMBRES               */
/***********************************************/

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return ((int)this->toFloat());
}
