/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/15 16:51:12 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Fixed calcul_pente(Point a, Point b)
{
	return ((a.get_y() - b.get_y()) / (a.get_x() - b.get_x()));
}

void	calcul_equation_droite(Point a, Point b, Fixed *equation_droite)
{
	//Calcul de la pente entre les points A et B
	Fixed pente = calcul_pente(a, b);
	
	//equation de droite :
	//y = ax + b
	//ou a correspond a la pente

	//on remplace y et x par ceux du point a
	//a.get_y() = (pente * a.get_x()) + b

	Fixed c = a.get_y() - (pente * a.get_x());

	equation_droite[0] = pente;
	equation_droite[1] = c;
}

/* La droite AB separe le plan en deux ;
 * Si le sommet C du triangle est dans un des demi plan,
 * D doit etre dans ce demi plan pour etre dans le triangle
 * si D satisfait cette condition pour les trois demi plan du triangle, il est dans le triangle. */

bool dans_le_meme_demi_plan(Point c, Fixed *equation_droite, Point d)
{
	Fixed	signe_demi_plan = equation_droite[0] * c.get_x() + equation_droite[1] - c.get_y();
	Fixed	demi_plan_de_d = equation_droite[0] * d.get_x() + equation_droite[1] - d.get_y();

	if (demi_plan_de_d > 0 && signe_demi_plan > 0)
		return (true);
	else if (demi_plan_de_d < 0 && signe_demi_plan < 0)
		return (true);
	else
		return (false);
}

bool	du_meme_cote(Point a, Point b, Point c, Point d, int i)
{
	Fixed	equation_droite[2];

	calcul_equation_droite(a, b, equation_droite);

	if (i == 1)
		std::cout << "Equation droite AB : y = " << equation_droite[0] << "x + " << equation_droite[1] << std::endl;
	else if (i == 2)
		std::cout << "Equation droite BC : y = " << equation_droite[0] << "x + " << equation_droite[1] << std::endl;
	else if (i == 3)
		std::cout << "Equation droite AC : y = " << equation_droite[0] << "x + " << equation_droite[1] << std::endl;

	return (dans_le_meme_demi_plan(c, equation_droite, d));
}

bool bst(Point const a, Point const b, Point const c, Point const d)
{

	bool un = du_meme_cote(a, b, c, d, 1);
	if (un == true)
		std::cout << "D est dans le meme demi plan que C par rapport a la droite AB" << std::endl;
	else
		std::cout << "D n'est pas dans le meme demi plan que C par rapport a la droite AB" << std::endl;
	std::cout << std::endl;


	bool deux = du_meme_cote(b, c, a, d, 2);
	if (deux == true)
		std::cout << "D est dans le meme demi plan que A par rapport a la droite BC" << std::endl;
	else
		std::cout << "D n'est pas dans le meme demi plan que A par rapport a la droite BC" << std::endl;
	std::cout << std::endl;
	

	bool trois = du_meme_cote(a, c, b, d, 3);
	if (trois == true)
		std::cout << "D est dans le meme demi plan que B par rapport a la droite AC" << std::endl;
	else
		std::cout << "D n'est pas dans le meme demi plan que B par rapport a la droite AC" << std::endl;
	std::cout << std::endl;

	if (un == true && deux == true && trois == true)
	{
		std::cout << "D est a l'interieur du triangle ABC." << std::endl;
		return (true);
	}
	else
	{
		std::cout << "D n'est pas a l'interieur du triangle ABC." << std::endl;
		return (false);
	}
}

int main(void)
{
	Point a(2.0f, 2);
	Point b(4, 5.0f);
	Point c(7, 3);
	
	Point e(3.0f, 3.5f);

	Point d(3.0f, 3.0f);	// Dans le triangle
	//Point d(a);			// Sur un sommet -> pas dans le triangle
	//Point d = e;		// Sur une arrete -> pas dans le triangle
	//Point d;				// Pas dans le triangle (0, 0)

	bst(a, b, c, d);

	return 0; 
}
