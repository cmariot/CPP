/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 12:22:17 by cmariot          ###   ########.fr       */
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

		virtual ~Animal(void);								// Destructeur

		Animal const &	operator = (Animal const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	getType(void) const;					// Return type

		virtual void	makeSound(void) const;				// Fonction membre virtual = methode


	protected:

		std::string type;


} ;

#endif
