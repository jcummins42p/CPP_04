/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:19:32 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 16:27:18 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria( void );
		AMateria( std::string const &type );
		AMateria( const AMateria &other );
		AMateria &operator=( const AMateria &other );
		virtual ~AMateria(void);

		std::string const &getType( void ) const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string	_type;
} ;

#endif
