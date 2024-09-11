/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 17:54:23 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	public:
		Animal	( void );
		Animal	( const Animal &other );
		Animal	&operator=( const Animal &other );
		~Animal ( void );
		
		virtual void	makeSound( void ) const = 0;
		const			std::string	getType( void ) const;
		void			getIdeas( void ) const;
		void			setIdea( const std::string newidea ) const; 
		void			fillBrain( int ideas ) const;
	protected:
		std::string	_type;
		Brain		*_brain;
} ;

#endif
