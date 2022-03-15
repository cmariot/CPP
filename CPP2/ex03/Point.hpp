/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:34:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/15 16:42:18 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{

	public:

		Point(void);								// Constructeur par default
		Point(float const x, float const y);		// Constructeur par flottants
		Point(Point const & copy);					// Constructeur par copie

		~Point(void);								// Destructeur par default

		Point &	operator = (Point & rhs);			// Surcharge d'opérateur d’affectation

		Fixed 	get_x(void) const;
		Fixed  	get_y(void) const;
		
		void  	display(void) const;


	private:

		Fixed const		_x;
		Fixed const		_y;


} ;

std::ostream & operator << (std::ostream & o, Point const & rhs);

#endif
