/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:53:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 13:04:19 by cmariot          ###   ########.fr       */
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
	this->type = "Dog";
	this->Animal::type = this->type;
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
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Dog const &	Dog::operator = (Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}


/***********************************************/
/*             OPERATEURS ARITHMETIQUES        */
/***********************************************/

/***********************************************/
/*            OPERATEURS D'INCREMENTATION      */
/***********************************************/

/***********************************************/
/*             OPERATEURS DE COMPARAISON       */
/***********************************************/

/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	Dog::makeSound(void) const
{
	std::cout << "* Ouaf *" << std::endl;
}
