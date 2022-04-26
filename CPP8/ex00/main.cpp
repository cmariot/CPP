/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:59:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/22 21:02:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>

#include <list>
#include <vector>
#include <deque>

int	main(void)
{

	//Test list
	{
		std::list<int>		my_list;
		int					to_find = 42;

		for (int i = 0; i < 100; i++)
			my_list.push_back(i);
		try
		{
			std::cout << "For the list, first occurence of " << to_find << " at index : " << easyfind(my_list, to_find) << std::endl;
		}
		catch (std::out_of_range &exception)
		{
			std::cout << exception.what() << std::endl;
		}
	}

	//Test vector
	{
		std::vector<int>	my_vector;
		int					to_find = 42;

		for (int i = 100; i > 0; i--)
			my_vector.push_back(i);
		try
		{
			std::cout << "For the vector, first occurence of " << to_find << " at index : " << easyfind(my_vector, to_find) << std::endl;
		}
		catch (std::out_of_range &exception)
		{
			std::cout << exception.what() << std::endl;
		}
	}

	//Test deque
	{
		std::deque<int>		my_deque;
		int					to_find = 42;

		for (int i = 1; i < 200; i += 2)
			my_deque.push_back(i);
		try
		{
			std::cout << "For the deque, first occurence of " << to_find << " at index : " << easyfind(my_deque, to_find) << std::endl;
		}
		catch (std::out_of_range &exception)
		{
			std::cout << exception.what() << std::endl;
		}
	}

	return (0);
}
