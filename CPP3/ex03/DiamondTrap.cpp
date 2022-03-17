/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:13:47 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/17 21:08:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
DiamondTrap::DiamondTrap(void) : _name("default")
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->set_attributes();
	return ;
}

//Constructeur par name
DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap " << _name << " constructor called." << std::endl;
	this->set_attributes();
	return ;
}

//Constructeur par copie
DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
DiamondTrap const &	DiamondTrap::operator = (DiamondTrap const & rhs)
{
	this->_name				= rhs._name;
	this->ClapTrap::_name	= rhs.ClapTrap::_name; 
	this->_hit_points		= rhs._hit_points;
	this->_energy_points	= rhs._energy_points;
	this->_attack_damage	= rhs._attack_damage;
	return (*this);
}

// Surcharge d'operateur <<
std::ostream & operator << (std::ostream & out, DiamondTrap const & rhs)
{
	out << "Name :          " << rhs.get_name() << std::endl;
	out << "ClapTrap Name : " << rhs.get_ClapTrap_name() << std::endl;
	out << "Hit Points :    " << rhs.get_hit_points() << std::endl;
	out << "Energy :        " << rhs.get_energy_points() << std::endl;
	out << "Attack damage : " << rhs.get_damage_points() << std::endl;
	return (out);
}

/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

void DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << this->_name << ", the ";
	std::cout <<  this->ClapTrap::_name << "'s descendant," << std::endl;
}

std::string		DiamondTrap::get_name(void) const
{
	return (this->_name);
}

std::string		DiamondTrap::get_ClapTrap_name(void) const
{
	return (this->ClapTrap::_name);
}

int	DiamondTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

int	DiamondTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int	DiamondTrap::get_damage_points(void) const
{
	return (this->_attack_damage);
}

void	DiamondTrap::set_attributes(void)
{
	this->_hit_points		= FragTrap::_hit_points;
	this->_energy_points	= ScavTrap::_energy_points;
	this->_attack_damage	= FragTrap::_attack_damage;
	this->ClapTrap::_name	= this->_name + "_clap_name";
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
