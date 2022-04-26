/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:13:37 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/20 11:04:00 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	print(T const & value)
{
	std::cout << value << std::endl;
}

template <typename T, typename U, typename V>
void	iter(T *array, U size, V function)
{
	for (U i = 0; i < size; i++)
	{
		function((*array)[i]);
	}
}
