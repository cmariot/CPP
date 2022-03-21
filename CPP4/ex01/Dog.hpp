/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:53:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 13:08:43 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// La classe Dog herite des attributs et fonctions membre de Animal
class	Dog : public Animal
{

	public:

		Dog(void);									// Constructeur par default
		Dog(Dog const & copy);						// Constructeur par copie
		virtual ~Dog(void);							// Destructeur
		Dog const &	operator = (Dog const & rhs);	// Surcharge d'opérateur d’affectation

		virtual void	makeSound(void) const;		// Fonction membre virtual = methode

		void		set_idea(int i, std::string idea);
		std::string	get_idea(int i) const;

	private:

		Brain	*_brain;

} ;

#endif
