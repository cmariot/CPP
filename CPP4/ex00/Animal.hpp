/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 10:08:55 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{

	public:

		Animal(void);										// Constructeur par default
		Animal(Animal const & copy);						// Constructeur par copie
		~Animal(void);										// Destructeur
		Animal const &	operator = (Animal const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	get_type(void) const;					// Return type

	private:

	protected:

		std::string type;


} ;

#endif

