/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:16:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 18:51:42 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
		Character( void );
		Character( std::string name );
		Character( const Character &other );
		Character &operator=( const Character &other);
		~Character( void );

		std::string const 	&getName() const;
		int const 			&getItemCount() const;
		void 				equip(AMateria *m);
		AMateria			*unequip(int idx);
		void 				use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int			_itemCount;
} ;

#endif
