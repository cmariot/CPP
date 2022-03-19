/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:41:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 11:08:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"


/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Point::Point(void): _x(0), _y(0)
{
	return ;
}

//Constructeur par copie
Point::Point(Point const & copy): _x(copy.get_x()), _y(copy.get_y())
{
	return ;
}

//Constructeur par float constants
Point::Point(float const x, float const y): _x(x), _y(y)
{
	return ;
}

//Destructeur par default
Point::~Point(void)
{
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur =
Point &	Point::operator = (Point & rhs)
{
	return (rhs);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Point const & rhs)
{
	output << "x = ";
	output << rhs.get_x();
	output << " : y = ";
	output << rhs.get_y();
	return (output);
}


/***********************************************/
/*             FONCTIONS MEMBRES               */
/***********************************************/

Fixed 	Point::get_x(void) const
{
	return (this->_x);
}

Fixed 	Point::get_y(void) const
{
	return (this->_y);
}

void	Point::display(void) const
{
	std::cout << *this << std::endl;
}
