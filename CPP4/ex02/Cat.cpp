/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 10:58:44 by cmariot          ###   ########.fr       */
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
	type = "Cat";
	AAnimal::type = type;
	_brain = new Brain;
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
	delete _brain;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Cat const &	Cat::operator = (Cat const & rhs)
{
	type = rhs.type;
	_brain = new Brain(*(rhs._brain));
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	Cat::makeSound(void) const
{
	std::cout << "* Miaou *" << std::endl;
}

void	Cat::set_idea(int i, std::string idea)
{
	if (i < 0 || i > 99)
		std::cout << "Error, out of range [0;99]" << std::endl;
	else
		_brain->ideas[i] = idea;
}

std::string	Cat::get_idea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Error, out of range [0;99]" << std::endl;
		return ("Error");
	}
	else
		return (_brain->ideas[i]);
}
