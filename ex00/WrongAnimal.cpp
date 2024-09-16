/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:47:55 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\tConstructed new animal" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) : _type(other._type)
{
	std::cout << "\tConstructed copied animal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tCostructed copy assigned animal" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "\tDestroyed animal" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Mumblemumble" << std::endl;
}

const std::string	WrongAnimal::getType( void ) const
{
	return _type;
}
