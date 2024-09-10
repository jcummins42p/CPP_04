/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 17:16:46 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class	Animal
{
	public:
		Animal	( std::string type );
		Animal	( const Animal &other );
		Animal	&ooperator=( const Animal &other );
		~Animal ( void );

	protected:
		std::string	type;
} ;

#endif
