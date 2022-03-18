/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:53:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 18:10:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{

	public:

		Dog(void);										// Constructeur par default
		Dog(Dog const & copy);						// Constructeur par copie
		~Dog(void);									// Destructeur
		Dog const &	operator = (Dog const & rhs);	// Surcharge d'opérateur d’affectation

		void	makeSound(void) const;

	private:


} ;

#endif

