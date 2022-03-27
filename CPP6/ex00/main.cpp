/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:03:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/26 19:16:26 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cast.hpp"

void convert(char *arg)
{
	std::cout << "char:   " << arg << std::endl;
	std::cout << "int:    " << static_cast<int>(arg[0]) << std::endl;
	std::cout << "float:  " << static_cast<float>(arg[0]) << std::endl;
	std::cout << "double: " << static_cast<double>(arg[0]) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Cast a(argv[1]);
		std::cout << a;
		return (0);
	}
	else
	{
		std::cout << "Usage : ./convert [ARG]" << std::endl;
		return (1);
	}
}
