/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:57:27 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/14 13:15:15 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <iostream>

class	Integer
{
	public:
		
		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;

		Integer &	operator = (Integer const & rhs);
		Integer		operator + (Integer const & rhs) const;

	private:

		int	_n;

} ;

std::ostream & operator << (std::ostream & o, Integer const & rhs);

#endif
