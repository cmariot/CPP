/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/16 19:23:58 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap : public ClapTrap
{

	public:

		ScavTrap(void);										// Constructeur par default
		ScavTrap(ScavTrap const & copy);						// Constructeur par copie
		~ScavTrap(void);									// Destructeur
		ScavTrap const &	operator = (ScavTrap const & rhs);	// Surcharge d'opérateur d’affectation


	private:


} ;

#endif

