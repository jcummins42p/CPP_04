/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:46:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 17:34:00 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &other );
		MateriaSource &operator=( const MateriaSource &other );
		~MateriaSource( void );

		void		learnMateria( AMateria * );
		AMateria 	*createMateria( std::string const &type );
	private:
		AMateria	*_inventory[4];
} ;

#endif
