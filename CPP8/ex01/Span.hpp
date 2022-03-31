/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:24:45 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/31 18:30:35 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class	Span
{

	public:

		Span(void);										// Constructeur par default
		Span(size_t N);									// Constructeur par taille
		Span(Span const & copy);						// Constructeur par copie

		~Span(void);									// Destructeur

		Span const & operator = (Span const & rhs);		// Surcharge d'opérateur d’affectation

		void	addNumber(int number);					// Add a number at the end of the container
		size_t	shortestSpan(void) const;				// Return the smallest gap between 2 numbers of the container
		size_t	longestSpan(void) const;				// Return the bigest gap between 2 numbers of the container


	private:

		int		*_container;							// Array of elements
		size_t	_size;									// Size of the container
		size_t	_nb_elements;							// Current number of elements

} ;

#endif

