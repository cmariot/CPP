/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:41:24 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/11 09:11:54 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void test1(void)
{
	Character charles("Charles");
	Character toto("Toto");

	AMateria *cure = new Cure;
	AMateria *ice = new Ice;

	charles.equip(ice);
	charles.use(0, toto);

	toto.equip(cure);
	toto.use(0, toto);
}

void test2(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("Ice");
    me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(2);
	
	delete bob;
	delete me;
	delete src;
}

int	main(void)
{
//	test1();
	test2();
	return (0);
}
