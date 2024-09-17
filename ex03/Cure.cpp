/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:21:11 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 17:52:38 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	std::cout << "Created new " << _type << std::endl;
}

Cure::Cure( const Cure &other ) {
	_type = other.getType();
	std::cout << "Created copied " << _type << std::endl;
}

Cure &Cure::operator=( const Cure &other ) {
	if (this != &other)
	{
		this->_type = other.getType();
	}
	std::cout 	<< "Copy assigned from " << other.getType()
				<< " to " << this->_type << std::endl;
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Destroyed " << _type << std::endl;
}

void	Cure::use(ICharacter &target) {
	std::cout	<< "* heals " << target.getName()
				<< "'s wounds *" << std::endl;
}

AMateria	*Cure::clone( void ) const {
	return (new Cure(*this));
}
