/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/15 14:02:07 by cmariot          ###   ########.fr       */
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

		Fixed const &	operator = (Fixed const & rhs);		// Surcharge d'opérateur d’affectation

		Fixed 	operator + (Fixed const & rhs);		// Operateur arithmetique +
		Fixed 	operator - (Fixed const & rhs);		// Operateur arithmetique -
		Fixed 	operator * (Fixed const & rhs);		// Operateur arithmetique *
		Fixed 	operator / (Fixed const & rhs);		// Operateur arithmetique /

		Fixed &	operator ++ (void);					// Operateur de pre incrementation
		Fixed	operator ++ (int);					// Operateur de post incremention
		Fixed &	operator -- (void);					// Operateur de pre decremention
		Fixed	operator -- (int);					// Operateur de post decremention

		bool	operator >  (Fixed const & rhs);	// Opérateur de comparaison >
		bool	operator <  (Fixed const & rhs);	// Opérateur de comparaison <
		bool	operator >= (Fixed const & rhs);	// Opérateur de comparaison >=
		bool	operator <= (Fixed const & rhs);	// Opérateur de comparaison <=
		bool	operator == (Fixed const & rhs);	// Opérateur de comparaison ==
		bool	operator != (Fixed const & rhs);	// Opérateur de comparaison !=

		int		getRawBits(void) const;				// Retourne la valeur du nombre a virgule sans la convertir
		void	setRawBits(int const raw);			// Initialise la valeur du nombre a virgule fixe
		float	toFloat(void) const;				// Convertit _number en float
		int		toInt(void) const;					// Convertit _number en int

		static Fixed	min(Fixed & first, Fixed & second);				// Retourne le min
		static Fixed 	min(Fixed const & first, Fixed const & second);	// Retourne le min (entre deux constants)
		static Fixed 	max(Fixed & first, Fixed & second);				// Retourne le max
		static Fixed 	max(Fixed const & first, Fixed const & second);	// Retourne le max (entre deux constants)


	private:

		int					_number;				// Stocke la valeur du nombre a virgule fixe
		static int const	_fractionalBits;		// Stocke le nombre de bits de la partie fractionnaire,
													// dont la valeur sera toujours le literal entier 8.

} ;

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif
