/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:14:36 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/20 14:10:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

void	identify(Base *p)
{
	if (p)
	{
		A * first = dynamic_cast<A *>(p);
		if (first != NULL)
			std::cout << "identify (with ptr) find the type A." << std::endl;
		else
		{
			B * second = dynamic_cast<B *>(p);
			if (second != NULL)
				std::cout << "identify (with ptr) find the type B." << std::endl;
			else
			{
				C * third = dynamic_cast<C *>(p);
				if (third != NULL)
					std::cout << "identify (with ptr) find the type C." << std::endl;
				else
					std::cout << "Error." << std::endl;
			}
		}
	}
}

void	identify(Base &p)
{
	if (dynamic_cast<A const *>(&p))
		std::cout << "identify (with ref) find the type A." << std::endl;
	else if (dynamic_cast<B const *>(&p))
		std::cout << "identify (with ref) find the type B." << std::endl;
	else if (dynamic_cast<C const *>(&p))
		std::cout << "identify (with ref) find the type C." << std::endl;
}
