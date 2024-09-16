/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:29:32 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal()
{
	std::cout << "\tConstructed new animal" << std::endl;
}

AWrongAnimal::AWrongAnimal( const AWrongAnimal &other ) : _type(other._type)
{
	std::cout << "\tConstructed copied animal" << std::endl;
}

AWrongAnimal &AWrongAnimal::operator=( const AWrongAnimal &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tCostructed copy assigned animal" << std::endl;
	return (*this);
}

AWrongAnimal::~AWrongAnimal( void )
{
	std::cout << "\tDestroyed animal" << std::endl;
}

const std::string	AWrongAnimal::getType( void ) const
{
	return _type;
}
