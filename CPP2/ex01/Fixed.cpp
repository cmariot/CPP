/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:09:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/14 17:08:43 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const	Fixed::_fractionalBits = 8;


/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Fixed::Fixed(void) : _number(0)
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
	this->_number = n << this->_fractionalBits;
	return ;
}

//Constructeur par flottant constant
Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(f * (1 << this->_fractionalBits));
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
	this->_number = rhs.getRawBits();
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
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_number / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return ((int)this->toFloat());
}
