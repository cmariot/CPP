/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:12 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:23:12 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include <iostream>

class	A
{

	public:

		A(void);										// Constructeur par default
		A(A const & copy);						// Constructeur par copie
		~A(void);									// Destructeur
		A const &	operator = (A const & rhs);	// Surcharge d'opérateur d’affectation


	private:


} ;

#endif

