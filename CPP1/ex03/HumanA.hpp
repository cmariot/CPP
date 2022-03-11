/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:15:59 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/11 14:11:12 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class	HumanA
{

	public:

		HumanA(std::string name, Weapon &weapon);
		HumanA(void);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string	_name;
		Weapon		&_weapon;
		
		std::string	_get_name(void) const;
		std::string	_get_type(void) const;

};

#endif
