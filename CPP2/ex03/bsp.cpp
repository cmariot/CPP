/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:09:01 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/23 09:00:16 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed calcul_pente(Point a, Point b)
{
	return ((a.get_y() - b.get_y()) / (a.get_x() - b.get_x()));
}

// equation de droite :
// y = ax + b
void	calcul_equation_droite(Point x, Point y, Fixed *equation_droite)
{
	//Calcul de la pente entre les points A et B
	Fixed a = calcul_pente(x, y);
	
	//on remplace y et x par ceux du point x
	//a.get_y() = (pente * a.get_x()) + b

	Fixed b = x.get_y() - (a * x.get_x());

	equation_droite[0] = a;
	equation_droite[1] = b;
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

bool bsp(Point const a, Point const b, Point const c, Point const d)
{
	std::string array[6] =	{	
								"D est dans le meme demi plan que C par rapport a la droite AB",
								"D n'est pas dans le meme demi plan que C par rapport a la droite AB",
								"D est dans le meme demi plan que A par rapport a la droite BC",
								"D n'est pas dans le meme demi plan que A par rapport a la droite BC",
								"D est dans le meme demi plan que B par rapport a la droite AC",
								"D n'est pas dans le meme demi plan que B par rapport a la droite AC"
							};
	
	bool un = du_meme_cote(a, b, c, d, 1);
	if (un == true)
		std::cout << array[0] << std::endl << std::endl;
	else
		std::cout << array[1] << std::endl << std::endl;


	bool deux = du_meme_cote(b, c, a, d, 2);
	if (deux == true)
		std::cout << array[2] << std::endl << std::endl;
	else
		std::cout << array[3] << std::endl << std::endl;
	

	bool trois = du_meme_cote(a, c, b, d, 3);
	if (trois == true)
		std::cout << array[4] << std::endl << std::endl;
	else
		std::cout << array[5] << std::endl << std::endl;


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
