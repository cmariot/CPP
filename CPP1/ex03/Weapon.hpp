/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:14:58 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 14:30:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
	public:

		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string &getType(void);
		void		setType(std::string new_type);

	private:

		std::string	_type;

};

#endif
