/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 13:06:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cat::Cat(void)
{
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
	this->Animal::type = this->type;
	return ;
}

//Constructeur par copie
Cat::Cat(Cat const & copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Cat const &	Cat::operator = (Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	Cat::makeSound(void) const
{
	std::cout << "* Miaou *" << std::endl;
}
