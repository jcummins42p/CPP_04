/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:31:07 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 14:39:03 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource( void ) {}
		virtual void learnMateria( AMateria * ) = 0;
		virtual AMateria *createMateria( std::string const &type ) = 0;
} ;

#endif
