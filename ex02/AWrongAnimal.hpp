/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 19:09:28 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWRONGANIMAL_HPP
# define AWRONGANIMAL_HPP

#include <iostream>

class	AWrongAnimal
{
	public:
		AWrongAnimal	( void );
		AWrongAnimal	( const AWrongAnimal &other );
		AWrongAnimal	&operator=( const AWrongAnimal &other );
		virtual ~AWrongAnimal	( void );

		virtual void	makeSound( void ) const = 0;
		const			std::string	getType( void ) const;
	protected:
		std::string	_type;
} ;

#endif
