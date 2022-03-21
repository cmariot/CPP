/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 18:36:28 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par name
Character::Character(std::string name) : _name(name)
{
	//std::cout << "Character default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
	return ;
}

//Constructeur par copie
Character::Character(Character const & copy)
{
	//std::cout << "Character copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Character::~Character(void)
{
	//std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventaire[i] != NULL)
			delete _inventaire[i];
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Character const &	Character::operator = (Character const & rhs)
{
	this->_name = rhs._name;

	for (int i = 0; i < 4; i++)
		if (this->_inventaire[i])
			delete this->_inventaire[i];
	
	for (int i = 0; i < 4; i++)
		if (rhs._inventaire[i])
			this->_inventaire[i] = rhs._inventaire[i]->clone();
	
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4 ; i++)
		if (_inventaire[i] == NULL)
			_inventaire[i] = m->clone();
}

void Character::unequip(int idx)
{
	if (this->_inventaire[idx])
		this->_inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventaire[idx])
	{
		this->_inventaire[idx]->use(target);
		delete this->_inventaire[idx];
		this->_inventaire[idx] = NULL;
	}
}