/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:56 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 15:20:49 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	level(argv[1]);
		Karen		karen;
		int			lvl = 0;

		if (level.compare("DEBUG") == 0)
			lvl = 1;
		else if (level.compare("INFO") == 0)
			lvl = 2;
		else if (level.compare("WARNING") == 0)
			lvl = 3;
		else if (level.compare("ERROR") == 0)
			lvl = 4;


		switch (lvl)
		{
			case (0) :
			{
				std::cout << "[ Probably complaining about insignificant problems ]";
				std::cout << std::endl;
				return (1);
			}
			case (1) :
				karen.complain("debug");
			case (2) :
				karen.complain("info");
			case (3) :
				karen.complain("warning");
			case (4) :
				karen.complain("error");
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
