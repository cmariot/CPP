/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 18:31:14 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed 
{
	public:

		Fixed(void);				//Constructeur par default
		~Fixed(void);				//Destructeur par default
		Fixed(const Fixed &obj);	//Constructeur de recopie
									//Opérateur d’affectation

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_number;
		static int const	_nb_bits;
} ;

#endif
