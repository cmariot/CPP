/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:12:19 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 15:34:06 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <stdlib.h>

Base *generate(void)
{
	Base *ret = 0;

	std::srand (time(NULL));
	switch (std::rand() % 3)
	{
		case (0):
		{
			ret = new A;
			std::cout << "gererate() returned a pointer on the A class." << std::endl;
			break ;
		}
		case (1):
		{
			ret = new B;
			std::cout << "gererate() returned a pointer on the B class." << std::endl;
			break ;
		}
		case (2):
		{
			ret = new C;
			std::cout << "gererate() returned a pointer on the C class." << std::endl;
			break ;
		}
	}
	return (ret);
}
