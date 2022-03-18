/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:39:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 12:20:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{

	public:

		ClapTrap(void);											// Constructeur par default
		ClapTrap(std::string name);								// Constructeur par nom
		ClapTrap(ClapTrap const & copy);						// Constructeur par copie
		~ClapTrap(void);										// Destructeur
		ClapTrap const &	operator = (ClapTrap const & rhs);	// Surcharge d'opérateur d’affectation

		void attack(const std::string& target);					// Fait perdre _attack_damage a target (coute 1 energie)
		void takeDamage(unsigned int amount);					// Perd amount _hit_points
		void beRepaired(unsigned int amount);					// Gagne amount _hit_points (coute 1 energie)

		unsigned int	get_hit_points(void) const;				// Retourne le nombre de points de vie

	private:

		std::string		_name;									// Nom du ClapTrap
		unsigned int	_hit_points;							// Points de vie
		unsigned int	_energy_points;							// Points d'energie
		unsigned int	_attack_damage;							// Dommages d'attaque

} ;

#endif
