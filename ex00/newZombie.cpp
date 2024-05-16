/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:49:15 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/16 16:33:56 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates, names and returns a zombie.
// The zombie is allocated in the heap and returned so it can be used outside of the function scope
Zombie*	newZombie( std::string name ) {
	Zombie* newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}