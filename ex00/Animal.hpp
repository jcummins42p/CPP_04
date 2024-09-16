/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:51:25 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal	( void );
		Animal	( const Animal &other );
		Animal	&operator=( const Animal &other );
		~Animal ( void );

		virtual void	makeSound( void ) const;
		const			std::string	getType( void ) const;
	protected:
		std::string	_type;
} ;

#endif
