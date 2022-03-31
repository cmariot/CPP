/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:59:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/31 12:22:52 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	//Test list
	{
		std::list<int>	my_list;

		my_list.push_back(4);
		my_list.push_back(2);

		int ret = easyfind<std::list<int> >(my_list, 4);

		std::cout << "For the list, first occurence at index : " << ret << std::endl;
	}

	//Test vector
	{
		std::vector<int> my_vector;

		my_vector.push_back(4);
		my_vector.push_back(2);
		
		int ret = easyfind<std::vector<int> >(my_vector, 2);
		
		std::cout << "For the vector, first occurence at index : " << ret << std::endl;
	}

	return (0);
}
