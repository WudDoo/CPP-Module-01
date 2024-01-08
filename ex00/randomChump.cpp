/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:52:43 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/08 17:17:02 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates and names a zombie, and the zombie announces itself.
// The zombie is allocated in the stack, since it's not returned. 
void	randomChump( std::string name ) {
	Zombie newZombie(name);
	newZombie.announce();
}
