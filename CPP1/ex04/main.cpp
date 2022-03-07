/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 08:31:41 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 15:56:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		ifs_name;
	std::ifstream	ifs;

	std::string		ofs_name;
	std::ofstream	ofs;
	
	if (argc == 4)
	{

		//Open the file filename, check if the file exists
		ifs.open(argv[1], std::ifstream::in);
		if (!ifs.good())
		{
			std::cout << "Error: no such file. Check the first argument." << std::endl;
			return (1);
		}

		//Create and open the new file (filename.replace)
		ifs_name = argv[1];
		ofs_name = ifs_name.append(".replace");
		char	*c = const_cast <char *> (ofs_name.c_str());
		ofs.open (c, std::ofstream::out | std::ofstream::app);
		if (!ofs.good())
		{
			std::cout << "Error: filename.replace could not be create." << std::endl;
			ifs.close();
			return (1);
		}


		


		ofs.close();
		ifs.close();

		return (0);
	}
	else
	{
		std::cout << "Usage: ./sed_is_for_losers filename string1 string2" << std::endl;
		return (1);
	}
}
