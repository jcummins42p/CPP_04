/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 19:16:49 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*menagerie[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2)
			menagerie[i] = new Cat();
		else
			menagerie[i] = new Dog();
	}

	std::cout << std::endl << "Testing animal sounds" << std::endl;
	menagerie[12]->makeSound();
	menagerie[13]->makeSound();
	menagerie[77]->makeSound();
	menagerie[89]->makeSound();

	std::cout << std::endl << "Testing brain function" << std::endl;
	menagerie[77]->fillBrain(20);
	menagerie[12]->fillBrain(88);
	menagerie[77]->getIdeas();
	menagerie[89]->getIdeas();

	for (int i = 0; i < 100; i++)
		delete menagerie[i];
	return 0;
}
