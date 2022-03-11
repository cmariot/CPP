/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:56 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/11 11:33:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	get_lvl(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (1);
	else if (level.compare("INFO") == 0)
		return (2);
	else if (level.compare("WARNING") == 0)
		return (3);
	else if (level.compare("ERROR") == 0)
		return (4);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Karen		karen;
		std::string	level(argv[1]);

		switch (get_lvl(level))
		{
			case (1) :
				karen.complain("debug");
			case (2) :
				karen.complain("info");
			case (3) :
				karen.complain("warning");
			case (4) :
				karen.complain("error");
				break ;
			default :
				std::cout << "[ Probably complaining about insignificant problems ]";
				std::cout << std::endl;
				return (1);

		}
		return (0);
	}
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
		return (1);
	}
}
