/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:57:02 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 19:04:46 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) : _idea_index(0)
{
	std::cout << "\tConstructed new brain" << std::endl;
}

Brain::Brain ( const Brain &other )
{
	_idea_index = other._idea_index;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	std::cout << "\tConstructed copy brain" << std::endl;
}

Brain &Brain::operator=( const Brain &other )
{
	if (this != &other)
	{
		_idea_index = other._idea_index;
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	std::cout << "\tConstructed copy assigned brain" << std::endl;
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "\tDestroyed brain" << std::endl;
}

const std::string	Brain::getIdea( int i )
{
	return (_ideas[i]);
}

int	Brain::getIdeaIndex( void )
{
	return (_idea_index);
}

void	Brain::setIdeaIndex( int i )
{
	_idea_index = i;
}

void	Brain::incrIdeaIndex( void )
{
	_idea_index++;
}

void	Brain::setIdea( int i, std::string newidea )
{
	_ideas[i] = newidea;
}
