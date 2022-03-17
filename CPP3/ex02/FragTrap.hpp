/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 09:20:28 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap : public ClapTrap
{

	public:

		FragTrap(void);											// Constructeur par default
		FragTrap(ScavTrap const & copy);						// Constructeur par copie
		~FragTrap(void);										// Destructeur
		FragTrap const &	operator = (FragTrap const & rhs);	// Surcharge d'opérateur d’affectation

		void attack(const std::string & target);				// Surcharge de la fonction membre heritee
	
		void guardGate(void) const;								// Fonction membre propre a la classe

} ;

#endif
