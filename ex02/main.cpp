/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 19:07:59 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "AAnimal.hpp"
#include "AWrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	std::cout << "Creating buster, animal object" << std::endl;
	const AAnimal		*buster = new Dog();
	std::cout << "Creating louis, animal object" << std::endl;
	const AWrongAnimal	*louis = new WrongCat();
	std::cout << "Creating felix, animal object" << std::endl;
	const Cat			felix;
	std::cout << "Creating rex, animal object" << std::endl;
	const Dog			rex;
	std::cout << "Creating fido, animal object" << std::endl;
	const Dog			fido(rex);
	//const AAnimal		impossible;

	std::cout << std::endl << "Testing animal sounds" << std::endl;
	buster->makeSound();
	louis->makeSound();
	rex.makeSound();
	felix.makeSound();

	std::cout << std::endl << "Testing brain function" << std::endl;
	rex.fillBrain(20);
	felix.fillBrain(88);
	rex.getIdeas();
	felix.getIdeas();

	felix.makeSound();
	std::cout << std::endl << "Testing animal destructors" << std::endl;
	delete buster;
	delete louis;
	return 0;
}
