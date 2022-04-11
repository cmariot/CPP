/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:22:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 11:17:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class	ICharacter;

class	Cure : public AMateria
{

	public:

		Cure(void);										// Constructeur par default
		Cure(Cure const & copy);						// Constructeur par copie

		~Cure(void);									// Destructeur

		Cure const & operator = (AMateria const & rhs);	// Surcharge d'opérateur d’affectation

		AMateria*	clone(void) const;					// Methode pure de AMateria implementee dans Cure
		void		use(ICharacter & target);			// Surcharge de la methode simple de AMateria

} ;

#endif
