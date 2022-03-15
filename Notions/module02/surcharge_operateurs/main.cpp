/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:18:48 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/14 12:32:44 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int	main(void)
{
	Integer a(0);
	Integer	b(21);
	Integer c(0);

	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of b : " << b << std::endl;
	std::cout << "Value of c : " << c << std::endl;

	c = Integer(21);
	std::cout << "Value of c : " << c << std::endl;

	a = b + c;
	std::cout << "Value of a : " << a << std::endl;

	return (0);
}
