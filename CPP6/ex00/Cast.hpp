/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/28 14:42:15 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <stdlib.h>
# include <limits.h>
# include <iomanip>

class	Cast
{

	public:

		Cast(char *arg);								// Constructeur par default
		Cast(Cast const & copy);						// Constructeur par copie
		~Cast(void);									// Destructeur
		Cast const & operator = (Cast const & rhs);		// Surcharge d'opérateur d’affectation

		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;

		bool	impossibleConversion(void) const;

		bool	minus_inf;
		bool	null;
		bool	plus_inf;
		
		bool	int_conversion_overflow;

	private:

		std::string		_str;

		char			_char;
		int				_int;
		float			_float;
		double			_double;

		bool			_char_non_displayable;

		bool			_int_overflow;
		bool			_float_overflow;
		bool			_double_overflow;

		bool			_unknown_type;

		bool			isChar(std::string str)		const;
		bool			isInt(std::string str)		const;
		bool			isFloat(std::string str)	const;
		bool			isDouble(std::string str)	const;

		void			strToChar(void);
		void			strToInt(void);
		void			strToFloat(void);
		void			strToDouble(void);

		void			convertChar(void);
		void			convertInt(void);
		void			convertFloat(void);
		void			convertDouble(void);

} ;

std::ostream & operator << (std::ostream & out, Cast const & rhs);

#endif

