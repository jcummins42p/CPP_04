/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:00:21 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 19:02:54 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	public:
		Brain ( void );
		Brain ( const Brain &other );
		Brain &operator=( const Brain &other );
		~Brain ( void );

		const std::string	getIdea( int i );
		int					getIdeaIndex( void );
		void				setIdeaIndex( int i );
		void				incrIdeaIndex( void );
		void				setIdea( int i, std::string newidea );
	protected:
		std::string			_ideas[100];
		int					_idea_index;
} ;

#endif
