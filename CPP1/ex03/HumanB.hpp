/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:16:30 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/11 14:11:14 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	public:

		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);

		void	setWeapon(Weapon &weapon);
		void	attack(void) const;

	private:

		std::string	_name;
		Weapon		*_weapon;
		
		std::string	_get_name(void) const;
		std::string	_get_type(void) const;

};

#endif
