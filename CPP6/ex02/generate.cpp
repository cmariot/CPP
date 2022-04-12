/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:12:19 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 10:14:09 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base *generate(void)
{
	Base *ret = 0;

	std::srand (time(0));
	switch (std::rand() % 3)
	{
		case (0):
		{
			std::cout << "gererate() returned a pointer on the A class." << std::endl;
			ret = new A;
			break ;
		}
		case (1):
		{
			std::cout << "gererate() returned a pointer on the B class." << std::endl;
			ret = new B;
			break ;
		}
		case (2):
		{
			std::cout << "gererate() returned a pointer on the C class." << std::endl;
			ret = new C;
			break ;
		}
	}
	return (ret);
}
