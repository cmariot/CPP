/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:21:46 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 16:51:31 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class	ICharacter;

/* AMateria est une classe abstraire, elle ne peut pas etre instanciee par elle meme.
 * Les classes Ice et Cure heritent des attributs et fonctions membre de AMateria.
 * Les fonctions membres 'virtual' sont des methodes. */

class	AMateria
{

	public:

		AMateria(void);											// Constructeur par default
		AMateria(std::string const & type);						// Constructeur par type
		AMateria(AMateria const & copy);						// Constructeur par copie

		virtual ~AMateria(void);								// Destructeur

		AMateria const &	operator = (AMateria const & rhs);	// Surcharge d'opérateur d’affectation

		std::string const & getType(void) const;				// Returns the materia type

		virtual AMateria* clone(void) const = 0;				// Methode pure, instanciee a 0 -> classe Abstraite
																// Methode mise en place pour les classes filles

		virtual void use(ICharacter& target);					// Methode use, definie pour la classe et ses filles


	protected:

		std::string	_type;										// Type de materia


} ;

#endif
