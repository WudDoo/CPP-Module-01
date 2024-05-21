/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:42:07 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 11:54:45 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	private:
		// Private member function
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
		// Constructor
		Harl();

		// Destructor
		~Harl();

		// Public member function
		void	complain( std::string level );
};

#endif
