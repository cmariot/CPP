/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:28:30 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/31 01:39:49 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <vector>
# include <iostream>

template <typename T>
int easyfind(T container, int to_find)
{
	int	index = 0;

	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();

	for (it = container.begin() ; it != ite ; it++)
	{
		if (*it == to_find)
			break ;
		index++;
	}
	try
	{
		if (*it != to_find)
			throw std::invalid_argument ("Exception: Value not found.");
	}
	catch (std::invalid_argument & ia)
	{
		std::cerr << ia.what() << std::endl;
		index = -1;
	}
	return (index);
}

#endif
