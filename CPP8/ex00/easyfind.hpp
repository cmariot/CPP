/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:28:30 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/27 13:51:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
int	easyfind(T const & container, int to_find)
{
	typename T::const_iterator itb = container.begin();
	typename T::const_iterator ite = container.end();
	typename T::const_iterator it = std::find(itb, ite, to_find);

	if (*it != to_find && it == ite)
		throw(std::out_of_range("Element not found"));
	else
		return (std::distance(itb, it));
}

#endif
