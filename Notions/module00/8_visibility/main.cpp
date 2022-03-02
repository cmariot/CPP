/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:30:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 17:10:42 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

int	main(void)
{
	Sample1 instance;

	instance.public_foo = 2;
	std::cout << "instance.public_foo = " << instance.public_foo << std::endl;

	instance.public_bar();

	/*
	instance._private_foo = 2;
	std::cout << "instance._private_foo = " << instance._private_foo << std::endl;

	instance._private_bar();
	*/

	return(0);
}
