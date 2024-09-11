/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:17:04 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 18:12:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"

class	Dog : public AAnimal
{
	public:
		Dog		( void );
		Dog		( const Dog &other );
		Dog		&operator=( const Dog &other );
		~Dog	( void );

		void	makeSound( void ) const;
	private:
} ;

#endif
