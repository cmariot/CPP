/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 17:30:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class	Character : public ICharacter
{

	public:

		Character(std::string name);							// Constructeur par name
		Character(Character const & copy);						// Constructeur par copie
		
		~Character(void);										// Destructeur
		
		Character const &	operator = (Character const & rhs);	// Surcharge d'opérateur d’affectation
		
		virtual std::string const &	getName(void) const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

	private:

		std::string		_name;									// Nom du personnage
		AMateria*		_inventaire[4];						// Inventaire pouvant comporter jusqu'a 4 materias


} ;

#endif

