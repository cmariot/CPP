/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 09:59:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cast::Cast(char *arg) : minus_inf(false), null(false), plus_inf(false), int_conversion_overflow(false), _str(arg), _char(0), _int(0), _float(0), _double(0), _char_non_displayable(false), _int_overflow(false), _float_overflow(false), _double_overflow(false), _unknown_type(false)
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
	minus_inf = rhs.minus_inf;
	null = rhs.null;
	plus_inf = rhs.plus_inf;
	_str = rhs._str;
	_char = rhs._char;
	_int = rhs._int;
	_float = rhs._float;
	_double = rhs._double;
	_char_non_displayable = rhs._char_non_displayable;
	_int_overflow = rhs._int_overflow;
	_float_overflow = rhs._float_overflow;
	_double_overflow = rhs._double_overflow;
	_unknown_type = rhs._unknown_type;
	return (*this);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Cast const & rhs)
{
	if (rhs.impossibleConversion() == true)
		std::cout << "Sorry, couldn't convert your input, it may be caused by an overflow or an unknown type." << std::endl;
	else if (rhs.minus_inf == true)
	{
		output << "char   : impossible" << std::endl;
		output << "int    : impossible" << std::endl;
		output << "float  : -inff" << std::endl;
		output << "double : -inf" << std::endl;
	}
	else if (rhs.null == true)
	{
		output << "char   : impossible" << std::endl;
		output << "int    : impossible" << std::endl;
		output << "float  : nanf" << std::endl;
		output << "double : nan" << std::endl;
	}
	else if (rhs.plus_inf == true)
	{
		output << "char   : impossible" << std::endl;
		output << "int    : impossible" << std::endl;
		output << "float  : +inff" << std::endl;
		output << "double : +inf" << std::endl;
	}
	else
	{
		if (isprint(rhs.getChar()) == true)
			output << "char   : " << rhs.getChar() << std::endl;
		else 
			output << "char   : Non displayable"  << std::endl;
		
		if (rhs.int_conversion_overflow == false) 
			output << "int    : " << rhs.getInt() << std::endl;
		else
			output << "int    : impossible" << std::endl;

		output << "float  : " << rhs.getFloat() << "f" << std::endl;
		output << "double : " << rhs.getDouble() << std::endl;
	}
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

	if (str == "-inff" || str == "nanf" || str == "+inff")
		return (true);
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

	if (str == "-inf" || str == "nan" || str == "+inf")
		return (true);
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

	if (this->_str == "-inff")
		this->minus_inf = true;
	else if (this->_str == "nanf")
		this->null = true;
	else if (this->_str == "+inff")
		this->plus_inf = true;
	else
	{
		tmp = strtod(this->_str.c_str(), &end);
		if ((end == this->_str.c_str() + (this->_str.length() - 1)) && *end == 'f')
			this->_float = tmp;
		else
			this->_float_overflow = true;
	}
}

void	Cast::strToDouble(void)
{
	char	*end;
	float	tmp;

	if (this->_str == "-inf")
		this->minus_inf = true;
	else if (this->_str == "nan")
		this->null = true;
	else if (this->_str == "+inf")
		this->plus_inf = true;
	else
	{
		tmp = strtod(this->_str.c_str(), &end);
		if (end == this->_str.c_str() + this->_str.length())
			this->_double = tmp;
		else
			this->_double_overflow = true;
	}
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
	if (this->_float >= static_cast<float>(INT_MIN) && this->_float <= static_cast<float>(INT_MAX))
		this->_int = static_cast<int>(this->_float);
	else
		this->int_conversion_overflow = true;
	this->_double = static_cast<double>(this->_float);
}

void	Cast::convertDouble(void)
{
	this->_char = static_cast<char>(this->_double);
	if (this->_double >= static_cast<double>(INT_MIN) && this->_double <= static_cast<double>(INT_MAX))
		this->_int = static_cast<int>(this->_float);
	else
		this->int_conversion_overflow = true;
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

bool	Cast::impossibleConversion(void) const
{
	if (this->_int_overflow || this->_double_overflow || this->_float_overflow || this->_unknown_type)
		return (true);
	else
		return (false);
}
