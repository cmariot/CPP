/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 17:22:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> test1;
	Array<int> test2(42);

	std::cout << "size de l'array2 : " << test2.size() << std::endl;

	return (0);
}
