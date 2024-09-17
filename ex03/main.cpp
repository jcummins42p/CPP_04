/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:02:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 18:59:00 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

void	sweep(AMateria **floor)
{
	for (int i = 0; i < 100; i++)
		if (floor[i])
		{
			std::cout 	<< "Sweeping up dropped " << floor[i]->getType()
						<< std::endl;
			delete floor[i];
		}
}

void	drop(ICharacter *dropper, int idx, AMateria **floor)
{
	static int flooridx;

	if (flooridx == 100)
	{
		std::cout << "The floor is full, drop it elsewhere!" << std::endl;
		return;
	}
	floor[flooridx] = dropper->unequip(idx);
	flooridx++;
}

void	pickup(ICharacter *picker, int idx, AMateria **floor)
{
	if (idx < 0 || idx > 99 || !floor || !floor[idx])
	{
		std::cout << "...can't seem to find that..." << std::endl;
		return;
	}
	picker->equip(floor[idx]);
	floor[idx] = NULL;
}

int	main(void)
{
	AMateria *floor[100];
	for (int i = 0; i < 100; i++)
		floor[i] = NULL;
	Character dave("Dave");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	drop(me, 0, floor);
	pickup(me, 0, floor);
	pickup(me, 7, floor);

	delete bob;
	delete me;
	delete src;

	//sweep(floor);

	return (0);
}
