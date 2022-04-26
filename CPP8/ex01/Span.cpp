/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:24:45 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/24 01:34:46 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***********************************************/
/*            CONSTRUCTEURS/DESTRUCTEURS       */
/***********************************************/

//Constructeur par default
Span::Span(size_t n) : vector(new std::vector<int>[n]()), size(n), nb_elements(0)
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
	delete [] vector;
	return ;
}


/***********************************************/
/*             SURCHARGE D'OPERATEURS          */
/***********************************************/

//Operateur d'affectation (=)
Span const &	Span::operator = (Span const & rhs)
{
	size = rhs.size;
	nb_elements = rhs.nb_elements;

	delete [] vector;
	vector = new std::vector<int>[size]();
	vector->assign(rhs.vector->begin(), rhs.vector->end());;
	
	return (*this);
}

std::ostream & operator << (std::ostream & output, Span & rhs)
{
	for (std::vector<int>::iterator it = rhs.vector->begin() ; it != (rhs.vector->begin() + rhs.nb_elements); it++)
		output << *it << " ";
	output << std::endl;
	return (output);
}


/***********************************************/
/*                FONCTIONS MEMBRES            */
/***********************************************/


void	Span::addNumber(int number)
{
	if (nb_elements < size)
	{
		vector->push_back(number);
		nb_elements++;
	}
	else
		throw (SpanFull());
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (1)
	{
		if (nb_elements > size)
			throw (SpanFull());
		vector->push_back(*begin);
		nb_elements++;
		begin++;
		if (begin == end)
			break ;
	}
}

size_t	Span::shortestSpan(void) const
{
	if (nb_elements <= 1)
		throw (NotEnoughNumbers());
	else
	{
		std::vector<int> *tmp(vector);
		std::sort(tmp->begin(), tmp->begin() + nb_elements);

		size_t shortest_span = UINT_MAX;
		for (std::vector<int>::iterator it = tmp->begin() ; it != (tmp->begin() + nb_elements - 1); it++)
			if (shortest_span > static_cast<size_t>(*(it + 1) -  *it))
				shortest_span = *(it + 1) -  *it;
		return (shortest_span);
	}
}

size_t	Span::longestSpan(void) const
{
	if (nb_elements <= 1)
		throw (NotEnoughNumbers());
	else
	{
		std::vector<int> *tmp(vector);
		std::sort(tmp->begin(), tmp->begin() + nb_elements);

		std::vector<int>::iterator min = tmp->begin();
		std::vector<int>::iterator max = tmp->begin() + nb_elements - 1;

		size_t range = static_cast<size_t>(*max - *min);

		return (range);	
	}
}
