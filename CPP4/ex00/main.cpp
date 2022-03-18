/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:48:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 18:21:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	create_animal(void)
{
	Animal	test;
	std::cout << "Type : " << test.getType() << std::endl;
	test.makeSound();
	return ;
}

void	create_dog(void)
{
	Dog		test;
	std::cout << "Type : " << test.getType() << std::endl;
	test.makeSound();
	return ;
}

void	create_cat(void)
{
	Cat	test;
	std::cout << "Type : " << test.getType() << std::endl;
	test.makeSound();
	return ;
}

int	main(void)
{
	create_animal();
	std::cout << std::endl;
	create_dog();
	std::cout << std::endl;
	create_cat();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound !
	j->makeSound();
    meta->makeSound();

	return (0);
}
