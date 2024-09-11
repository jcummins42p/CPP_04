/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/11 17:55:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat		( void );
		Cat		( const Cat &other );
		Cat 	&operator=( const Cat &other );
		~Cat	( void );

		void	makeSound( void ) const;
	private:
} ;

#endif
