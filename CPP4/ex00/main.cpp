/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:48:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 10:10:20 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	create_animal(void)
{
	Animal	test;
	std::cout << "Type : " << test.get_type() << std::endl;
	return ;
}

void	create_dog(void)
{
	Dog		test;
	std::cout << "Type : " << test.get_type() << std::endl;
	return ;
}

void	create_cat(void)
{
	Cat	test;
	std::cout << "Type : " << test.get_type() << std::endl;
	return ;
}

int	main(void)
{
	create_animal();
	std::cout << std::endl;
	create_dog();
	std::cout << std::endl;
	create_cat();
	return (0);
}
