/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:52:54 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 13:01:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{

	public:

		WrongAnimal(void);										// Constructeur par default
		WrongAnimal(WrongAnimal const & copy);						// Constructeur par copie
		~WrongAnimal(void);									// Destructeur
		WrongAnimal const &	operator = (WrongAnimal const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	getType(void) const;					// Return type

		virtual void	makeSound(void) const;				// Fonction membre virtual = methode


	protected:

		std::string type;

} ;

#endif

