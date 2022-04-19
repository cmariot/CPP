/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:46 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 10:39:11 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

/* Classe template de tableau, entierement definie dans le .hpp */

template <class T> class Array
{

	public:

		// Constructeur par defaut : tableau vide
		Array(void) : _size(0)
		{
			_array = new T [0];
		}

		// Constructeur par taille : tableau de taille n initialise par defaut
		Array(size_t n) : _size(n)
		{
			_array = new T [n];
		}

		// Constructeur par copie
		Array(Array const & copy)
		{
			*this = copy;
			return ;
		}

		// Surcharge de l'operateur d'affectation
		Array const &	operator = (Array const & rhs)
		{
			_size = rhs.size();
			_array = new T [_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return (*this);
		}

		// Destructeur
		~Array(void)
		{
			delete [] _array;
		}

		// Fonction membre retournant la taille du tableau
		size_t	size(void) const
		{
			return (_size);
		}

		// Surcharge de l'operateur d'indice
		T & operator [] (size_t pos) const
		{
			try
			{
				if (pos > this->size() - 1)
					throw std::out_of_range ("Exception: Invalid index");
			}
			catch (std::out_of_range & oor)
			{
				std::cout << oor.what() << std::endl;
			}
			return (this->_array[pos]);
		};

	private:

		T			*_array;		// Tableau d'elements de type T
		size_t		_size;			// Taille du tableau

} ;

// Surcharge de l'operateur << : Affiche les elements du tableau
template <typename T>
std::ostream & operator << (std::ostream & output, Array<T> & rhs)
{
	if (rhs.size() == 0)
		output << "Empty array." << std::endl;
	else
	{
		output << "[";
		for (size_t i = 0 ; i < (rhs.size() - 1) ; i++)
			output << i << ":" << rhs[i] << ", ";
		output << rhs.size() - 1 << ":" << rhs[rhs.size() - 1] << "]" << std::endl;
	}
	return (output);
}

#endif
