/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:09:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/15 14:01:54 by cmariot          ###   ########.fr       */
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
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

//Constructeur par copie
Fixed::Fixed(Fixed const & fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

//Constructeur par entier constant
Fixed::Fixed(int const n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_number = n << this->_fractionalBits;
	return ;
}

//Constructeur par flottant constant
Fixed::Fixed(float const f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(f * (1 << this->_fractionalBits));
	return ;
}

//Destructeur par default
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur =
Fixed const &			Fixed::operator = (Fixed const & rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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
/*             OPERATEURS ARITHMETIQUES        */
/***********************************************/

//Operateur +
Fixed 		Fixed::operator + (Fixed const & rhs)
{
	Fixed	result(this->toFloat() + rhs.toFloat());
	return (result);
}

//Operateur -
Fixed 		Fixed::operator - (Fixed const & rhs)
{
	Fixed	result(this->toFloat() - rhs.toFloat());
	return (result);
}

//Operateur *
Fixed 		Fixed::operator * (Fixed const & rhs)
{
	Fixed	result(this->toFloat() * rhs.toFloat());
	return (result);
}

//Operateur /
Fixed 		Fixed::operator / (Fixed const & rhs)
{
	if (rhs.toFloat() == 0.0f)
		std::cout << "Error: division by zero. ";;
	Fixed	result(this->toFloat() / rhs.toFloat());
	return (result);
}


/***********************************************/
/*           OPERATEURS D'INCREMENTATION       */
/***********************************************/

//Operateur de post-incrementation
Fixed		Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	this->_number++;
	return (tmp);
}

//Operateur de pre-incrementation
Fixed &		Fixed::operator ++ (void)
{
	this->_number++;
	return *this;
}

//Operateur de post-decrementation
Fixed		Fixed::operator -- (int)
{
	Fixed	tmp(*this);

	this->_number--;
	return (tmp);
}

//Operateur de pre-decrementation
Fixed &		Fixed::operator -- (void)
{
	this->_number--;
	return *this;
}


/***********************************************/
/*            OPERATEURS DE COMPARAISON        */
/***********************************************/

bool		Fixed::operator > (Fixed const & rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	else
		return (false);
}

bool		Fixed::operator < (Fixed const & rhs)
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	else
		return (false);
}

bool		Fixed::operator >= (Fixed const & rhs)
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	else
		return (false);
}

bool		Fixed::operator <= (Fixed const & rhs)
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	else
		return (false);
}

bool		Fixed::operator == (Fixed const & rhs)
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	else
		return (false);
}

bool		Fixed::operator != (Fixed const & rhs)
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	else
		return (false);
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

Fixed	Fixed::min(Fixed & first, Fixed & second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

Fixed Fixed::min(Fixed const & first, Fixed const & second)
{
	if (first.toFloat() < second.toFloat())
		return (first);
	else
		return (second);
}

Fixed Fixed::max(Fixed & first, Fixed & second) 
{
	if (first > second)
		return (first);
	else
		return (second);
}

Fixed Fixed::max(Fixed const & first, Fixed const & second)
{
	if (first.toFloat() > second.toFloat())
		return (first);
	else
		return (second);
}
