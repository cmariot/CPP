/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:29 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/24 08:54:26 by cmariot          ###   ########.fr       */
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
	
	this->_name				= "default";
	this->_hit_points		= 100;
	this->_energy_points	= 100;
	this->_attack_damage	= 30;
	
	return ;
}

//Constructeur par name
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " constructor called." << std::endl;

	this->_name				= name;
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

//Operateur <<
std::ostream &	operator << (std::ostream & output, FragTrap const & rhs)
{
	output << "_name          : " << rhs.getName() << std::endl;
	output << "_hit_points    : " << rhs.getHP() << std::endl;
	output << "_energy_points : " << rhs.getEnergy() << std::endl;
	output << "_attack_damage : " << rhs.getAttackDamage() << std::endl;
	return (output);
}


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

std::string FragTrap::getName(void) const
{
	return (this->_name);
}

int FragTrap::getHP(void) const
{
	return (this->_hit_points);
}

int FragTrap::getEnergy(void) const
{
	return (this->_energy_points);
}

int FragTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}
