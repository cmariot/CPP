/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:21:55 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 11:07:52 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <typeinfo>

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

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
		(void)first;
		std::cout << "identify (with ref) find the type A." << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B & second = dynamic_cast<B &>(p);
			(void)second;
			std::cout << "identify (with ref) find the type B." << std::endl;
		}
		catch (std::bad_cast &bc)
		{
			try
			{
				C & third = dynamic_cast<C &>(p);
				(void)third;
				std::cout << "identify (with ref) find the type C." << std::endl;
			}
			catch (std::bad_cast &bc)
			{
				std::cout << "Error." << std::endl;
			}
		}

	}
}

int	main(void)
{
	Base * ptr = generate();
	Base & ref = *ptr;
	
	identify(ptr);	
	identify(ref);
	
	delete ptr;
	
	return (0);
}
