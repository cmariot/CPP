/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:27:01 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 18:34:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia_source[i] = NULL;
	return ;
}

//Constructeur par copie
MateriaSource::MateriaSource(MateriaSource const & copy)
{
	//std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
MateriaSource::~MateriaSource(void)
{
	//std::cout << "MateriaSource destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		if (_materia_source[i] != NULL)
			delete _materia_source[i];
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
MateriaSource const &	MateriaSource::operator = (MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia_source[i])
			delete this->_materia_source[i];
	
	for (int i = 0; i < 4; i++)
		if (rhs._materia_source[i])
			this->_materia_source[i] = rhs._materia_source[i]->clone();

	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void		MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_materia_source[i] == NULL)
		{
			//std::cout << "Materia de type " << materia->getType() << " ajoutee a l'index " << i << std::endl;
			_materia_source[i] = materia->clone();
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_source[i] && this->_materia_source[i]->getType() == type)
		{
			//std::cout << "Copie de la materia a l'index " << i <<  " et de type " << this->_materia_source[i]->getType() << " clonee" << std::endl;
			return (this->_materia_source[i]->clone());
		}
	}
	return (0);
}
