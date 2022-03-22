/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/22 09:01:28 by cmariot          ###   ########.fr       */
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
	if (this->_ice_to_delete)
		delete [] this->_ice_to_delete;
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
	if (idx >= 0 && idx <= 4 && this->_inventaire[idx])
	{
		if (this->_inventaire[idx]->getType() == "ice")
		{
			this->_nb_ice_to_delete += 1;
			AMateria *tmp_array = new Ice[this->_nb_ice_to_delete];
			int	i = 0;
			while (i < this->_nb_ice_to_delete - 1)
			{
				tmp_array[i] = this->_ice_to_delete[i];
				i++;
			}
			tmp_array[i] = *(this->_inventaire[idx]);
			delete [] this->_ice_to_delete;
			this->_ice_to_delete = tmp_array;
		}
		else if (this->_inventaire[idx]->getType() == "cure") 
		{
			this->_nb_cure_to_delete += 1;
			AMateria *tmp_array2 = new Cure[this->_nb_cure_to_delete];
			int	j = 0;
			while (j < this->_nb_cure_to_delete - 1)
			{
				tmp_array2[j] = this->_cure_to_delete[j];
				j++;
			}
			tmp_array2[j] = *(this->_inventaire[idx]);
			delete [] this->_cure_to_delete;
			this->_cure_to_delete = tmp_array2;
		}
		this->_inventaire[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4 && this->_inventaire[idx])
	{
		this->_inventaire[idx]->use(target);
		delete this->_inventaire[idx];
		this->_inventaire[idx] = NULL;
	}
}
