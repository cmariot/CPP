/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:49:15 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 10:47:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		set_idea(i, "eat, sleep, repeat");
	return ;
}

//Constructeur par copie
Brain::Brain(Brain const & copy)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Brain const &	Brain::operator = (Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return (*this);
}

/***********************************************/
/*                FONCTIONS MEMBRE             */
/***********************************************/

void	Brain::set_idea(int i, std::string idea)
{
	if (i < 0 || i > 99)
		std::cout << "Error, out of range [0;99]" << std::endl;
	else
		ideas[i] = idea;
}

std::string	Brain::get_idea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Error, out of range [0;99]" << std::endl;
		return ("");
	}
	else
		return (ideas[i]);
}
