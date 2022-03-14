/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/14 13:17:11 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed 
{
	public:

		Fixed(void);								//Constructeur par default
		Fixed(const Fixed &obj);					//Constructeur de recopie
		Fixed &operator = (Fixed const & rhs);		//Surcharge d'opérateur d’affectation
		~Fixed(void);								//Destructeur par default

		int		getRawBits(void) const;				//Retourne la valeur du nombre a virgule sans la convertir
		void	setRawBits(int const raw);			//Initialise la valeur du nombre a virgule fixe

	private:

		int					_number;				//Stock la valeur du nombre a virgule fixe
		static int const	_fractionalBits;		//Stock le nombre de bits de la partie fractionnaire,
													//dont la valeur sera toujours le literal entier 8.

} ;

#endif
