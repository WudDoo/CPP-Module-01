/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:39:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 12:58:29 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	name;

	public:
		// Constructors
		Zombie( void );
		Zombie( std::string name );

		// Destructor
		~Zombie( void );

		// Public member functions
		void	setName( std::string name );
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif