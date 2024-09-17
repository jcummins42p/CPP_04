/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:49:48 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 18:25:42 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "Creating default MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other )
{
	std::cout << "Creating copied MateriaSource" << std::endl;
	*this = other;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &other )
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	std::cout << "Copy assigned MateriaSource" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	std::cout << "Destroyed MateriaSource" << std::endl;
}

void MateriaSource::learnMateria( AMateria *materia )
{
	for (int i = 0; i < 4; i++)
		if (!_inventory[i])
		{
			_inventory[i] = materia->clone();
			delete materia;
			std::cout	<< "Learned new " << _inventory[i]->getType()
						<< std::endl;
			return ;
		}
	std::cout 	<< "Inventory full: throuwing away " << materia->getType()
				<< std::endl;
	delete materia;
}

AMateria *MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
			return ( _inventory[i]->clone() );
	std::cout	<< "Hmm... I don't know that materia..." << std::endl;
	return NULL;
}
