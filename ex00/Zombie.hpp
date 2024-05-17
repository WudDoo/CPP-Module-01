/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:39:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 18:04:38 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif