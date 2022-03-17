/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:13:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 12:43:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, FragTrap
{

	public:

		DiamondTrap(void);											// Constructeur par default
		DiamondTrap(std::string name);								// Constructeur par name
		DiamondTrap(DiamondTrap const & copy);						// Constructeur par copie
		
		~DiamondTrap(void);											// Destructeur
		
		DiamondTrap const &	operator = (DiamondTrap const & rhs);	// Surcharge d'opérateur d’affectation


	private:

		std::string		_name;										// Nom du DiamondTrap

} ;

#endif

