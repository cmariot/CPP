/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 12:34:26 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// La classe Cat herite des attributs et fonctions membre de Animal
class	Cat : public Animal
{

	public:

		Cat(void);									// Constructeur par default
		Cat(Cat const & copy);						// Constructeur par copie
		virtual ~Cat(void);							// Destructeur
		Cat const &	operator = (Cat const & rhs);	// Surcharge d'opérateur d’affectation

		virtual void	makeSound(void) const;		// Fonction membre virtual = methode

		void		set_idea(int i, std::string idea);
		std::string	get_idea(int i) const;

	private:

		Brain	*_brain;
} ;

#endif

