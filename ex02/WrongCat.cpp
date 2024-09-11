/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:04:58 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 16:41:43 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	_type = "Cat";
	std::cout << "\tConstructed new cat" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal(other)
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
