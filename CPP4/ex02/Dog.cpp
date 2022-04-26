/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:53:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 10:58:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Dog::Dog(void)
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	AAnimal::type = type;
	_brain = new Brain;
	return ;
}

//Constructeur par copie
Dog::Dog(Dog const & copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	if (_brain)
		delete _brain;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Dog const &	Dog::operator = (Dog const & rhs)
{
	type = rhs.type;
	_brain = new Brain(*(rhs._brain));
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	Dog::makeSound(void) const
{
	std::cout << "* Ouaf *" << std::endl;
}

void	Dog::set_idea(int i, std::string idea)
{
	if (i < 0 || i > 99)
		std::cout << "Error, out of range [0;99]" << std::endl;
	else
		_brain->ideas[i] = idea;
}

std::string	Dog::get_idea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Error, out of range [0;99]" << std::endl;
		return ("Error");
	}
	else
		return (_brain->ideas[i]);
}
