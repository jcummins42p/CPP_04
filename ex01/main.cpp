/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 17:45:16 by jcummins         ###   ########.fr       */
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
	std::cout << "Creating meta, animal object" << std::endl;
	const Animal		*meta = new Animal();
	std::cout << "Creating buster, animal object" << std::endl;
	const Animal		*buster = new Dog();
	std::cout << "Creating louis, animal object" << std::endl;
	const WrongAnimal	*louis = new WrongCat();
	std::cout << "Creating felix, animal object" << std::endl;
	const Cat			pepper;
	std::cout << "Creating rex, animal object" << std::endl;
	const Dog			rex;
	std::cout << "Creating fido, animal object" << std::endl;
	const Dog			fido(rex);

	std::cout << std::endl << "Testing animal sounds" << std::endl;
	meta->makeSound();
	buster->makeSound();
	louis->makeSound();
	rex.makeSound();

	std::cout << std::endl << "Testing brain function" << std::endl;
	rex.fillBrain(20);
	pepper.fillBrain(88);
	rex.getIdeas();
	pepper.getIdeas();

	std::cout << std::endl << "Testing vomit facility" << std::endl;
	pepper.vomitLoudly();
	
	std::cout << std::endl << "Testing animal destructors" << std::endl;
	return 0;
}
