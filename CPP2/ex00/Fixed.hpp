/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 18:32:36 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{

	public:

		Fixed(void);								// Constructeur par default
		Fixed(Fixed const & copy);					// Constructeur par copie
		~Fixed(void);								// Destructeur par default

		Fixed &	operator = (Fixed const & rhs);		// Surcharge d'opérateur d’affectation

		int		getRawBits(void) const;				// Retourne la valeur du nombre a virgule sans la convertir
		void	setRawBits(int const raw);			// Initialise la valeur du nombre a virgule fixe


	private:

		int					_rawBits;				// Stock la valeur du nombre a virgule fixe
		static int const	_fractionalBits;		// Stock le nombre de bits de la partie fractionnaire,
													// dont la valeur sera toujours le literal entier 8.

} ;

#endif
