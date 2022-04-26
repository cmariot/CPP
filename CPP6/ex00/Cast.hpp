/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:48:04 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 10:22:11 by cmariot          ###   ########.fr       */
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

		bool			getError(void) const;

		void			displayChar(std::ostream & output) const;
		void			displayInt(std::ostream & output) const;
		void			displayFloat(std::ostream & output) const;
		void			displayDouble(std::ostream & output) const;
		void			displayError(std::ostream & output) const;

	private:

		std::string		_str;

		char			_char;
		int				_int;
		float			_float;
		double			_double;

		bool			_unknown_type;

		bool			_minus_inf;
		bool			_null;
		bool			_plus_inf;

		bool			_overflow;

		bool			isChar(std::string str) const;
		bool			isInt(std::string str) const;
		bool			isFloat(std::string str);
		bool			isDouble(std::string str);

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

