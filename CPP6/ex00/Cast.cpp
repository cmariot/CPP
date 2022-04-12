/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 16:21:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cast::Cast(char *arg) : 
	minus_inf(false),
	null(false),
	plus_inf(false),
	int_conversion_overflow(false),
	_str(arg),
	_char(0),
	_int(0),
	_float(0),
	_double(0),
	_char_non_displayable(false),
	_int_overflow(false),
	_float_overflow(false),
	_double_overflow(false),
	_unknown_type(false)
{
	if (isChar(_str))
	{
		Cast::strToChar();
		Cast::convertChar();
	}
	else if (isInt(_str))
	{
		Cast::strToInt();
		Cast::convertInt();
	}
	else if (isFloat(_str))
	{
		Cast::strToFloat();
		Cast::convertFloat();
	}
	else if (isDouble(_str))
	{
		Cast::strToDouble();
		Cast::convertDouble();
	}
	else
		_unknown_type = true;
}

//Constructeur par copie
Cast::Cast(Cast const & copy)
{
	*this = copy;
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
	int_conversion_overflow = rhs.int_conversion_overflow;
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
		if (isprint(rhs.getChar()) != 0)
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
	if (str.length() != 1 || isdigit(str[0]) != 0)
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
	_char = _str[0];
	if (isprint(_char) == false)
		_char_non_displayable = true;
}

void	Cast::strToInt(void)
{
	long	tmp;

	tmp = strtol(_str.c_str(), NULL, 0);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		_int = static_cast<int>(tmp);
	else
		_int_overflow = true;
}

void	Cast::strToFloat(void)
{
	char	*end;
	float	tmp;

	if (_str == "-inff")
		minus_inf = true;
	else if (_str == "nanf")
		null = true;
	else if (_str == "+inff")
		plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if ((end == _str.c_str() + (_str.length() - 1)) && *end == 'f')
			_float = tmp;
		else
			_float_overflow = true;
	}
}

void	Cast::strToDouble(void)
{
	char	*end;
	float	tmp;

	if (_str == "-inf")
		minus_inf = true;
	else if (_str == "nan")
		null = true;
	else if (_str == "+inf")
		plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if (end == _str.c_str() + _str.length())
			_double = tmp;
		else
			_double_overflow = true;
	}
}

void	Cast::convertChar(void)
{
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	Cast::convertInt(void)
{
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void	Cast::convertFloat(void)
{
	_char = static_cast<char>(_float);
	if (_float >= static_cast<float>(INT_MIN) && _float <= static_cast<float>(INT_MAX))
		_int = static_cast<int>(_float);
	else
		int_conversion_overflow = true;
	_double = static_cast<double>(_float);
}

void	Cast::convertDouble(void)
{
	_char = static_cast<char>(this->_double);
	if (_double >= static_cast<double>(INT_MIN) && _double <= static_cast<double>(INT_MAX))
		_int = static_cast<int>(_double);
	else
		int_conversion_overflow = true;
	_float = static_cast<float>(_double);
}

char	Cast::getChar(void) const
{
	return (_char);
}

int		Cast::getInt(void) const
{
	return (_int);
}

float	Cast::getFloat(void) const
{
	return (_float);
}

double	Cast::getDouble(void) const
{
	return (_double);
}

bool	Cast::impossibleConversion(void) const
{
	if (_int_overflow || _double_overflow || _float_overflow || _unknown_type)
		return (true);
	else
		return (false);
}
