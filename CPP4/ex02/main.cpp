/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:48:42 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/21 14:20:22 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

//Verifier la copie profonde des idees :
//on declare un Dog, on lui donne une idee,
//on copie le Dog dans une nouvelle variable,
//on verifie que l'idee est la meme
void	test_copie(void)
{
	Dog	*a_copier = new Dog;

	a_copier->set_idea(1, "Eat");
	Dog	destination = *a_copier;
	delete a_copier;
	std::cout << destination.get_idea(1) << std::endl;
}

//Creer un tableau d'animaux dont la moitie sont des chiens,
//et l'autre moitie des chats
//a la fin, delete chaque element du tableau en tant qu'AAnimal
int	test_construction(int array_len)
{
	if (array_len < 0)
		std::cout << "Error, we can't create that !" << std::endl;
	else
	{
		AAnimal	*animals_array[array_len];

		for (int i = 0; i < array_len / 2; i++)
			animals_array[i] = new Dog;

		for (int i = array_len / 2 ; i < array_len; i++)
			animals_array[i] = new Cat;

		for (int i = 0; i < array_len; i++)
			delete animals_array[i];
	}
	return (0);
}

void	test_pdf(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j;	//should not create a leak
	delete i;
}

int	main(void)
{
	//AAnimal abstrait;

	test_construction(10);
	test_copie();
	test_pdf();
	return (0);
}
