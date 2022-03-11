/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 18:36:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed instance;

	std::cout << "_NUMBER = " << instance.getRawBits() << std::endl;
	instance.setRawBits(42);
	std::cout << "_NUMBER = " << instance.getRawBits() << std::endl;
	
	Fixed instance2(instance);
	std::cout << "_NUMBER = " << instance2.getRawBits() << std::endl;
	instance2.setRawBits(0);
	std::cout << "_NUMBER = " << instance2.getRawBits() << std::endl;

	Fixed instance3 = instance2;
	std::cout << "_NUMBER = " << instance3.getRawBits() << std::endl;


	return (0);
}
