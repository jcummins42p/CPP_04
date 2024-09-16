/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:04:58 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:29:58 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : AWrongAnimal()
{
	_type = "Cat";
	std::cout << "\tConstructed new cat" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : AWrongAnimal(other)
{
	_type = other._type;
	std::cout << "\tConstructed copied cat" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &other )
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "\tConstructed copy assigned cat" << std::endl;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "\tDestroyed cat" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	if (_type == "Cat")
		std::cout << "Woof!!!" << std::endl;
	else if (_type == "Dog")
		std::cout << "Meow" << std::endl;
	else
		std::cout << "Mumblemumble" << std::endl;
}
