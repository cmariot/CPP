/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:46 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 17:28:37 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class	Array
{

	public:

		Array(void) : _size(0)
		{
			std::cout << "Constructeur par default" << std::endl;
			this->_array = new T [0];
			return ;
		}

		Array(unsigned int n) : _size(n)
		{
			std::cout << "Constructeur par unsigned int" << std::endl;
			this->_array = new T [n];
			return ;
		}

		~Array(void)
		{
			std::cout << "Destructeur" << std::endl;
			delete [] this->_array;
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}

		Array const &	operator = (Array const & rhs)
		{
			this->_size = rhs.size();
			this->_array = new T [this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		//TO DO :
		//	- [ ] Surcharge d'operateur d'affectation
		//	- [ ] Constructeur par copie
		//	- [ ] Operateur d'indice [] /!\ index invalide
		//	- [ ] fonction membre size()

	private:

		T				*_array;
		unsigned int	_size;

} ;

#endif

