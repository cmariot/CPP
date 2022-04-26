/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:08:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/19 11:14:42 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const d);

int main(void)
{
	// Les points a b et c sont les sommets d'un triangle
	Point a(2.0f, 2);
	Point b(4, 5.0f);
	Point c(7, 3);


	// On veut tester si le point d est a l'interieur du triangle
	Point d(3.0f, 3.0f);					// Dans le triangle
	//Point d(a);							// Sur un sommet -> pas dans le triangle
	//Point d(3.0f, 3.5f);					// Sur une arrete -> pas dans le triangle
	//Point d;								// Pas dans le triangle (0, 0)

	bsp(a, b, c, d);

	return (0); 
}
