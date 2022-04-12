/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:41:57 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 10:04:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class	Data
{

	public:

		Data(void);										// Constructeur par default
		Data(unsigned int value);						// Constructeur par unsigned int
		Data(Data const & copy);						// Constructeur par copie
		~Data(void);									// Destructeur
		Data const & operator = (Data const & rhs);		// Surcharge d'opérateur d’affectation

		unsigned int	getData(void) const;
		void			setData(unsigned int value);

	private:

		unsigned int	_data;

} ;

#endif
