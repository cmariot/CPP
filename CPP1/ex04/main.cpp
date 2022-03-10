/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 08:31:41 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 09:21:12 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>

std::string	outfile_name(char *argv)
{
	std::string	ofs_name = argv;

	ofs_name = ofs_name.append(".replace");
	return (ofs_name);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed_is_for_losers filename str1 str2" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Error: empty string." << std::endl;
		return (1);
	}

	//Open the file filename, check if the file exists
	std::ifstream ifs(argv[1]);
	if (!ifs.good())
	{
		std::cout << "Error: no such file. Check the first argument." << std::endl;
		return (1);
	}

	//Create and open the new file (filename.replace)
	std::ofstream	ofs(outfile_name(argv[1]));
	if (!ofs.good())
	{
		std::cout << "Error: filename.replace could not be create." << std::endl;
		ifs.close();
		return (1);
	}

	//Find str1, erase it and insert str2
	std::string	str1 = argv[2];
	std::string	str2 = argv[3];
	std::string	line;
	std::size_t found;
	while (std::getline(ifs, line))
	{
		found = 0;
		while ((found = line.find(argv[2], found)) != std::string::npos)
		{
			line.erase(found, str1.size());
			line.insert(found, str2);
			found += str2.size();
		}
		ofs << line << std::endl;
	}

	//Close the files
	ofs.close();
	ifs.close();

	return (0);
}
