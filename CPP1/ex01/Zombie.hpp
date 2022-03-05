/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:22:48 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 13:18:31 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie
{

	public:

		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void		set_name(std::string name);
		std::string	get_name(void) const;
		void		announce(void) const;

	private:

		std::string	_name;

};

#endif
