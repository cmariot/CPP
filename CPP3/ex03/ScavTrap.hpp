/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 16:09:50 by cmariot          ###   ########.fr       */
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

		void attack(const std::string & target);				// Surcharge de la fonction membre heritee de ClapTrap

		void guardGate(void) const;								// Fonction membre propre a la classe

		void	display_specs(void) const;
} ;

#endif
