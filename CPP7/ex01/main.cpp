/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:12:37 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 14:22:59 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void	display_int_value(int const & a)
{
	std::cout << a << std::endl;
}

void	display_str_value(std::string const & a)
{
	std::cout << a << std::endl;
}

int	main(void)
{
	int	int_array[4] = { 0, 1, 2, 3 };
	iter(&int_array, 4, display_int_value);

	std::string	str_array[5] = { "abc", "def", "ghi", "jkl", "mno" };
	iter(&str_array, 5, display_str_value);
	
	return (0);
}
