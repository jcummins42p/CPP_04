/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:04:58 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 18:05:06 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	_type = "Cat";
	std::cout << "\tConstructed new cat" << std::endl;
}

Cat::Cat( const Cat &other ) : Animal(other)
{
	_type = other._type;
	std::cout << "\tConstructed copied cat" << std::endl;
}

Cat	&Cat::operator=( const Cat &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tConstructed copy assigned cat" << std::endl;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "\tDestroyed cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::string message = "Meow";;

	for (int i = 0; i < 99; i++)
		if (_brain->getIdea(i) == "Eat Grass")
			message = "*LOUD VOMIT NOISES*";
	std::cout << message << std::endl;
}
