/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:39:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 09:38:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
ClapTrap::ClapTrap(void) : _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}

//Constructeur par nom
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor with name called." << std::endl;
	return ;
}

//Constructeur par copie
ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
ClapTrap const &	ClapTrap::operator = (ClapTrap const & rhs)
{
	std::cout << "ClapTrap '=' operator used." << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void	ClapTrap::attack(const std::string & target)
{
	if (this->_energy_points && this->_hit_points)
	{
		this->_energy_points -= 1;
		
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attack_damage <<  " points of damage !" << std::endl;
	}
	else
	{
		std::cout << this->_name << " could not attack." << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	if (this->_hit_points)
	{
		std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit point(s)" << std::endl;
		if (this->_hit_points >= amount)
			this->_hit_points -= amount;
		else
			this->_hit_points = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already destroyed." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points && this->_hit_points)
	{
		this->_energy_points -= 1;
		this->_hit_points += amount;

		std::cout << "ClapTrap " << this->_name << " is repaired";
		std::cout << ", he won " << amount <<  " hit point(s) !" << std::endl;
	}
	else
	{
		std::cout << this->_name << " could not be repaired." << std::endl;
	}
	return ;
}

unsigned int	ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}
