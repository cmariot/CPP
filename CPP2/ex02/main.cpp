/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/18 18:44:33 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void	test_operateurs_comparaison(void)
{
	std::cout << "Tests operateurs de comparaison :" << std::endl;
	
	Fixed		c(0.5f);
	Fixed		d(1.0f);

	//Operateur de comparaison <
	if (c < d)	//vrai
		std::cout << c << " < " << d << std::endl;
	else
		std::cout << "Erreur" << std::endl;

	if (d < c)	//faux
		std::cout << "Erreur" << std::endl;
	else
		std::cout << d << " < " << c << " : retourne faux" << std::endl;

	if (c < c)	//faux
		std::cout << "Erreur" << std::endl;
	else
		std::cout << c << " < " << c << " : retourne faux" << std::endl;


	//Operateur de comparaison >
	if (d > c)	//vrai
		std::cout << d << " > " << c << std::endl;
	else
		std::cout << "Erreur" << std::endl;


	//Operateur de comparaison <=
	if (c <= d)	//vrai
		std::cout << c << " <= " << d << std::endl;
	else
		std::cout << "Erreur" << std::endl;

	if (c <= c)	//vrai
		std::cout << c << " <= " << c << std::endl;
	else
		std::cout << "Erreur" << std::endl;

	//Operateur de comparaison >=
	if (d >= c)	//vrai
		std::cout << d << " >= " << c << std::endl;
	else
		std::cout << "Erreur" << std::endl;

	if (d >= d)	//vrai
		std::cout << d << " >= " << d << std::endl;
	else
		std::cout << "Erreur" << std::endl;


	//Operateur de comparaison ==
	if (c == c)	//vrai
		std::cout << c << " == " << c << std::endl;
	else
		std::cout << "Erreur" << std::endl;


	//Operateur de comparaison !=
	if (c != d)	//vrai
		std::cout << c << " != " << d << std::endl;
	else
		std::cout << "Erreur" << std::endl;

}

void	test_operateurs_arithmetiques(void)
{
	Fixed	a(4.0f);
	Fixed	b(2.0f);

	std::cout << "Tests operateurs arithmetiques :" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	Fixed	c(0.0f);
	std::cout << a << " / " << c << " = " << a / c << std::endl;
}

void	test_operateurs_incrementation(void)
{
	Fixed	a(1.5f);

	std::cout << "Tests operateurs incrementation/decrementation :" << std::endl;

	std::cout << "Avant: a = " << a << "; a++ -> " << a++ << "; Apres: a = " << a << std::endl;
	std::cout << "Avant: a = " << a << "; ++a -> " << ++a << "; Apres: a = " << a << std::endl;
	std::cout << "Avant: a = " << a << "; a-- -> " << a-- << "; Apres: a = " << a << std::endl;
	std::cout << "Avant: a = " << a << "; --a -> " << --a << "; Apres: a = " << a << std::endl;
}

void	test_min_max(void)
{
	Fixed	a(0.25f);
	Fixed	b(1);

	std::cout << "Tests min/max :" << std::endl;
	std::cout << "Min entre " << a << " et " << b << " -> " << Fixed::min(a, b) << std::endl;
	std::cout << "Max entre " << a << " et " << b << " -> " << Fixed::max(a, b) << std::endl;

	Fixed const	c(2.5f);
	Fixed const	d(42);

	std::cout << "Min entre " << c << " et " << d << " (constants) -> " << Fixed::min(c, d) << std::endl;
	std::cout << "Max entre " << c << " et " << d << " (constants) -> " << Fixed::max(c, d) << std::endl;

	std::cout << "Comparaison constant et non constant :" << std::endl;
	std::cout << "Min entre " << a << " et " << c << " -> " << Fixed::min(a, c) << std::endl;
	std::cout << "Max entre " << a << " et " << c << " -> " << Fixed::max(a, c) << std::endl;
	std::cout << "Min entre " << d << " et " << b << " -> " << Fixed::min(d, b) << std::endl;
	std::cout << "Max entre " << d << " et " << b << " -> " << Fixed::max(d, b) << std::endl;
}

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	//Tests supplementaires :
	std::cout << std::endl;
	test_operateurs_comparaison();
	std::cout << std::endl;
	test_operateurs_arithmetiques();
	std::cout << std::endl;
	test_operateurs_incrementation();
	std::cout << std::endl;
	test_min_max();


	return 0; 
}
