/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/08 17:15:32 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {	
}

Zombie::Zombie( std::string name ) {
	this->setName(name);
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->name << " has been destroyed" <<std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}