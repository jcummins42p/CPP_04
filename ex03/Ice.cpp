/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:15:39 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 17:52:25 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	std::cout << "Created new " << _type << std::endl;
}

Ice::Ice( const Ice &other ) {
	_type = other.getType();
	std::cout << "Created copied " << _type << std::endl;
}

Ice &Ice::operator=( const Ice &other ) {
	if (this != &other)
	{
		this->_type = other.getType();
	}
	std::cout 	<< "Copy assigned from " << other.getType()
				<< " to " << this->_type << std::endl;
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Destroyed " << _type << std::endl;
}

void	Ice::use(ICharacter &target) {
	std::cout	<< "* shoots an ice bolt at " << target.getName()
				<< " *" << std::endl;
}

AMateria	*Ice::clone( void ) const {
	return (new Ice(*this));
}
