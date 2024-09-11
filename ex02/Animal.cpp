/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 18:03:22 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _brain(new Brain())
{
	std::cout << "\tConstructed new animal" << std::endl;
}

Animal::Animal( const Animal &other ) : _type(other._type)
{
	if (other._brain)
		_brain = new Brain(*other._brain);
	else
		_brain = new Brain;
	std::cout << "\tConstructed copied animal" << std::endl;
}

Animal &Animal::operator=( const Animal &other )
{
	if (this != &other)
	{
		if (other._brain)
		{
			delete _brain;
			_brain = new Brain(*other._brain);
		}
		else
		{
			delete _brain;
			_brain = nullptr;
		}
		_type = other._type;
	}
	std::cout << "\tCostructed copy assigned animal" << std::endl;
	return (*this);
}

Animal::~Animal( void )
{
	delete _brain;
	std::cout << "\tDestroyed animal" << std::endl;
}

void	Animal::getIdeas( void ) const
{
	std::cout << "\nGetting all ideas from this " << _type << "'s brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Idea #" << i << ": " << _brain->getIdea(i) << std::endl;
	}
}

void	Animal::setIdea( const std::string newidea ) const
{
	if (_brain->getIdeaIndex() > 99)
		_brain->setIdeaIndex(0);
	_brain->setIdea(_brain->getIdeaIndex(), newidea);
	_brain->incrIdeaIndex();
}

void	Animal::fillBrain( int ideas ) const
{
	std::string dogthoughts[5] = {
							"Chase sticks",
							"Eat Food",
							"Roll in dirt",
							"Growl in sleep",
							"Bark at shadows"
							};
	
	std::string catthoughts[5] = {
							"Look Disapprovingly",
							"Eat Grass",
							"Shit in a box",
							"Chirp at birds",
							"Claw someone's leg"
							};
	std::string	*thoughts;

	if (_type == "Cat")
		thoughts = catthoughts;		
	if (_type == "Dog")
		thoughts = dogthoughts;		

	for (int i = 0; i <= ideas; i++)
		this->setIdea(thoughts[i % 5]);
}

const std::string	Animal::getType( void ) const
{
	return _type;
}
