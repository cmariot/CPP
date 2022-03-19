/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:53:06 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 13:06:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{

	public:

		WrongCat(void);										// Constructeur par default
		WrongCat(WrongCat const & copy);						// Constructeur par copie
		~WrongCat(void);									// Destructeur
		WrongCat const &	operator = (WrongCat const & rhs);	// Surcharge d'opérateur d’affectation

} ;

#endif

