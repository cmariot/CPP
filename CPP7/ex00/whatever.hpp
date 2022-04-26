/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:48:36 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 12:09:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
T const &	max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

template <typename T>
T const &	min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template <typename T>
void	swap(T &x, T &y)
{
	T tmp = x;
	
	x = y;
	y = tmp;
}
