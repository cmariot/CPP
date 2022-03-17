/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 12:07:16 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	
	this->_name				= "default_scavtrap";
	this->_hit_points		= 100;
	this->_energy_points	= 100;
	this->_attack_damage	= 30;
	
	return ;
}

//Constructeur par copie
FragTrap::FragTrap(FragTrap const & copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
FragTrap const &	FragTrap::operator = (FragTrap const & rhs)
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

void	FragTrap::attack(const std::string & target)
{
	if (this->_energy_points && this->_hit_points)
	{
		this->_energy_points -= 1;
		
		std::cout << "FragTrap " << this->_name <<  " attacks " << target;
		std::cout << ", causing " << this->_attack_damage <<  " points of damage !" << std::endl;
	}
	else
	{
		std::cout << this->_name << " could not attack." << std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys(void) const
{
	
		std::cout << "FragTrap " << this->_name <<  " want a highfive !" << std::endl;
}
