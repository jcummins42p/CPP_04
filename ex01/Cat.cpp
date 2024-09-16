/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:04:58 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 19:00:12 by jcummins         ###   ########.fr       */
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

void Cat::makeSound( void ) const
{
	bool	vomswitch;

	for (int i = 0; i < 100; i++)
		if (_brain->getIdea(i) == "Eat Grass")
			vomswitch = true;
	if (!vomswitch)
		std::cout << "Meow!" << std::endl;
	else
		std::cout << "Barf!" << std::endl;
}

void	Cat::vomitLoudly( void ) const
{
	for (int i = 0; i < 100; i++)
		if (_brain->getIdea(i) == "Eat Grass")
			std::cout << "BHGLEEAAHHHHHHhhhhhh....." << std::endl;
}
