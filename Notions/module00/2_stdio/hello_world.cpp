/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:16:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:15:46 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char buf[256];

	std::cout << "Hello world !" << std::endl;
	std::cout << "What's your name ?" << std::endl;
	std::cin >> buf;
	std::cout << "Hello " << buf << std::endl;
	return (0);
}
