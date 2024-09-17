/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:09:46 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 18:15:49 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character( void ) :
	ICharacter(),
	_name("default"),
	_itemCount(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Created new character called " << _name << std::endl;
}

Character::Character( std::string const name ) :
	ICharacter(),
	_name(name),
	_itemCount(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Created new character called " << _name << std::endl;
}

Character::Character( const Character &other ) : ICharacter()
{
	_name = other.getName();
	_itemCount = other.getItemCount();
	for (int i = 0; i < 4; i++)
		_inventory[i] = other._inventory[i]->clone();
	std::cout << "Created copied character called " << _name << std::endl;
}

Character &Character::operator=( const Character &other ) {
	if (this != &other)
	{
		this->_name = other.getName();
		this->_itemCount = other.getItemCount();
		for (int i = 0; i < 4; i++)
			_inventory[i] = other._inventory[i]->clone();
	}
	std::cout << "Created copied character called " << _name << std::endl;
	return (*this);
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	std::cout << "Destroyed character called " << _name << std::endl;
}

std::string const &Character::getName( void ) const {
	return _name;
}

int	const	&Character::getItemCount( void ) const {
	return _itemCount;
}

void Character::equip(AMateria *m) {
	int	idx = 0;
	if (!m)
	{
		std::cout << "Nothing to pick up!" << std::endl;
		return ;
	}
	while (idx < 4 && _inventory[idx] )
		idx++;
	if (idx == 3 && _inventory[idx])
	{
		std::cout << "Inventory full!" << std::endl;
		return;
	}
	_inventory[idx] = m;
	std::cout	<< _name << " picked up "
				<< _inventory[idx]->getType() << " materia." << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
	{
		std::cout << "Nothing to unequip in that slot" << std::endl;
	}
	std::cout	<< _name << " put down "
				<< _inventory[idx]->getType() << " materia." << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
	{
		std::cout << "Nothing to use in that slot" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}
