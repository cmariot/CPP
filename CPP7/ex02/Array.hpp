/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:46 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 14:43:43 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{

	public:

		Array< T >(void);									// Constructeur par default 
														//	-> cree un tableau vide

		Array< T >(unsigned int n);							// Constructeur par unsigned int
														//	-> Cree un aray de n elements initialises a 0

		Array< T >(Array const & copy);						// Constructeur par copie

		~Array< T >(void);									// Destructeur

		Array const &	operator = (Array const & rhs);	// Surcharge d'opérateur d’affectation

														// Surcharge operateur []
	
		unsigned int	size(void) const;				// Retourne le nombre d'elements dans l'array


	private:

		T				**_array;

		unsigned int	_size;


} ;

#endif

