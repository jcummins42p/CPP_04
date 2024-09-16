/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:13 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:23:45 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _brain(new Brain())
{
	std::cout << "\tConstructed new animal" << std::endl;
}

AAnimal::AAnimal( const AAnimal &other ) : _type(other._type)
{
	if (other._brain)
		_brain = new Brain(*other._brain);
	else
		_brain = new Brain;
	std::cout << "\tConstructed copied animal" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &other )
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
		}
		_type = other._type;
	}
	std::cout << "\tCostructed copy assigned animal" << std::endl;
	return (*this);
}

AAnimal::~AAnimal( void )
{
	delete _brain;
	std::cout << "\tDestroyed animal" << std::endl;
}

void AAnimal::makeSound( void ) const
{
	if (_type == "Dog")
		std::cout << "Woof!!!" << std::endl;
	else if (_type == "Cat")
		std::cout << "Meow" << std::endl;
	else
		std::cout << "Mumblemumble" << std::endl;
}

void	AAnimal::getIdeas( void ) const
{
	std::cout << "\nGetting all ideas from this " << _type << "'s brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Idea #" << i << ": " << _brain->getIdea(i) << std::endl;
	}
}

void	AAnimal::setIdea( const std::string newidea ) const
{
	if (_brain->getIdeaIndex() > 99)
		_brain->setIdeaIndex(0);
	_brain->setIdea(_brain->getIdeaIndex(), newidea);
	_brain->incrIdeaIndex();
}

void	AAnimal::fillBrain( int ideas ) const
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

const std::string	AAnimal::getType( void ) const
{
	return _type;
}
