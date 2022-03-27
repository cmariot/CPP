/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/26 21:24:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cast::Cast(char *arg) : _str(arg), _char(0), _int(0), _float(0), _double(0), _char_non_displayable(false),
	_int_overflow(false), _float_overflow(false), _double_overflow(false), _unknown_type(false)
{
	if (isChar(this->_str))
	{
		Cast::strToChar();
		Cast::convertChar();
	}
	else if (isInt(this->_str))
	{
		Cast::strToInt();
		Cast::convertInt();
	}
	else if (isFloat(this->_str))
	{
		Cast::strToFloat();
		Cast::convertFloat();
	}
	else if (isDouble(this->_str))
	{
		Cast::strToDouble();
		Cast::convertDouble();
	}
	else
	{
		this->_unknown_type = true;
	}
	return ;
}

//Constructeur par copie
Cast::Cast(Cast const & copy)
{
	*this = copy;
	return ;
}

//Destructeur
Cast::~Cast(void)
{
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Cast const &	Cast::operator = (Cast const & rhs)
{
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	this->_char_non_displayable = rhs._char_non_displayable;
	this->_int_overflow = rhs._int_overflow;
	this->_float_overflow = rhs._float_overflow;
	this->_double_overflow = rhs._double_overflow;
	return (*this);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Cast const & rhs)
{
	output << "char   : " << rhs.getChar() << std::endl;
	output << "int    : " << rhs.getInt() << std::endl;
	output << "float  : " << rhs.getFloat() << "f" << std::endl;
	output << "double : " << rhs.getDouble() << std::endl;
	return (output);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/

bool	Cast::isChar(std::string str) const
{
	if (str.length() != 1 || isdigit(str[0]) == true)
		return (false);
	return (true);
}

bool	Cast::isInt(std::string str) const
{
	for (size_t i = 0 ; i < str.length() ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

bool	Cast::isFloat(std::string str) const
{
	int	number_of_points = 0;

	if (str[str.length() - 1] != 'f')
		return (false);
	for (size_t i = 0 ; i < str.length() - 1 ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
		{
			if (str[i] == '.' && ++number_of_points == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

bool	Cast::isDouble(std::string str) const
{
	int	number_of_points = 0;

	for (size_t i = 0 ; i < str.length() ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
		{
			if (str[i] == '.' && ++number_of_points == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

void	Cast::strToChar(void)
{
	this->_char = this->_str[0];
	if (isprint(this->_char) == false)
		this->_char_non_displayable = true;
}

void	Cast::strToInt(void)
{
	long	tmp;

	tmp = strtol(_str.c_str(), NULL, 0);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		this->_int = static_cast<int>(tmp);
	else
		this->_int_overflow = true;
}

void	Cast::strToFloat(void)
{
	char	*end;
	float	tmp;

	tmp = strtod(this->_str.c_str(), &end);
	if ((end == this->_str.c_str() + (this->_str.length() - 1)) && *end == 'f')
		this->_float = tmp;
	else
		this->_float_overflow = true;
}

void	Cast::strToDouble(void)
{
	char	*end;
	float	tmp;

	tmp = strtod(this->_str.c_str(), &end);
	if (end == this->_str.c_str() + this->_str.length())
		this->_double = tmp;
	else
		this->_double_overflow = true;
}

void	Cast::convertChar(void)
{
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void	Cast::convertInt(void)
{
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}

void	Cast::convertFloat(void)
{
	this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
}

void	Cast::convertDouble(void)
{
	this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
}

char	Cast::getChar(void) const
{
	return (this->_char);
}

int		Cast::getInt(void) const
{
	return (this->_int);
}

float	Cast::getFloat(void) const
{
	return (this->_float);
}

double	Cast::getDouble(void) const
{
	return (this->_double);
}


