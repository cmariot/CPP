/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:15:59 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 14:33:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

class	HumanA
{
	public:
		HumanA(std::string name, Weapon *weapon);
		~HumanA(void);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
