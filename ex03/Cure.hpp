/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:42:23 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 16:39:00 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( const Cure &other );
		Cure &operator=( const Cure &other );
		~Cure( void );

		void use( ICharacter &target );
		AMateria *clone() const;
} ;

#endif
