/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/18 17:31:47 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* meta2 = meta;
	const WrongAnimal* i = new WrongCat();
	const Animal* j = new Dog();
	const Animal* k = new Dog();

	Animal copycat;
	{
		const Cat ogcat;
		copycat = ogcat;
	}
	copycat.makeSound();

	std::cout << meta2->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	meta2->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;

	return 0;
}
