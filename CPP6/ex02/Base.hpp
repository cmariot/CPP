/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:07 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:23:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class	Base
{

	public:

		Base(void);										// Constructeur par default
		Base(Base const & copy);						// Constructeur par copie
		~Base(void);									// Destructeur
		Base const &	operator = (Base const & rhs);	// Surcharge d'opérateur d’affectation


	private:


} ;

#endif

