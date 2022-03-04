/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:30:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 18:44:34 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

int	main(void)
{
	Sample1 instance;
	Sample1 *pointer = &instance;

	//Pointeur sur un attribut membre de la classe Sample1
	int		Sample1::*p = NULL;
	void	(Sample1::*f)(void) const;

	p = &Sample1::foo;

	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	pointer->*p = 42;
	std::cout << "Value of member foo : " << instance.foo << std::endl;

	//Pointeur sur une fonction membre de la classe Sample1
	f = &Sample1::bar;
	
	(instance.*f)();
	(pointer->*f)();

	return(0);
}
