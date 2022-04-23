/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:24:45 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/23 20:27:06 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class	Span
{

	public:

		Span(size_t N);									// Constructeur par taille
		Span(Span const & copy);						// Constructeur par copie

		~Span(void);									// Destructeur

		Span const & operator = (Span const & rhs);		// Surcharge d'opérateur d’affectation

		void	addNumber(int number);					// Add a number at the end of the container
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		size_t	shortestSpan(void) const;				// Return the smallest gap between 2 numbers of the container
		size_t	longestSpan(void) const;				// Return the bigest gap between 2 numbers of the container

		std::vector<int>	*vector;					// Array of elements
		size_t				size;						// Size of the container
		size_t				nb_elements;				// Current number of elements

		class SpanFull : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Exception: Can't add a number, the span is full.");
				}
		} ;

		class NotEnoughNumbers : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Exception: Can't return a value, there is not enough numbers.");
				}
		} ;

} ;

std::ostream & operator << (std::ostream & output, Span & rhs);

#endif
