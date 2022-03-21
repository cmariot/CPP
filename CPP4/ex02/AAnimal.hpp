/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:49:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 14:17:38 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{

	public:

		AAnimal(void);										// Constructeur par default
		AAnimal(AAnimal const & copy);						// Constructeur par copie

		virtual ~AAnimal(void);								// Destructeur

		AAnimal const &	operator = (AAnimal const & rhs);	// Surcharge d'opérateur d’affectation

		std::string	getType(void) const;					// Return type

		virtual void	makeSound(void) const = 0;				// Fonction membre virtual = methode


	protected:

		std::string type;


} ;

#endif
