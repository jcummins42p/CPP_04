/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 17:18:26 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

class	Cat : public Animal
{
	public:
		Cat		( void );
		Cat		( const Cat &other );
		Cat 	&operator=( const Cat &other );
		~Cat	( void );

	private:
}
