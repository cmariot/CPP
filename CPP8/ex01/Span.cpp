/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:24:45 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/06 20:28:50 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Span::Span(size_t n) : _vector(new std::vector<int>[n]()), _size(n), _nb_elements(0)
{
	//std::cout << "Span default constructor called." << std::endl;
	return ;
}

//Constructeur par copie
Span::Span(Span const & copy)
{
	//std::cout << "Span copy constructor called." << std::endl;
	*this = copy;
	return ;
}

//Destructeur
Span::~Span(void)
{
	//std::cout << "Span destructor called." << std::endl;
	delete [] this->_vector;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Span const &	Span::operator = (Span const & rhs)
{
	_size = rhs._size;
	_nb_elements = rhs._nb_elements;

	delete [] _vector;
	_vector = new std::vector<int>[_size]();
	_vector->assign(rhs._vector->begin(), rhs._vector->end());;
	
	return (*this);
}

std::ostream & operator << (std::ostream & output, Span & rhs)
{
	for (std::vector<int>::iterator it = rhs._vector->begin() ; it != (rhs._vector->begin() + rhs._nb_elements); it++)
	{
		output << *it << " ";
	}
	output << std::endl;
	return (output);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/


void	Span::addNumber(int number)
{
	try
	{
		if (_nb_elements < _size)
		{
			_vector->push_back(number);
			_nb_elements++;
		}
		else
			throw (SpanFull());
	}
	catch (SpanFull & sf)
	{
		std::cerr << sf.what() << std::endl;
	}
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		while (1)
		{
			if (_nb_elements > _size)
				throw (SpanFull());
			_vector->push_back(*begin);
			_nb_elements++;
			begin++;
			if (begin == end)
				break ;
		}
	}
	catch (SpanFull & sf)
	{
		std::cerr << sf.what() << std::endl;
	}
}

size_t	Span::shortestSpan(void) const
{
	try
	{
		if (_nb_elements <= 1)
			throw (NotEnoughNumbers());
		else
		{
			std::vector<int> *tmp(_vector);
			std::sort (tmp->begin(), tmp->begin() + _nb_elements);

			size_t shortest_span = UINT_MAX;
			for (std::vector<int>::iterator it = tmp->begin() ; it != (tmp->begin() + _nb_elements - 1); it++)
				if (shortest_span > static_cast<size_t>(*(it + 1) -  *it))
					shortest_span = *(it + 1) -  *it;
			return (shortest_span);
		}
	}
	catch (NotEnoughNumbers & nen)
	{
		std::cerr << nen.what() << std::endl;
		return (0);
	}
}

size_t	Span::longestSpan(void) const
{
	try
	{
		if (_nb_elements <= 1)
			throw (NotEnoughNumbers());
		else
		{
			std::vector<int> *tmp(_vector);
			std::sort (tmp->begin(), tmp->begin() + _nb_elements);

			std::vector<int>::iterator min = tmp->begin();
			std::vector<int>::iterator max = tmp->begin() + _nb_elements - 1;

			size_t range = static_cast<size_t>(*max - *min);

			return (range);	
		}
	}
	catch (NotEnoughNumbers & nen)
	{
		std::cerr << nen.what() << std::endl;
		return (0);
	}
}
