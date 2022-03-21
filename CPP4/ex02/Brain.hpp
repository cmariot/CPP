/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:49:15 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 13:06:02 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{

	public:

		Brain(void);									// Constructeur par default
		Brain(Brain const & copy);						// Constructeur par copie
		~Brain(void);									// Destructeur
		Brain const &	operator = (Brain const & rhs);	// Surcharge d'opérateur d’affectation

		void		set_idea(int i, std::string idea);
		std::string	get_idea(int i) const;

		std::string	_ideas[100];

} ;

#endif

