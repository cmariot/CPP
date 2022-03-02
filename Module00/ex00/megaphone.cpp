/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:06:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/01 11:23:11 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

void	megaphone(int argc, char **argv)
{
	int			i;
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		i = 0;
		while (argv[i])
		{
			str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper); 
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
}

int	main(int argc, char **argv)
{
	megaphone(argc, argv + 1);
	return (0);	
}
