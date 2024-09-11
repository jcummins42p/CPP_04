/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:11:59 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 16:40:08 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	_type = "Dog";
	std::cout << "\tConstructed new dog" << std::endl;
}

Dog::Dog( const Dog &other) : Animal(other)
{
	_type = other._type;
	std::cout << "\tConstructed copied dog" << std::endl;	
}

Dog &Dog::operator=( const Dog &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tConstructed copy assigned dog" << std::endl;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "\tDestroyed dog" << std::endl;
}
