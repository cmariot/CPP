/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 18:13:42 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal
{

	public:

		Cat(void);									// Constructeur par default
		Cat(Cat const & copy);						// Constructeur par copie
		~Cat(void);									// Destructeur
		Cat const &	operator = (Cat const & rhs);	// Surcharge d'opérateur d’affectation

		void	makeSound(void) const;

	private:


} ;

#endif

