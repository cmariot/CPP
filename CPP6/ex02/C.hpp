/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:23:33 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include <iostream>

class	C
{

	public:

		C(void);										// Constructeur par default
		C(C const & copy);						// Constructeur par copie
		~C(void);									// Destructeur
		C const &	operator = (C const & rhs);	// Surcharge d'opérateur d’affectation


	private:


} ;

#endif

