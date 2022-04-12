/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:14:36 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/12 10:17:59 by cmariot          ###   ########.fr       */
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
	try
	{
		A & first = dynamic_cast<A &>(p);
		static_cast<void>(first);
		std::cout << "identify (with ref) find the type A." << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B & second = dynamic_cast<B &>(p);
			static_cast<void>(second);
			std::cout << "identify (with ref) find the type B." << std::endl;
		}
		catch (std::bad_cast &bc)
		{
			try
			{
				C & third = dynamic_cast<C &>(p);
				static_cast<void>(third);
				std::cout << "identify (with ref) find the type C." << std::endl;
			}
			catch (std::bad_cast &bc)
			{
				std::cout << "Error." << std::endl;
			}
		}
	}
}


