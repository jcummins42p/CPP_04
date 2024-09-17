/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:50:33 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 17:43:30 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) : _type("default") {
	std::cout << "Created new AMateria of type" << _type << std::endl;
}

AMateria::AMateria( std::string const &type ) : _type(type) {
	std::cout << "Created new AMateria of type" << _type << std::endl;
}

AMateria::AMateria( const AMateria &other) : _type(other._type) {
	std::cout << "Created copied AMateria of type" << _type << std::endl;
}

AMateria &AMateria::operator=( const AMateria &other ) {
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria::~AMateria( void ) {}

std::string const &AMateria::getType( void ) const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout	<< _type << " uses undefined powers towards abstract object"
				<< target.getName() << std::endl;
}
