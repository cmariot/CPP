/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 08:31:41 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/09 14:55:27 by cmariot          ###   ########.fr       */
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
		ofs.open (const_cast <char *> (ofs_name.c_str()), std::ofstream::out | std::ofstream::app);
		if (!ofs.good())
		{
			std::cout << "Error: filename.replace could not be create." << std::endl;
			ifs.close();
			return (1);
		}

		char	c;
		
		while (ifs.get(c))          // loop getting single characters
		{
			ofs << c;
		}

		//erase / insert pour remplacer str1 par str2


		ofs.close();
		ifs.close();

		return (0);
	}
	else
	{
		std::cout << "Usage: ./sed_is_for_losers filename str1 str2" << std::endl;
		return (1);
	}
}
