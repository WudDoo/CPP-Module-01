/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:39:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 15:45:05 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	_name;

	public:
		// Constructors
		Zombie( void );
		Zombie( std::string name );

		// Destructor
		~Zombie( void );

		// Setter
		void	setName( std::string name );

		// Public member functions
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif