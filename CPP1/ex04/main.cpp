/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 08:31:41 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 08:48:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::ifstream	input(argv[3]);

	if (argc == 4)
	{

		return (0);
	}
	else
	{
		std::cout << "Usage: ./sed_is_for_losers filename string1 string2" << std::endl;
		return (1);
	}
}
