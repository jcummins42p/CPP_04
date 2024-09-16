/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:27:05 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal
{
	public:
		AAnimal	( void );
		AAnimal	( const AAnimal &other );
		AAnimal	&operator=( const AAnimal &other );
		~AAnimal ( void );

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
