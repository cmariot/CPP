/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/14 17:06:15 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
	public:

		Fixed(void);								// Constructeur par default
		Fixed(Fixed const & copy);					// Constructeur par copie
		Fixed(int const n);							// Constructeur par int constant
		Fixed(float const f);						// Constructeur par float constant
		~Fixed(void);								// Destructeur par default

		Fixed &	operator = (Fixed const & rhs);		// Surcharge d'opérateur d’affectation

		int		getRawBits(void) const;				// Retourne la valeur du nombre a virgule sans la convertir
		void	setRawBits(int const raw);			// Initialise la valeur du nombre a virgule fixe
		float	toFloat(void) const;				// Convertit _number en float
		int		toInt(void) const;					// Convertir _number en int

	private:

		int					_number;				// Stock la valeur du nombre a virgule fixe
		static int const	_fractionalBits;		// Stock le nombre de bits de la partie fractionnaire,
													// dont la valeur sera toujours le literal entier 8.

} ;

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif
