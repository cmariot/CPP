/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:07:33 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 11:30:10 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <class T,  class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public :

		// Constructeur par default
		MutantStack(void)
		{
			return ;
		}

		// Constructeur par copie
		MutantStack(MutantStack & copy)
		{
			*this = copy;
			return ;
		}

		// Surcharge de l'operateur =
		MutantStack & operator = (MutantStack const & rhs)
		{
			this->std::stack<T, Container>::operator=(rhs);
			return (*this);
		}

		// Destructeur par default
		~MutantStack(void)
		{
			return ;
		}

		typedef typename Container::iterator iterator;

		// Return iterator to beginning
		iterator begin(void)
		{
			return (this->c.begin());
		}

		// Return iterator to end
		iterator end(void)
		{
			return (this->c.end());
		}
		
		typedef typename Container::reverse_iterator reverse_iterator;

		// Return reverse iterator to reverse beginning
		reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		}

		// Return reverse iterator to reverse end
		reverse_iterator rend(void)
		{
			return (this->c.rend());
		}

} ;

#endif
