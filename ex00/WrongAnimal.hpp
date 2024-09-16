/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 11:38:03 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal	( void );
		WrongAnimal	( const WrongAnimal &other );
		WrongAnimal	&operator=( const WrongAnimal &other );
		~WrongAnimal ( void );
		
		void	makeSound( void ) const;
		const std::string	getType( void ) const;
	protected:
		std::string	_type;
} ;

#endif
