/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:30:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:58:28 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

int	main(void)
{
	Sample1 instance;

	instance.set_foo(42);
	std::cout << "instance.get_foo: " << instance.get_foo() << std::endl;

	instance.set_foo(0);
	std::cout << "instance.get_foo: " << instance.get_foo() << std::endl;

	return(0);
}
