/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:12:37 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/13 17:51:45 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	print(T const & value)
{
	std::cout << value << std::endl;
}

int	main(void)
{
	int	int_array[4] = { 0, 1, 2, 3 };
	iter(&int_array, 4, print<int>);

	std::string	str_array[5] = { "abc", "def", "ghi", "jkl", "mno" };
	iter(&str_array, 5, print<std::string>);
	
	return (0);
}
