/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:24:23 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/23 20:36:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	tests_42(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	my_tests(void)
{
	Span foo(20000);

	//Exception : pas de nombres dans le container
	try
	{
		foo.shortestSpan();
		foo.longestSpan();
	}
	catch (Span::NotEnoughNumbers &nen)
	{
		std::cout << nen.what() << std::endl;
	}
	//Remplissage
	//+ Exception : Essaye d'ajouter un nombre alors que plein
	try
	{
		for (int i = 0 ; i < 20000 ; i++)
			foo.addNumber(20000 - i);
		foo.addNumber(42);
	}
	catch (Span::SpanFull &sf)
	{
		std::cout << sf.what() << std::endl;
	}
	//Retourne les gap
	std::cout << "Shortest Span : " << foo.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " << foo.longestSpan() << std::endl;
	//std::cout << foo;
}

void	range_test(void)
{
	std::vector<int> vector(10, 42);

	Span sp = Span(10);
	sp.addNumber(vector.begin(), vector.end());
	std::cout << sp;
}

int	main(void)
{
	tests_42();
	my_tests();
	range_test();
	return (0);
}
