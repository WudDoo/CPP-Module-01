/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:49:15 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/08 16:39:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates, names and returns a zombie.
// The zombie is allocated in the heap so it can be used outside of the function scope
Zombie*	newZombie( std::string name ) {
	return (new Zombie(name));
}