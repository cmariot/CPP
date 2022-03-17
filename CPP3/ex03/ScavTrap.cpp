/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 09:15:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_name				= "default_scavtrap";
	this->_hit_points		= 100;
	this->_energy_points	= 50;
	this->_attack_damage	= 20;
	return ;
}

//Constructeur par copie
ScavTrap::ScavTrap(ScavTrap const & copy)
{
	//std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
ScavTrap const &	ScavTrap::operator = (ScavTrap const & rhs)
{
	this->_name				= rhs._name;
	this->_hit_points		= rhs._hit_points;
	this->_energy_points	= rhs._energy_points;
	this->_attack_damage	= rhs._attack_damage;
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

void	ScavTrap::attack(const std::string & target)
{
	if (this->_energy_points && this->_hit_points)
	{
		this->_energy_points -= 1;
		
		std::cout << "ScavTrap " << this->_name <<  " attacks " << target;
		std::cout << ", causing " << this->_attack_damage <<  " points of damage !" << std::endl;
	}
	else
	{
		std::cout << this->_name << " could not attack." << std::endl;
	}
	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return ;
}
