/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:10 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/30 14:03:11 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int	main(void)
{
	// Creation de tableau vide
	Array<int> test1;

	// Creation d'un tableau de taille 10 de type int
	Array<int> test2(10);
	std::cout << "Tableau de 10 int : " << test2;
	std::cout << "Taille du tableau : " << test2.size() << std::endl;

	// Creation d'un tableau de string
	Array<std::string> test3(2);
	test3[0] = "Foo";
	test3[1] = "Bar";
	std::cout << "Tableau de string : " << test3;

	// Copie du tableau de string
	Array<std::string> test4 = test3;
	std::cout << "Copie du tableau de string :" << test4;
	test3[0] = "Plop";
	test4[0] = "Mush";

	std::cout << "Tableau de string 1 modifie : " << test3;
	std::cout << "Tableau de string 2 modifie : " << test4;

	// Exception index invalide
	test2[100] = 42;

	return (0);
}
