/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:13:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 09:12:53 by cmariot          ###   ########.fr       */
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

		void	attack(std::string const & target);					// Surcharge de la fonction attack 
		void	whoAmI(void) const;									// Affiche le nom du Diamond et celui du Claptrap
		void	set_attributes(void);								// Set the member attributes of DiamondTrap

		std::string		get_name(void) const;						// Return _name
		std::string		get_ClapTrap_name(void) const;				// Return ClapTrap::_name
		int				get_hit_points(void) const;					// Return _hit_points
		int				get_energy_points(void) const;				// Return _energy_points
		int				get_damage_points(void) const;				// Return _attack_damage

	private:

		std::string		_name;										// Nom du DiamondTrap

} ;

// Surcharge d'operateur <<
std::ostream & operator << (std::ostream & o, DiamondTrap const & rhs);

#endif

