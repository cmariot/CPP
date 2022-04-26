/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/24 09:18:34 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap(void);											// Constructeur par default
		ScavTrap(std::string name);								// Constructeur par name
		ScavTrap(ScavTrap const & copy);						// Constructeur par copie
		~ScavTrap(void);										// Destructeur
		ScavTrap const &	operator = (ScavTrap const & rhs);	// Surcharge d'opérateur d’affectation

		void	 attack(const std::string & target);			// Surcharge de la fonction membre heritee
	
		void	guardGate(void) const;							// Fonction membre propre a la classe

		std::string	getName(void) const;
		int	getHP(void) const;
		int	getEnergy(void) const;
		int	getAttackDamage(void) const;
} ;

std::ostream & operator << (std::ostream & o, ScavTrap const & rhs);

#endif
