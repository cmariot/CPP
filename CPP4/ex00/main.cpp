/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:48:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/07 14:46:27 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
	std::cout << std::endl;

	const Animal		*meta1 = new Animal();
	const Animal		*meta2 = new Dog();
	const Animal		*meta3 = new Cat();

	const WrongAnimal	*meta4 = new WrongAnimal();
	const WrongAnimal	*meta5 = new WrongCat();
	const WrongCat		*meta6 = new WrongCat();
	
	//const Animal		*error1 = new WrongAnimal();
	//const Animal		*error2 = new WrongCat();
	//const Cat			*error3 = new Animal();
	//const Cat			*error3 = new WrongAnimal();
	//const WrongCat		*error3 = new Cat();

	std::cout << "The " << meta1->getType() << " say : ";
	meta1->makeSound();

	std::cout << "The " << meta2->getType() << " say : ";
	meta2->makeSound();
	
	std::cout << "The " << meta3->getType() << " say : ";
	meta3->makeSound();

	std::cout << "The " << meta4->getType() << " say : ";
	meta4->makeSound();
	
	std::cout << "The " << meta5->getType() << " say : ";
	meta5->makeSound();
	
	std::cout << "The " << meta6->getType() << " say : ";
	meta6->makeSound();

	delete meta1;
	delete meta2;
	delete meta3;
	delete meta4;
	delete meta5;
	delete meta6;

	return (0);
}
