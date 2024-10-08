/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 18:31:01 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "AWrongAnimal.hpp"

class	WrongCat : public AWrongAnimal
{
	public:
		WrongCat	( void );
		WrongCat	( const WrongCat &other );
		WrongCat 	&operator=( const WrongCat &other );
		~WrongCat	( void );

	private:
		void		makeSound( void ) const;
} ;

#endif
