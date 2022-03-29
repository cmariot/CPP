/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:03:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 08:31:18 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

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
