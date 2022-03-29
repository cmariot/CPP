/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:41:57 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 08:47:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Data::Data(void) : _data(0)
{
	//std::cout << "Data default constructor called." << std::endl;
	return ;
}

//Constructeur par unsigned int
Data::Data(unsigned int value) : _data(value)
{
	//std::cout << "Data constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Data::Data(Data const & copy)
{
	//std::cout << "Data copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Data::~Data(void)
{
	//std::cout << "Data destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Data const &	Data::operator = (Data const & rhs)
{
	this->_data = rhs._data;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	Data::setData(unsigned int value)
{
	this->_data = value;
}

unsigned int	Data::getData(void) const
{
	return (this->_data);
}
