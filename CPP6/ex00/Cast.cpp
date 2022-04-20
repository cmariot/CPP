/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 10:22:02 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Cast::Cast(char *arg) : _str(arg), _unknown_type(false), _minus_inf(false), _null(false), _plus_inf(false), _overflow(false)
{
	if (isChar(_str))
	{
		strToChar();
		convertChar();
	}
	else if (isInt(_str))
	{
		strToInt();
		convertInt();
	}
	else if (isFloat(_str))
	{
		strToFloat();
		convertFloat();
	}
	else if (isDouble(_str))
	{
		strToDouble();
		convertDouble();
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
	_str = rhs._str;
	_char = rhs._char;
	_int = rhs._int;
	_float = rhs._float;
	_double = rhs._double;
	_unknown_type = rhs._unknown_type;
	_minus_inf = rhs._minus_inf;
	_null = rhs._null;
	_plus_inf = rhs._plus_inf;
	_overflow = rhs._overflow;
	return (*this);
}

//Operateur <<
std::ostream &	operator << (std::ostream & output, Cast const & rhs)
{
	if (rhs.getError() == true)
		rhs.displayError(output);
	else
	{
		output << "Char    : ";
		rhs.displayChar(output);
		output << std::endl;
		
		output << "Int     : ";
		rhs.displayInt(output);
		output << std::endl;
		
		output << "Float   : ";
		rhs.displayFloat(output);
		output << std::endl;
		
		output << "Double  : ";
		rhs.displayDouble(output);
		output << std::endl;
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

bool	Cast::isFloat(std::string str)
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

bool	Cast::isDouble(std::string str)
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
}

void	Cast::strToInt(void)
{
	long	tmp;

	tmp = strtol(_str.c_str(), NULL, 0);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		_int = static_cast<int>(tmp);
	else
		_overflow = true;
}

void	Cast::strToFloat(void)
{
	char	*end;
	float	tmp;

	if (_str == "-inff")
		_minus_inf = true;
	else if (_str == "nanf")
		_null = true;
	else if (_str == "+inff")
		_plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if ((end == _str.c_str() + (_str.length() - 1)) && *end == 'f'
			&& tmp >= static_cast<float>(INT_MIN) 
			&& tmp <= static_cast<float>(INT_MAX))
			_float = tmp;
		else
			_overflow = true;
	}
}

void	Cast::strToDouble(void)
{
	char	*end;
	float	tmp;

	if (_str == "-inf")
		_minus_inf = true;
	else if (_str == "nan")
		_null = true;
	else if (_str == "+inf")
		_plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if (end == _str.c_str() + _str.length()
			&& tmp >= static_cast<double>(INT_MIN) 
			&& tmp <= static_cast<double>(INT_MAX))
			_double = static_cast<double>(tmp);
		else
			_overflow = true;
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
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}

void	Cast::convertDouble(void)
{
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

bool	Cast::getError(void) const
{
	if (_unknown_type || _overflow)
		return (true);
	else
		return (false);
}

void	Cast::displayError(std::ostream & output) const
{
	if (_unknown_type)
		output << "Error : Cannot convert your input." << std::endl;
	else if (_overflow)
		output << "Error : Overflow." << std::endl;
}

void	Cast::displayChar(std::ostream & output) const
{
	if (_minus_inf || _null || _plus_inf)
		output << "Impossible";
	else if (isprint(_char) == 0)
		output << "Non displayable";
	else
		output << _char;
}

void	Cast::displayInt(std::ostream & output) const
{
	if (_minus_inf || _null || _plus_inf)
		output << "Impossible";
	else
		output << _int;
}

void	Cast::displayFloat(std::ostream & output) const
{
	if (_minus_inf)
		output << "-inff";
	else if (_null)
		output << "nanf";
	else if (_plus_inf)
		output << "+inff";
	else
		output << std::fixed << _float << "f";
}

void	Cast::displayDouble(std::ostream & output) const
{
	if (_minus_inf)
		output << "-inf";
	else if (_null)
		output << "nan";
	else if (_plus_inf)
		output << "+inf";
	else
		output << std::fixed << _double;
}
