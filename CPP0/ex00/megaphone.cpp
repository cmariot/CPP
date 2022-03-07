/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:06:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/07 10:42:52 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	megaphone(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 0; argv[i]; i++) 
		{
			str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper); 
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	return (megaphone(argc, argv + 1));
}
