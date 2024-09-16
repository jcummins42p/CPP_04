/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:42:20 by jcummins         ###   ########.fr       */
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
	std::cout << "Mumblemumble" << std::endl;
}

const std::string	Animal::getType( void ) const
{
	return _type;
}
