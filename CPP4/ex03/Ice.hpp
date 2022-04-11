/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:22:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 09:03:08 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	ICharacter;

class	Ice : public AMateria
{

	public:

		Ice(void);										// Constructeur par default
		Ice(Ice const & copy);							// Constructeur par copie
		
		~Ice(void);										// Destructeur
		
		Ice const &	operator = (AMateria const & rhs);	// Surcharge d'opérateur d’affectation

		AMateria*	clone(void) const;					// Methode pure de AMateria implementee dans Cure
		void		use(ICharacter& target);			// Surcharge de la methode simple de AMateria

} ;

#endif
