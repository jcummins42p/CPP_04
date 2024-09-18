/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/18 14:34:26 by jcummins         ###   ########.fr       */
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
	const WrongAnimal* i = new WrongCat();
	const Animal* j = new Dog();
	const Animal* k = new Dog();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;

	return 0;
}
