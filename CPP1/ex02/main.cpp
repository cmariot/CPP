/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:50:50 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 14:05:59 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	//variable de type string
	std::string		str = "HI THIS IS BRAIN";
	//pointeur sur la string
	std::string		*stringPTR = &str;
	//reference sur la string
	std::string		&stringREF = str;

	std::cout << "Adresse de la string:           " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Valeur de la string:           " << str << std::endl;
	std::cout << "Valeur pointée par stringPTR:  " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF:  " << stringREF << std::endl;

	return (0);
}
