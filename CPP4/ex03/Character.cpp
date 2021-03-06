/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 11:28:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par name
Character::Character(std::string name) : _name(name), _nb_ice_to_delete(0), _nb_cure_to_delete(0)
{
	//std::cout << "Character default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	_ice_to_delete = NULL;
	_cure_to_delete = NULL;
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
	if (_nb_ice_to_delete)
		delete [] _ice_to_delete;
	if (_nb_cure_to_delete)
		delete [] _cure_to_delete;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Character const &	Character::operator = (Character const & rhs)
{
	_name = rhs._name;

	for (int i = 0; i < 4; i++)
		if (this->_inventaire[i])
			delete _inventaire[i];
	
	for (int i = 0; i < 4; i++)
		if (rhs._inventaire[i])
			_inventaire[i] = rhs._inventaire[i]->clone();
	
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

std::string const & Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4 ; i++)
	{
		if (_inventaire[i] == NULL)
		{
			_inventaire[i] = m->clone();
			delete m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventaire[idx] != NULL)
	{
		if (_inventaire[idx]->getType() == "ice")
		{
			_nb_ice_to_delete += 1;
			AMateria *tmp_array = new Ice[_nb_ice_to_delete];
			int	i = 0;
			while (i < _nb_ice_to_delete - 1)
			{
				tmp_array[i] = _ice_to_delete[i];
				i++;
			}
			tmp_array[i] = *(_inventaire[idx]);
			if (_ice_to_delete)
				delete [] _ice_to_delete;
			_ice_to_delete = tmp_array;
			_inventaire[idx] = NULL;
		}
		else if (_inventaire[idx]->getType() == "cure") 
		{
			_nb_cure_to_delete += 1;
			AMateria *tmp_array2 = new Cure[_nb_cure_to_delete];
			int	j = 0;
			while (j < _nb_cure_to_delete - 1)
			{
				tmp_array2[j] = _cure_to_delete[j];
				j++;
			}
			tmp_array2[j] = *(_inventaire[idx]);
			if (_cure_to_delete)
				delete [] _cure_to_delete;
			_cure_to_delete = tmp_array2;
			_inventaire[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _inventaire[idx])
	{
		_inventaire[idx]->use(target);
		delete _inventaire[idx];
		_inventaire[idx] = NULL;
	}
}
