/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 16:38:04 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\tConstructed new animal" << std::endl;
}

Animal::Animal( const Animal &other ) : _type(other._type)
{
	std::cout << "\tConstructed copied animal" << std::endl;
}

Animal &Animal::operator=( const Animal &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tConstructed copy assigned animal" << std::endl;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "\tDestroyed animal" << std::endl;
}

void Animal::makeSound( void ) const
{
	if (_type == "Dog")
		std::cout << "Woof!!!" << std::endl;
	else if (_type == "Cat")
		std::cout << "Meow" << std::endl;
	else
		std::cout << "Mumblemumble" << std::endl;		
}

const std::string	Animal::getType( void ) const
{
	return _type;
}
