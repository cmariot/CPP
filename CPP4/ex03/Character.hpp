/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 19:36:14 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class	Character : public ICharacter
{

	public:

		Character(std::string name);									// Constructeur par name
		Character(Character const & copy);								// Constructeur par copie
		
		~Character(void);												// Destructeur
		
		Character const &	operator = (Character const & rhs);			// Surcharge d'opérateur d’affectation
		
		virtual std::string const &	getName(void) const;				// Retourne _name
		virtual void				equip(AMateria* m);					// Clone m dans l'inventaire et la delete
		virtual void				unequip(int idx);					// Retire la materia [idx] de l'inventaire mais ne la delete pas
		virtual void				use(int idx, ICharacter& target);	// Utilise la materia sur la target

	private:

		std::string		_name;											// Nom du personnage
		AMateria*		_inventaire[4];									// Inventaire pouvant comporter jusqu'a 4 materias
		
		AMateria*		_to_delete;										// Liste des AMateria a delete si unequip
		int				_to_delete_nb;									// Nombre de materia a delete a la fin

} ;

#endif

