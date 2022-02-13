/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:06:40 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/13 14:06:35 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	strtrim_end(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (str[len - 1] == ' ')
	{
		str[len - 1] = '\0';
		len--;
	}
}
void	strtrim_begin(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len] != '\0' && str[len] == ' ')
		len++;
	while (len--)
	{
		i = 0;
		while (str[i + 1] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
		str[i] = '\0';
	}
}

void	toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void	megaphone(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		i = 0;
		while (argv[i])
		{
			toupper(argv[i]);
			strtrim_begin(argv[i]);
			strtrim_end(argv[i]);
			if (argv[i][0] != '\0' && argv[i + 1])
				std::cout << argv[i] << " ";
			else if (!argv[i + 1])
				std::cout << argv[i] << std::endl;
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	megaphone(argc, argv + 1);
	return (0);	
}
