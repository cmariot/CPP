/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:13:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 21:08:45 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap(void);											// Constructeur par default
		DiamondTrap(std::string name);								// Constructeur par name
		DiamondTrap(DiamondTrap const & copy);						// Constructeur par copie
		
		~DiamondTrap(void);											// Destructeur
		
		DiamondTrap const &	operator = (DiamondTrap const & rhs);	// Surcharge d'opérateur d’affectation

		void	attack(std::string const & target);					// Surcharge de la fonction attack heritee

		void	whoAmI(void) const;									// Affiche le nom du Diamond et celui du Claptrap

		void			set_attributes(void);

		std::string		get_name(void) const;
		std::string		get_ClapTrap_name(void) const;
		int				get_hit_points(void) const;
		int				get_energy_points(void) const;
		int				get_damage_points(void) const;

	private:

		std::string		_name;										// Nom du DiamondTrap

} ;

std::ostream & operator << (std::ostream & o, DiamondTrap const & rhs);	// Surcharge d'operateur <<

#endif

