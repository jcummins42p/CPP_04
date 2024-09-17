/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:05:53 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 18:52:09 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter( void ) {};

		virtual	std::string const &getName() const = 0;
		virtual void 		equip(AMateria *m) = 0;
		virtual AMateria	*unequip(int idx) = 0;
		virtual void 		use(int idx, ICharacter &target) = 0;
	protected:
		std::string _name;
} ;

#endif
