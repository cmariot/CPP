/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:23:23 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include <iostream>

class	B
{

	public:

		B(void);										// Constructeur par default
		B(B const & copy);						// Constructeur par copie
		~B(void);									// Destructeur
		B const &	operator = (B const & rhs);	// Surcharge d'opérateur d’affectation


	private:


} ;

#endif

